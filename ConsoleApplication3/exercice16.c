#include <stdio.h>
#include <stdbool.h>

void exercice16()
{
	int a = 0;
	int b = 0;
	int c = 0;
	bool isRectangle = false;

	printf(
		"Veuillez entrer la longueur de chaque c“t‚ du triangle. Le c“t‚ le plus long sera d‚tect‚ par le programme.\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		if (b * b + c * c == a * a)
			isRectangle = true;
	}
	else if (b > a && b > c)
	{
		if (a * a + c * c == b * b)
			isRectangle = true;
	}
	else
	{
		if (a * a + b * b == c * c)
			isRectangle = true;
	}

	switch (isRectangle)
	{
	case true:
		printf("Le triangle est rectangle !\n");
		break;
	case false:
		printf("Le triangle n'est pas rectangle !\n");
		break;
	default:
		break;
	}

}
