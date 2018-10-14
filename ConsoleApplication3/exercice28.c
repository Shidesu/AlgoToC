#include <stdio.h>
#include <stdbool.h>

void exercice28()
{
	long long int nombreBinaireCalcul, nombreBinaire;
	int somme = 0;
	int reste = 0;
	bool erreur = false;
	int puissance = 1;

	printf("Entrez un nombre :\n");
	scanf("%lld", &nombreBinaire);

	while ((getchar()) != '\n');

	nombreBinaireCalcul = nombreBinaire;

	while (nombreBinaireCalcul >= 10 && !erreur)
	{
		reste = nombreBinaireCalcul % 10;

		if (reste > 1)
		{
			erreur = true;
		}
		else
		{
			somme += puissance * reste;
			puissance *= 2;

			if (reste == 0)
				nombreBinaireCalcul /= 10;
			else
				nombreBinaireCalcul = (nombreBinaireCalcul - 1) / 10;
		}
	}

	if (!erreur && nombreBinaireCalcul < 2)
	{
		somme += puissance * nombreBinaireCalcul;

		printf("En d‚cimal, le nombre binaire %lld vaut : %d.\n", nombreBinaire, somme);
	}
	else
		printf("Le nombre %lld n'est pas un nombre binaire.\n", nombreBinaire);
}
