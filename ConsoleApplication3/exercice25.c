#include <stdio.h>

void exercice25()
{
	long int number = 0;
	long int power = 0;
	long int current = 1;

	printf("Entrez un nombre suivi de sa puissance :\n");
	scanf("%ld %ld", &number, &power);

	while ((getchar()) != '\n');

	for (int i = 0; i < power; i++)
	{
		current *= number;
	}
	printf("%ld^%ld = %ld\n", number, power, current);
}