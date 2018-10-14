#include <stdio.h>
#include <string.h>

void exercice8()
{
	char string[255] = "";
	int counter = 0;

	do
	{
		counter++;
		printf("Entrez un mot :\n");
		scanf("%254s", string);
	}
	while (strcmp(string, "STOP") != 0);

	printf("Vous avez entr‚ %d mots avant de trouver le mot STOP", counter);
}
