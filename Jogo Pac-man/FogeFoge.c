#include <stdio.h>

int main()
{
	// Matrix de 5 x 10
	char mapa[5][10];

	mapa[0][0] = '|';
	mapa[4][9] = '@';

	printf("%c %c", mapa[0][0], mapa[4][9]);
}