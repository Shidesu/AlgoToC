#include <stdio.h>

void exercice17()
{
	int a = 0;
	int b = 0;
	int reste = 0;

	printf("Entrez deux nombres :\n");
	scanf("%d %d", &a, &b);

	reste = a % b;

	printf("Le r‚sultat de la division euclidienne %d/%d est %d, et le reste est %d.\n", a, b, (a - reste) / b, reste);
}
