#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CARDS 10

enum options {
	CREATE = 1, PRINT, QUIT
};

typedef struct Flashcard {
	char question[100];
	char answer[100];
} flashcard;

typedef struct All_Flashcards {
	int top_of_deck;
	flashcard cards[MAX_CARDS];
} all_flashcards;

void create_flashcard(all_flashcards *flashcards) {
	// TODO: This should take in input from user. Read entire line
	flashcard new_flashcard = {
		.question = "What is the capitol of France?",
		.answer = "Paris"
	};
	flashcard new_flashcard2 = {
		.question = "How many states are in the USA?",
		.answer = 50	
	};

	flashcards->cards[flashcards->top_of_deck] = new_flashcard;
	flashcards->top_of_deck++;

	flashcards->cards[flashcards->top_of_deck] = new_flashcard2;
	flashcards->top_of_deck++;
}

// TODO: This function should be a study_cards() function that uses flip effect
void print_flashcards(const all_flashcards *flashcards) {
	for(int i = 0; i < flashcards->top_of_deck; i++) {
		printf("%s\n", flashcards->cards[i].question);
		printf("%s\n", flashcards->cards[i].answer);
	}	
}

void print_menu() {
	printf("\n---- Main Menu ----\n");
	printf("[1] Create flashcard\n[2] Print flashcards\n[3] Quit\n\n");
}

int main() {
	all_flashcards flashcards = {0};

	while(true) {
		print_menu();
		int option;
		scanf("%d", &option);

		switch(option) {
		case CREATE:
			create_flashcard(&flashcards);
			puts("\nFlashcards created");
			break;
		case PRINT:
			print_flashcards(&flashcards);
			break;
		case QUIT:
			break;
		default:
			printf("%d is not a valid option.\n");
		}

		if (option == '3') break;
	}

	return EXIT_SUCCESS;
}
