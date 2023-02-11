#include <stdio.h>
#include <string.h>

int main()
{
	char palavraSecreta[20];
	sprintf(palavraSecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;

	do
	{
		// começando jogo
		for (int i = 0; i < strlen(palavraSecreta); i++)
		{
			printf("_");
		}
		printf("\n");
		char chute;
		scanf(" %c", &chute);

	} while (!acertou && !enforcou);
}