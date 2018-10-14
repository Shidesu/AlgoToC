#include <stdio.h>

void exercice13()
{
	float fahrenheit = 0;
	float celsius = 0;

	printf("Entrez une temp‚rature en degr‚s Fahrenheit :\n");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32.0f) / 1.8f;

	printf("Cela correspond … %f degr‚s Celsius.\n", celsius);

}