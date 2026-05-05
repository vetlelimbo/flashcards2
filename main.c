#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CARDS 10
#define QUESTION_BUFFER 100
#define ANSWER_BUFFER 100
#define OPTION_BUFFER 10

enum options {
	CREATE = 1, STUDY, PRINT, QUIT
};

typedef struct Flashcard {
	char question[QUESTION_BUFFER];
	char answer[ANSWER_BUFFER];
} flashcard;

typedef struct All_Flashcards {
	int top_of_deck;
	flashcard cards[MAX_CARDS];
} all_flashcards;

void create_flashcard(all_flashcards *flashcards) {
	// TODO: This should take in input from user. Read entire line
	flashcard new_flashcard;
	printf("Enter question: ");
	fgets(new_flashcard.question, QUESTION_BUFFER, stdin);
	printf("Enter answer: ");
	fgets(new_flashcard.answer, ANSWER_BUFFER, stdin);

	flashcards->cards[flashcards->top_of_deck] = new_flashcard;
	flashcards->top_of_deck++;
}

// TODO: This function should be a study_cards() function that uses flip effect
void print_flashcards(const all_flashcards *flashcards) {
	for(int i = 0; i < flashcards->top_of_deck; i++) {
		printf("%s\n", flashcards->cards[i].question);
		printf("%s\n", flashcards->cards[i].answer);
	}	
}

// TODO: Figure out why this doesn't work
void study_cards(all_flashcards *flashcards) {
	if (flashcards->top_of_deck == 0) {
		puts("Deck is empty. Create your first flashcard!\n");
		return;
	}

	for(int i = 0; i < flashcards->top_of_deck; i++) {
		char reveal;
		printf("%s\n", flashcards->cards[i].question);
		scanf("%c", &reveal);
		puts("Press ENTER to flip card");
		printf("%s\n", flashcards->cards[i].answer);
	}
}

void print_menu() {
	printf("\n---- Main Menu ----\n");
	printf("create | quit\n");
}

int main() {
	all_flashcards flashcards = {0};

	while(true) {
		print_menu();
		char user_option[OPTION_BUFFER];
		fgets(user_option, OPTION_BUFFER, stdin);
		user_option[strlen(user_option) - 1] = '\0';
		
		if (!strcmp("create", user_option)) {
			create_flashcard(&flashcards);
			printf("Flashcard created.\n");
		} else if(!strcmp("quit", user_option)) {
			printf("Quitting.\n");
			break;
		}
	}

	return EXIT_SUCCESS;
}
