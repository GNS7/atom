#include <stdio.h>

int main() {
    int mat[5][5], count = 0, pos_X[2], x, status = 0;
  	for (int i = 0; i < 5; i++)
  	{
  		for (int j = 0; j < 5; j++)
  		{
  			printf("Digite um valor: ");
  			scanf("%d", &mat[i][j]);
  		}
  	}
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for (int i = 0; i <5; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        if (mat[i][j] == x)
        {
          pos_X[0] = i;
          pos_X[1] = j;
          status = 1;
        }
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
    if (status == 1)
    {
      printf("O numero esta em mat[%d][%d]", pos_X[0], pos_X[1]);

    }
    else if (status == 0)
    {
      printf("Numero nao encontrado");
    }

 return 0;
}
