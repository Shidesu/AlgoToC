#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exercice24()
{
	int product = 0;

	for(int i = 1; i < 13; i++)
	{

		printf("Table de multiplication de %d :\n", i);
		for (int j = 1; j < 13; j++)
		{
			printf("\t%d * %d = %d\n", i, j, i * j);

		}
		printf("\n");
	}
}