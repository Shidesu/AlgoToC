#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "exercices.h"

int main(int argc, char argv[])
{
	bool continuer = true;
	int choixUtilisateur;

	while (continuer)
	{
		printf("¸Copyright Kao.\n");
		printf("Veuillez choisir l'exercice … ex‚cuter :\n");
		printf("0 : Quitter.\n");
		for (int i = 0; i < 30; i++)
		{
			printf("%d : Exercice num‚ro %d.\n", i + 1, i + 1);
		}
		scanf("%d", &choixUtilisateur);

		while ((getchar()) != '\n');

		switch (choixUtilisateur)
		{
		case 0:
			continuer = false;
			break;
		case 1:
			exercice1();
			break;
		case 2:
			exercice2();
			break;
		case 3:
			exercice3();
			break;
		case 4:
			exercice4();
			break;
		case 5:
			exercice5();
			break;
		case 6:
			exercice6();
			break;
		case 7:
			exercice7();
			break;
		case 8:
			exercice8();
			break;
		case 9:
			exercice9();
			break;
		case 10:
			exercice10();
			break;
		case 11:
			exercice11();
			break;
		case 12:
			exercice12();
			break;
		case 13:
			exercice13();
			break;
		case 14:
			exercice14();
			break;
		case 15:
			exercice15();
			break;
		case 16:
			exercice16();
			break;
		case 17:
			exercice17();
			break;
		case 18:
			exercice18();
			break;
		case 19:
			exercice19();
			break;
		case 20:
			exercice20();
			break;
		case 21:
			exercice21();
			break;
		case 22:
			exercice22();
			break;
		case 23:
			exercice23();
			break;
		case 24:
			exercice24();
			break;
		case 25:
			exercice25();
			break;
		case 26:
			exercice26();
			break;
		case 27:
			exercice27();
			break;
		case 28:
			exercice28();
			break;
		case 29:
			exercice29();
			break;
		case 30:
			exercice30();
			break;
		default:
			printf("Choix invalide, veuillez r‚essayer.\n");
			break;
		}
		system("PAUSE");
		system("CLS");
	}


	return 0;
}
