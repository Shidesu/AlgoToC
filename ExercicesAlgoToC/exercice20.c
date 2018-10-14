#include <stdio.h>

void exercice20()
{
	double a, b, c;
	double resultatDivision = 0;
	int tempVar = 0;
	int nombreRadiateur = 0;


	printf("Entrez la longueur, la largeur et la hauteur de la piäce :\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	resultatDivision = (a * b * c / 8.0f);
	tempVar = (int)resultatDivision;

	if ((double)tempVar == resultatDivision)
		nombreRadiateur = tempVar;
	else
		nombreRadiateur = tempVar + 1;

	printf("Il faut %d radiateurs pour chauffer la piäce.\n", nombreRadiateur);

}