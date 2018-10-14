#include <stdio.h>

void exercice12()
{
	int age = 0;

	printf("Entrez l'ƒge de l'enfant :\n");
	scanf("%d", &age);

	switch (age)
	{
	case 6: case 7:
		printf("Poussin\n");
		break;
	case 8: case 9:
		printf("Pupille\n");
		break;
	case 10: case 11:
		printf("Minime\n");
		break;
	default:
		if (age < 12)
			printf("¶ge non valide.\n");
		else
		printf("Cadet\n");
		break;
	}
}
