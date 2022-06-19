#include <stdio.h>
#include <math.h>

int main()
{
	int n, pow2_n, pow3_n, sqrt_n;
	do
	{
		printf("Digite um numero: ");
		scanf("%d", &n);
		pow2_n = pow(n, 2);
		pow3_n = pow(n, 3);
		sqrt_n = sqrt(n);
		printf("elev. ao quadrado: %d, elev. ao cubo: %d, raiz quadrada: %d\n", pow2_n, pow3_n, sqrt_n);
	} while(n > 0);
	return 0;
}
