#include <stdio.h>

void exercice26()
{
	int n = 0;
	double sum = 0;

	printf("Entrez un nombre :\n");
	scanf("%d", &n);

	while ((getchar()) != '\n');

	for(int i = 0; i < n; i++)
	{
		sum += 1.0 / (double)(i + 1);
	}

	printf("La somme de la suite est : %lf.\n", sum);
}