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

int main() {
	all_flashcards flashcards = {0};
	return EXIT_SUCCESS;
}
