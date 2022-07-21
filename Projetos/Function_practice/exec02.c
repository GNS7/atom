#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int quad_perfeito (int a);

int main() {
	int n;
	printf ("digite um valor: ");
	scanf("%d", &n);
	if (quad_perfeito(n) == 1)
	{
		printf("%d e um quadrado perfeito", n);
	}
  else
  {
    printf("%d nao e um quadrado perfeito", n);
  }
	return 0;
}

int quad_perfeito (int a)
{
	if (a > 0)
	{
		if (sqrt(a) > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

}
