#include <stdio.h>

int main() {
  int mat[4][4], count = 0, maior = 0, maiorp[2];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Digite um valor: ");
			scanf("%d", &mat[i][j]);
		}
	}
  for (int i = 0; i <4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (mat[i][j] > maior)
      {
        maior = mat[i][j];
        maiorp[0] = i;
        maiorp[1] = j;
      }
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("O maior numero e: %d em mat[%d][%d]", maior, maiorp[0], maiorp[1]);
 return 0;
}
