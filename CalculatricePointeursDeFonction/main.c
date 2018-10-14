#include <stdio.h>
#include <stdbool.h>

void choseOperation(int *chosenOperation);
void choseNumber(float* number1, float* number2);
float multiplication(float number1, float number2);
float addition(float number1, float number2);
float soustraction(float number1, float number2);
float division(float number1, float number2);

int main(int argc, char* argv[])
{
	bool continuer = true;

	while (continuer) {
		int chosenOperation = -1;
		float number1 = 0;
		float number2 = 0;
		float result = 0;
		float(*operations[4])(float num1, float num2);//functions pointers array

		operations[0] = addition;
		operations[1] = soustraction;
		operations[2] = division;
		operations[3] = multiplication;

		choseNumber(&number1, &number2); //passing vars by reference so we can change their value
		choseOperation(&chosenOperation);//same

		result = (*operations[chosenOperation])(number1, number2); //calling the good operation and storing the result

		printf("Le r‚sultat est: %f\n", result); //displaying the result
		printf("%s", "Voulez-vous continuer ?\n1 : Oui\n2 : Non\n");
		scanf_s("%f", &result);
		while ((getchar()) != '\n'); //cleaning the input buffer
		if (result == 2)
		{
			continuer = false;
		}
	}
}

void choseOperation(int* chosenOperation)
{
	while (!(*chosenOperation == 1 || *chosenOperation == 2 || *chosenOperation == 3 || *chosenOperation == 4))
	{	
		printf("Veuillez-choisir l'op‚ration … effectuer : \n");
		printf("1 : Addition\n2 : Soustraction\n3 : Division\n4 : Multiplication\n");
		scanf_s("%d", chosenOperation);
		while ((getchar()) != '\n');//cleaning the input buffer
		if (!(*chosenOperation == 1 || *chosenOperation == 2 || *chosenOperation == 3 || *chosenOperation == 4))
			printf("%s", "Op‚ration non support‚e\n");
	}
	*chosenOperation = *chosenOperation - 1;
}

void choseNumber(float* number1, float* number2)
{
	printf("Entrez le premier nombre :\n");
	scanf_s("%f", number1);
	while ((getchar()) != '\n');//cleaning the input buffer
	printf("Le second : \n");
	scanf_s("%f", number2);
	while ((getchar()) != '\n');//cleaning the input buffer
}

float multiplication(float number1, float number2)
{
	return number1 * number2;
}
float division(float number1, float number2)
{
	return number1 / number2;
}
float addition(float number1, float number2)
{
	return number1 + number2;
}
float soustraction(float number1, float number2)
{
	return number1 - number2;
}
