#include <stdio.h>


int main()
{
  int arr_A[10], arr_B[10], arr_C[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor para o vetor A: ");
    scanf("%d", &arr_A[i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor para o vetor B: ");
    scanf("%d", &arr_B[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    arr_C[i] = arr_A[i] - arr_B[i];
  }
  printf("O vetor resultante C: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr_C[i]);
  }
  return 0;
}
