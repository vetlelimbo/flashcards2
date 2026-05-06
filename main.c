#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	char jpn_char[5];
	char eng_char[5];
} hiragana;

char *students[3][3] = {
	{"Harry", "Ron", "Hermoine"}, 
	{"Luna", "Cho", "Flitwick"},
	{"Draco", "Krab", "Goyle"}

};

hiragana hiragana_alphabet[1][49] = 
{
	{
		{"\u3042", "A"}, {"\u3044", "I"}, {"\u3046", "U"}, {"\u3048", "E"},
		{"\u304A", "O"}, {"\u304b", "KA"}, {"\u304d", "KI"}, {"\u304f", "KU"},
		{"\u3051", "KE"}, {"\u3053", "KO"}, {"\u3055", "SA"}, {"\u3057", "SHI"},
		{"\u3059", "SU"}, {"\u305b", "SE"}, {"\u305d", "SO"}, {"\u305f", "TA"},
		{"\u3061", "CHI"}, {"\u3064", "TSU"}, {"\u3066", "TE"}, {"\u3068", "TO"},
		{"\u306a", "NA"}, {"\u306b", "NI"}, {"\u306C", "NU"}, {"\u306d", "NE"},
		{"\u306e", "NO"}, {"\u306f", "HA"}, {"\u3072", "HI"}, {"\u3075", "HU"},
		{"\u3078", "HE"}, {"\u307b", "HO"}, {"\u307e", "MA"}, {"\u307f", "MI"},
		{"\u3080", "MU"}, {"\u3081", "ME"}, {"\u3082", "MO"}, {"\u3048", "YA"},
		{"\u3068", "YU"}, {"\u3088", "YO"}, {"\u3089", "RA"}, {"\u308A", "RI"},
		{"\u308b", "RU"}, {"\u308c", "RE"}, {"\u308d", "RO"}, {"\u308f", "WA"},
		{"\u3090", "WI"}, {"\u3091", "WE"}, {"\u3092", "WO"}, {"\u3093", "N"},
		{"\u3094", "VU"}	
	}
};

void print_menu() {
	printf("\n-- Study --\n");
	printf("- Hiragana\n");
	printf("- Quit\n>> ");
}

void print_hiragana_options() {
	printf("\n-- Hiragana --\n");
	printf("[1] Core\n[2] Back\n\n>> ");
}

void study_hiragana() {
	while(true) {
		print_hiragana_options();
		char option = getc(stdin);	
		switch(option) {
			case '1':
				//hiragana_core();
				break;
			case '2':
				return;
			default:
				printf("%c is not a valid option.", option);
		}
	}	
}


int main() {
	while(true) {
		char user_option[10];
		print_menu();	
		fgets(user_option, 10, stdin);
		
		// remove the '\n' that fgets appends to input stream
		user_option[strlen(user_option) - 1] = '\0';

		if (!strcmp("Hiragana", user_option)) {
			study_hiragana();
		} else if (!strcmp("Quit", user_option)) {
			puts("Quitting.");
			break;
		}
		
	}

	return EXIT_SUCCESS;
}
