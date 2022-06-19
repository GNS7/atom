#include <stdio.h>
#include <math.h>

int main()
{
	int valor, n = 0, soma = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			soma += n;
		}
		++n;
	}
	printf("soma: %d", soma);
	return 0;
}
