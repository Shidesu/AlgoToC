#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void exercice18()
{
	char* choix[3] = {"pierre", "papier", "ciseau"};
	int randomOrdi = 0;
	char choixOrdi[7];
	char choixJoueur[7];

	srand(time(NULL));

	printf("Entrez pierre, papier ou ciseau :\n");
	scanf("%6s", choixJoueur);

	randomOrdi = rand() % 3;
	strcpy(choixOrdi, choix[randomOrdi]);

	printf("Joueur joue %s, et Ordinateur joue %s.\n", choixJoueur, choixOrdi);

	if (strcmp(choixJoueur, choixOrdi) == 0)
	{
		printf("êgalitÇ !\n");
	}
	else if ((strcmp(choixJoueur, "pierre") == 0 && strcmp(choixOrdi, "ciseau") == 0) ||
		(strcmp(choixJoueur, "ciseau") == 0 && strcmp(choixOrdi, "papier") == 0) ||
		(strcmp(choixJoueur, "papier") == 0 && strcmp(choixOrdi, "pierre") == 0))
	{
		printf("Joueur gagne !\n");
	}
	else
	{
		printf("Joueur perd !\n");
	}
}
