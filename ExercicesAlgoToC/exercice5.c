#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exercice5()
{
	char* message = NULL;
	int size = 0;

	printf("Entrez un nombre :\n");
	scanf_s("%d", &size);

	message = malloc(sizeof(char) * size + 1);

	*message = *"";

	for (int i = 0; i < size; i++)
	{
		strcat(message, "X");
	}

	for (int j = 0; j < size; j++)
	{
		printf("%s\n", message);
	}
	free(message);
}
