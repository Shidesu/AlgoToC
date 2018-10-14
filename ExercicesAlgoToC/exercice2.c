#include <stdio.h>

void exercice2()
{
	
	int userNumber = 0;

	printf("Entrez un nombre :\n");
	scanf_s("%d", &userNumber);

	while(userNumber < 10)
	{
		printf("Veuillez entrer un nombre sup‚rieur … 10 !\n");
		scanf_s("%d", &userNumber);
	}

	printf("Merci");

}