#include <stdio.h>
using namespace std;
void main() {
	char input[125];
	int characters;
	printf("Input some text here, to check if it is even\n\n");
	scanf("%[^s]s", input);
	for (int i = 0; i < input[i] != '\0'; i++)
	{
		characters = i;
	}
	if (characters % 2 == 0)
	{
		printf("\n\nThe number of characters entered are even.\n");
	}
	else {
		printf("\n\nThe number of characters entered are odd.\n");
	}
}