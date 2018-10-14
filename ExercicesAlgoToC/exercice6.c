#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exercice6()
{
	
	char *message = NULL;
	int size = 0;

	printf("Entrez un nombre :\n");
	scanf("%d", &size);

	message = malloc(sizeof(char) * size + 1);
	*message = *"";

	for(int i = 0; i < size; i++)
	{
		strcat(message, "X");
		printf("%s\n", message);
	}

}