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


int main() {
	for(int i = 0; i < 49; i++) {
		printf("%s ", hiragana_alphabet[0][i].jpn_char);
	}

	return EXIT_SUCCESS;
}
