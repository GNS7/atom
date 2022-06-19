#include <stdio.h>
#include <math.h>

int main()
{
	int idade, media = 0, quant = 0; //declaração de variáveis
	do {
		printf("Digite a idade: ");
		scanf("%d",&idade);
		if (idade <= 0)
		{
			printf ("idade invalida");
			break;
		}
		++quant;
		media += idade;
	} while( idade > 0);
	printf("\nmedia: %d", media / quant);

	return 0;
}
