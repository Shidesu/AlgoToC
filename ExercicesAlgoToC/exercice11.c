#include <stdio.h>

void exercice11()
{
	int a = 0;
	int b = 0;

	printf("Entrez deux nombres :\n");
	scanf("%d %d", &a, &b);

	if((a > 0 && b > 0) || (a < 0) && (b < 0))
	{
		printf("Le produit est positif !\n");
	}
	else
	{
		printf("Le produit est n‚gatif !\n");
	}

}