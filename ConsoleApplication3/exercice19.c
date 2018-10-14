#include <stdio.h>

void exercice19()
{
	int a = 0;

	printf("Entrez un nombre :\n");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("Le nombre est pair !\n");
	else
		printf("Le nombre est impair !\n");
}