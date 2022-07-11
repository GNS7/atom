#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int mat[5][5], count = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      mat[i][j] = rand() % 99; //cria numeros aleatorios de 0 a 99
    }
  }
  for (int i = 0; i < 5; i++) //loop da matriz
  {
    for (int j = 0; j < 5; j++) //loop da matriz
    {
      do
      {
        for (int k = 0; k < 5; k++) //2 loop da matriz para comparar os valores
        {
          for (int l = 0; l < 5; l++)
          {
            if (mat[i][j] == mat[k][l]) //verivicar valores repetitidos
            {
              mat[k][l] += 1;
              mat[i][j] -= 1;
            }
          }
        }
        count++;
      } while (count < 10);
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
