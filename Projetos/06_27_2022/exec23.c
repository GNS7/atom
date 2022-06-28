#include <stdio.h>


int main()
{
  int arr_A[5], arr_B[5], arr_C[5], soma = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite um valor para o vetor A: ");
    scanf("%d", &arr_A[i]);
  }

  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Digite um valor para o vetor B: ");
    scanf("%d", &arr_B[i]);
  }

  printf("\n");
  printf("Vetor A: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr_A[i]);
  }

  printf("\n");
  printf("Vetor B: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr_B[i]);
  }

  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    arr_C[i] = arr_A[i] * arr_B[i];
    soma += arr_C[i];
  }
  printf("Produto escalar: %d", soma);
  return 0;
}
