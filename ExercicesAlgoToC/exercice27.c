#include <stdio.h>
#include <stdbool.h>

void exercice27()
{
	long long int number;
	bool found = false;
	int counter = 2;

	printf("Entrez un nombre :\n");
	scanf("%lld", &number);

	while ((getchar()) != '\n');

	while(found == false && counter < number)
	{
		if (number % counter == 0)
		{
			found = true;
		}

		counter++;
	}

	if(!found)
	{
		printf("Le nombre %lld est premier.\n", number);
	}
	else
	{
		printf("Le nombre %lld n'est pas premier.\n", number);
	}
}