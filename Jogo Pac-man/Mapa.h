struct mapa
{
	char **matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA; // o typedef deixa voce apelidar uma struct
void alocamapa(MAPA *m);
void lemapa(MAPA *m);
void liberamapa(MAPA *m);
void imprimemapa(MAPA *m);
