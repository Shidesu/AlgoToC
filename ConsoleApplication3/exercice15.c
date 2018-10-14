#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exercice15()
{
	
	int number = 0;
	int guess = 0;

	srand(time(NULL));

	number = rand() % 100 + 1;

	printf("Essayez de deviner le nombre mystäre !\n");
	scanf("%d", &guess);

	while(guess != number)
	{
		if (guess < number)
		{
			printf("C'est plus !\n");
		}
		else
		{
			printf("C'est moins !\n");
		}

		scanf("%d", &guess);

	}

	printf("Bravo ! Le nombre mystäre Çtait bien %d.", number);

}