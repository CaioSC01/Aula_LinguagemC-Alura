void alocamapa();
void lemapa();
void liberamapa();

int acabou();
void move(char direcao);
void imprimemapa();

struct mapa
{
	char **matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA; // o typedef deixa voce apelidar uma struct
