#include <stdio.h>
#include <math.h>


int main()
{
	int quant;
	int num = 0;
	printf("Digite um valor: ");
	scanf("%d", &quant); //quantidade de vezes que o loop roda
	for (int i = 0; i <= quant; i++)
	{
		printf("%d ", num);
		num += 1; //incremento de 1
	}
	return 0;
}
