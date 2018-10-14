#include <stdio.h>

void exercice29()
{
	unsigned int decimalCalcul, decimal;
	int index = 0;
	short result[32] = {0};

	printf("Entrez un nombre positif :\n");
	scanf("%d", &decimal);

	while ((getchar()) != '\n');

	decimalCalcul = decimal;

	while(decimalCalcul > 1)
	{
		result[index] = decimalCalcul % 2;

		if(decimalCalcul % 2 == 0)
		{
			decimalCalcul /= 2;
		}
		else
		{
			decimalCalcul = (decimalCalcul - 1) / 2;
		}

		index++;
	}

	result[index] = decimalCalcul;

	printf("En binaire, le nombre d‚cimal %u s'‚crit : ", decimal);

	while(index >= 0)
	{
		printf("%d", result[index]);

		index--;
	}

	printf("\n");
}
