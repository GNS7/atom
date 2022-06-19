#include <stdio.h>
#include <math.h>


int main()
{
	int quant, num_quant, num_maior, num_menor, temp;
	num_maior = 0;
	num_menor = 10;
	do
	{
		printf("Digite um valor: ");
		scanf("%d", &temp);
		if (temp > num_maior)
		{
			num_maior = temp;
		}
		if (temp < num_menor)
		{
			if (temp <= 0)
			{
				break;
			}
			else
			{
				num_menor = temp;
			}
		}
	} while (temp > 0);
	printf("Maior valor: %d, menor valor: %d\n", num_maior, num_menor);
	//printf("o %d apareceu %d vezes", num_maior, num_quant);
	return 0;
}
