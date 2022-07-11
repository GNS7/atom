#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int mat[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      mat[i][j] = rand() % 20;
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
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (j > i)
      {
        mat[i][j] = 0;
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

 return 0;
}
