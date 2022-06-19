#include <stdio.h>
#include <math.h>

int main()
{
	int fn[3] = {1,1,0}, fn_total = 0, n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	do
	{
		//fn[2] = 1;
		fn[2] = fn[0] + fn[1];
		//printf("fn %d e %d fn_total %d\n", fn[0], fn[1], fn[2]);
		fn[0] = fn[1];
		fn[1] = fn[2];
		//printf("------------------------fn %d e %d fn_total %d\n", fn[0], fn[1], fn[2]);
		//fn_total++;
	}while(fn[2] <= n);
	printf("O valor de fibonacci e: %d", fn[2]);
	return 0;
}
