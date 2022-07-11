#include <stdio.h>

int main() {
	int mat[4][4], count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Digite um valor: ");
			scanf("%d", &mat[i][j]);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (mat[i][j] > 10)
			{
				++count;
				printf("Matriz[%d][%d]: %d\n", i, j, mat[i][j]);
			}
		}
	}
	printf("%d numeros maiores que 10", count);
	return 0;
}
