#include <stdio.h>

int main() {
  int mat[3][3], soma = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite um valor: ");
      scanf("%d", &mat[i][j]);
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j + i == 2)
      {
        soma += mat[i][j];
      }
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("Soma: %d", soma);


 return 0;
}
