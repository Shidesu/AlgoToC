#include <stdio.h>
#include <string.h>

void exercice3()
{
	char message[255] = {0};

	printf("Bonjour !\n");
	scanf("%s", message);

	while(strcmp(message, "Bonjour") != 0)
	{
		printf("Mal poli !\n");
		printf("Bonjour.\n");
		scanf("%s", message);
	}

	printf("Bravo ! Vous ˆtes bien ‚duqu‚.");

}