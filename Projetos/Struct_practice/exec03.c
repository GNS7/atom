#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct baralho
{
	int valor_carta;
	char carta_maior_10[20];
	char naipe;
}baralho;

int main() {
	baralho a[5], b[5];
	srand(time(NULL));
	char naipes[4][10] =
	{
		"ouros",
		"paus",
		"espadas",
		"copas"
	};
	int posicao;
	//for (int i = 0; i < 2; i++)
	//{
	for (int j = 0; j < 5; j++)
	{
		a[j].valor_carta = rand() % 13;
		posicao = rand() % 4;
		a[j].naipe = naipes[posicao]; //////////////
	}
	//}

	//for (int i = 0; i < 2; i++)
	//{
	for (int j = 0; j <5; j++)
	{
		printf("A 1 mao: %d de %s\n", j, a[j].valor_carta, a[j].naipe);
	}
  for (int i = 5; i <10; i++)
  {
    printf("A 2 mao: %d de %s\n", i, a[i].valor_carta, a[i].naipe);
  }
	//}
	return 0;
}
