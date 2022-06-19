#include <stdio.h>
#include <math.h>

int main()
{
	int num_maior, num_menor, temp;
	printf("Digite um valor: ");
	scanf("%d", &num_maior);
	num_menor = num_maior;
	for (int i = 0; i < 9; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &temp);
		if (temp < num_menor) //se o numero digitado é menor que o menor numero anterior, o numero digitado é armazenado
		{
			num_menor = temp;
		}
		else if (temp > num_maior) //se o numero digitado é maior que o maior numero anterior, o numero digitado é armazenado
		{
			num_maior = temp;
		}
	}
	printf("Maior valor: %d e menor valor: %d", num_maior, num_menor);
	return 0;
}
