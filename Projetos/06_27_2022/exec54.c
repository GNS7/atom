#include <stdio.h>
#include <stdlib.h>


//void fill_matrix(char a[5][10]);
//void fill_arr(char a[10]);
void nota(char a[5][10], char b[10], int c[5]);


int main() {
	char mat[5][10], gabarito[10];
	int resultado[5] = {0, 0, 0, 0, 0};
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("Digite a resposta do %d aluno: ", i);
			scanf("%s", &mat[i][j]);

		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Digite as respostas do gabarito: ");
		scanf("%s", &gabarito[i]);
	}
  //fill_matrix(mat);
  //fill_arr(gabarito);
	nota (mat, gabarito, resultado);


  //           TESTING               //
  printf("Matriz: ");
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%c ", mat[i][j]);
    }
    printf("\n");
  }
  printf("gabarito: ");
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%c ", gabarito[i]);
  }
  printf("\n");
  printf("resultado: ");
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", resultado[i]);
  }
  printf("\n");
  /////////////////////////////////////


	for (int i = 0; i < 5; i++)
	{
		printf("Resultado do %d aluno: %d/10 \n", i, resultado[i]);
	}
	return 0;
}












void nota(char a[5][10], char b[10], int c[5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			if (a[i][j] == b[i])
			{
				c[i] += 1;
			}

		}
	}
}
// void fill_matrix(char a[5][10])
// {
// 	char characters[] = {'a', 'b', 'c', 'd'};
// 	int random_char;
// 	char random;
// 	for (int i = 0; i < 5; i++)
// 	{
// 		for (int j = 0; j < 10; j++)
// 		{
// 			random_char = rand() % sizeof(characters);
// 			random = characters[random_char];
// 			a[i][j] = random;
// 		}
// 	}
// }
// void fill_arr(char a[10])
// {
// 	char characters[] = {'a', 'b', 'c', 'd'};
// 	int random_char;
// 	char random;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		random_char = rand() % sizeof(characters);
//     random = characters[random_char];
//     a[i] = random;
// 	}
// }
