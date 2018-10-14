#include <stdio.h>
#include <stdlib.h>

void exercice14()
{
	int a = 0;
	int b = 0;
	int* arrayA = NULL;
	int* arrayB = NULL;
	int sommeA = 0;
	int sommeB = 0;

	printf("Entrez deux nombres :\n");
	scanf("%d %d", &a, &b);

	arrayA = malloc(sizeof(int) * a);
	arrayB = malloc(sizeof(int) * b);

	printf("Liste des diviseurs de a :\n");

	for (int i = 0; i < a; i++)
	{
		if (a % (i + 1) == 0)
		{
			arrayA[i] = i + 1;
			printf("%d\n", arrayA[i]);
			sommeA += arrayA[i];
		}
	}

	printf("Valeur de la somme des diviseurs de a : %d\n", sommeA);

	printf("Liste des diviseurs de b :\n");

	for (int i = 0; i < b; i++)
	{
		if (b % (i + 1) == 0)
		{
			arrayB[i] = i + 1;
			printf("%d\n", arrayB[i]);
			sommeB += arrayB[i];
		}
	}

	printf("Valeur de la somme des diviseurs de B : %d\n", sommeB);

	if (sommeA == sommeB && (a + b) == sommeA)
	{
		printf("Les nombres sont amicaux !\n");
	}
	else
	{
		printf("Les nombres ne sont pas amicaux.\n");
	}

	free(arrayA);
	free(arrayB);

}
