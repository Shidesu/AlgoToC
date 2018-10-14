#include <stdio.h>

void exercice22()
{
	int number;
	char* months[] = {
		"Janvier", "F‚vrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Ao–t", "Septembre", "Octobre", "Novembre", "D‚cembre"
	};
	int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Entrez le num‚ro d'un mois :\n");
	scanf("%2d", &number);

	if ((number < 1 || number > 12))
	{
		printf("Saisie incorrecte !\n");
	}
	else
	{
		printf("Il y a %d jours en %s.\n", daysPerMonth[number - 1], months[number - 1]);
	}
}
