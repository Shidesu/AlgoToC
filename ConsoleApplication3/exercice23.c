#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exercice23()
{
	char *message = NULL;
	int size = 0;

	printf("Entrez un nombre :\n");
	scanf("%5d", &size);

	message = malloc(sizeof(char) * size * 10 + 1);

	*message = *"";

	for(int i = 0; i < size; i++)
	{
		char tempString[12];

		sprintf(tempString, "%d ", i+1);

		strcat(message, tempString);

		printf("%s\n", message);
	}

	free(message);
}