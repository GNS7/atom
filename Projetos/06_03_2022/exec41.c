#include <stdio.h>
#include <math.h>

int main()
{
	float r_1, r_2, temp, soma, multiplicado;
	float r_total;
	do
	{
		printf("Digite o valor da primeira resistencia: ");
		scanf("%f", &r_1);
		printf("Digite o valor da segunda: ");
		scanf("%f", &r_2);
		soma = (r_1 + r_2);
		multiplicado = (r_1 * r_2);
		//printf("soma %f multiplicado %f\n", soma, multiplicado);
		r_total = (soma / multiplicado);
		printf("O valor da resistencia e: %.2f\n", r_total);
	} while (r_total != 0);
	//printf("\nr1: %d e r2: %d", r_1, r_2);
	return 0;
}
