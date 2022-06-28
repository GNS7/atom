#include <stdio.h>
#include <math.h>

int main()
{
  int A[6] = {1, 0, 5, -2, -5, 7}, soma;
  soma = A[0] + A[1] + A[5];
  printf("soma: %d\n", soma);
  A[4] = 100;
  for (int i = 0; i < 6; i++) //loop para imprimir os valores do vetor A
  {
    printf("%d valor: %d\n", i, A[i]);
  }
  return 0;
}
