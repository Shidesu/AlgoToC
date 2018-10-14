#include <stdio.h>

void exercice1()
{
	int number = 0;

	printf("Veuillez entrer un nombre : \n");
	scanf_s("%d", &number);

	if (number > 9)
	{
		printf("Il y a au moins une dizaine.\n");
	}
	else
	{
		printf("Il n'y a pas de dizaine.\n");
	}
}
