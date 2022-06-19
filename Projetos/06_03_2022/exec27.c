#include <stdio.h>
#include <math.h>

//int main()
{
  float harmonica = 0, soma_harmonica = 0;
  int n, divisor;
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  printf("valor de n: %d\n", n);
  for (divisor = 1; divisor <= n ; divisor++)
  {
    harmonica = 1 / divisor;
    printf ("harmonica: %f \n", harmonica);
    soma_harmonica = soma_harmonica + harmonica;
    printf("soma: %f \n", soma_harmonica);
  }
  printf("Soma harmonica: %d", soma_harmonica);
  return 0;
}
