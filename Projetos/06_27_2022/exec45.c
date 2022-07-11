#include <stdio.h>

int main() {
  int mat[4][4], mat1[4][4], maior[4][4], x = 0, y = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Digite um valor: ");
			scanf("%d", &mat[i][j]);
		}
	}
  printf("\n");
  for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Digite um valor: ");
			scanf("%d", &mat1[i][j]);
		}
	}
  for (int i = 0; i < 4; i++)
  {
    y = 0;
    for (int j = 0; j < 4; j++)
    {
      if (mat1[i][j] <= mat[i][j])
      {
        maior[x][y] = mat[i][j];
        y++;
        printf("X: %d Y: %d \n", x, y);
      }
      else if (mat1[i][j] > mat[i][j])
      {
        maior[x][y] = mat1[i][j];
        y++;
        printf("X: %d Y: %d \n", x, y);
      }
    }
    x++;
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", maior[i][j]);
    }
    printf("\n");
  }
 return 0;
}
