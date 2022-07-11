#include <stdio.h>

int main() {
  int mat[5][5], count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
      mat[i][j] = i * j;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
      printf("%d ", mat[i][j]);
		}
    printf("\n");
	}
 return 0;
}
