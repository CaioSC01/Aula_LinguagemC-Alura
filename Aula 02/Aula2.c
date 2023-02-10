#include <stdio.h>

int main()
{
	// Imprime o cabealho do jogo
	printf("****************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhação *\n");
	printf("****************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual e o seu Chute?");
	// scanf lê o teclado
	scanf("%d", &chute);
	printf("Seu chute foi: %d\n", chute);

	int acertou = (chute == numeroSecreto);

	if (acertou)
	{
		printf("Parabens! Voce Acertou!!\n");
		printf("Voce e bom!!\n");
	}
	else
	{
		if (chute > numeroSecreto)
		{
			printf("Seu chute foi maior do que o numero secreto\n");
		}
		if (chute < numeroSecreto)
		{
			printf("Seu chute foi menor do que o numero secreto\n");
		}
		printf("Puts! Voce Errou!!\n");
		printf("Nao desanime tente denovo!!\n");
	}
}