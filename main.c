#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Flashcard {
	char question[100];
	char answer[100];
} flashcard;

typedef struct All_Flashcards {
	int top_of_deck;
	flashcard cards[10];
} all_flashcards;

void create_flashcard(all_flashcards *flashcards) {
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

void print_flashcards(const all_flashcards *flashcards) {
	for(int i = 0; i < flashcards->top_of_deck; i++) {
		printf("%s\n", flashcards->cards[i].question);
		printf("%s\n", flashcards->cards[i].answer);
	}	
}

int main() {
	all_flashcards flashcards = {0};
	create_flashcard(&flashcards);
	print_flashcards(&flashcards);
	return EXIT_SUCCESS;
}
