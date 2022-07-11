#include <stdio.h>

int main() {
  int mat[3][3], trans_mat[3][3], soma = 0;
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
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j != i)
      {
        trans_mat[j][i] = mat[i][j];
      }
      else if (i == j)
      {
        trans_mat[i][j] = mat[i][j];
      }
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", trans_mat[i][j]);
    }
    printf("\n");
  }


 return 0;
}
