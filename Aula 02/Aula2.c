#include <stdio.h>

int main()
{
	// Imprime o cabealho do jogo
	printf("****************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhação *\n");
	printf("****************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual é o seu Chute?");
	//scanf lê o teclado
	scanf("%d", &chute);
	printf("Seu chute foi: %d", chute);
}