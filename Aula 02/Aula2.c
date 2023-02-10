#include <stdio.h>
// temos que evitar numeros que não estão declarados em variaveias ou constantes

int main()
{
	// Imprime o cabealho do jogo
	printf("****************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("****************************************\n");

	int numeroSecreto = 42;
	int chute;
	int tentativas = 1;
	// função de incrementar
	while (1)
	{
		printf("Tentativa %d\n", tentativas);
		printf("Qual e o seu Chute?");
		// scanf lê o teclado
		scanf("%d", &chute);
		printf("Seu chute foi: %d\n", chute);

		if (chute < 0)
		{
			printf("Voce não pode chutar numeros negativos\n");
			continue;
		}

		int acertou = (chute == numeroSecreto);
		int maior = (chute > numeroSecreto);

		if (acertou)
		{
			printf("Parabens! Voce Acertou!!\n");
			printf("Voce e bom!!\n");

			break;
			// dando ordens para o for parar de compilar
		}

		else if (maior)
		{
			printf("Seu chute foi maior do que o numero secreto\n");
		}
		else
		{
			printf("Seu chute foi menor do que o numero secreto\n");
		}
		tentativas++;
	}
	printf("Fim de Jogo \n");
	printf("Voce acertou em %d tentativas \n", tentativas);
}