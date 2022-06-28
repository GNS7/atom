#include <stdio.h>
#include <math.h>

int main()
{
  int arr[8], x, y, soma;
  for(int i=0; i<8; i++)
  {
    printf("Digite um numero: ");
    scanf("%d",&arr[i]);
  }
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);
  soma = arr[x] + arr[y];
  printf("soma de arr[%d] e arr[%d]: %d", x, y, soma);

  return 0;
}
