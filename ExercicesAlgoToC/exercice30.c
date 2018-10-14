#include <stdio.h>

void exercice30()
{
	long double real;
	long result;

	printf("Entrez un nombre r‚el :\n");
	scanf("%Lf", &real);

	while ((getchar()) != '\n');

	if (real >= 0)
		result = real + 0.5;
	else
		result = real - 0.5;

	printf("L'arrondi de %.15Lf est : %ld.\n", real, result);
}