#include <stdio.h>
struct Bandas
{
	char nome[100];
	char tipo_musica[100];
	int num_integrantes;
	int posicao_ranking;
};

int main() {
	struct Bandas B[5];
	for (int i = 0; i < 5; i++)
	{
		fflush (stdin);
		printf("O nome da banda: ");
		fgets (B[i].nome, 100, stdin);
	  fflush (stdin);
		printf("O estilo musical: ");
		fgets (B[i].tipo_musica, 100, stdin);
    fflush (stdin);
		printf("Numero de integrantes: ");
		scanf ("%d", &B[i].num_integrantes);
		printf("Posicao no seu top 5: ");
		scanf ("%d", &B[i].posicao_ranking);
		fflush (stdin);
	}
	for (int i = 0; i < 5; i++)
	{
		if (B[i].posicao_ranking == 1)
		{
			printf("O nome da banda: %s\n", B[i].nome);
			printf("O estilo musical: %s\n", B[i].tipo_musica);
			printf("Numero de integrantes: %d\n", B[i].num_integrantes);
			printf("Posicao no seu top 5: %d\n", B[i].posicao_ranking);
		}
	}
	return 0;
}
