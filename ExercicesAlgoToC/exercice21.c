#include <stdio.h>
#include <string.h>

void exercice21()
{
	long int seconds;
	int minutes = 0, hours = 0, reste;
	char* stringsChoix[] = {"heures", "heure", "minutes", "minute", "secondes", "seconde"};
	char hoursString[7], minutesString[8], secondsString[9];

	printf("Entrez un nombre de secondes … convertir :\n");
	scanf("%ld", &seconds);

	if (seconds >= 60)
	{
		reste = seconds % 60;
		minutes = (seconds - reste) / 60;
		seconds = reste;
		if (minutes >= 60)
		{
			reste = minutes % 60;
			hours = (minutes - reste) / 60;
			minutes = reste;
		}
	}

	if (seconds > 1)
		strcpy(secondsString, stringsChoix[4]);
	else
		strcpy(secondsString, stringsChoix[5]);

	if (minutes > 1)
		strcpy(minutesString, stringsChoix[2]);
	else
		strcpy(minutesString, stringsChoix[3]);

	if (hours > 1)
		strcpy(hoursString, stringsChoix[0]);
	else
		strcpy(hoursString, stringsChoix[1]);

	printf("La conversion donne %d %s, %d %s et %d %s.\n", hours, hoursString, minutes, minutesString, seconds,
	       secondsString);
}
