#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct cartas
{
	int valor, naipe;
}carta;

int main()
{
	carta a[5], b[5];

	srand(time(NULL));
	for (int i=0; i<5; i++)
	{
		a[i].valor=1+rand()%12;
		a[i].naipe=1+rand()%3;
	}
	for (int i=0; i<5; i++)
	{
		b[i].valor=1+rand()%12;
		b[i].naipe=1+rand()%3;
	}

	printf("1 mao\n");
	for (int i=0; i<5; i++)
	{
		printf("Carta: %i Naipe: %i\n", a[i].valor, a[i].naipe);
	}

	printf("2 mao\n");
	for (int i=0; i<5; i++)
	{
		printf("Carta: %i Naipe: %i\n", b[i].valor, b[i].naipe);
	}

	return 0;
}
