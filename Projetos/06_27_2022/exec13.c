#include <stdio.h>
#include <math.h>

int main()
{
  int arr[10], maior = -10000, menor = 10000, count = 0, count_menor = 0;
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<10; i++)
  {
    if (arr[i] > maior)
    {
      maior = arr[i];
      count = i;
    }
    else if (arr[i] < menor)
    {
      menor = arr[i];
      count_menor = i;
    }
  }
  printf("O maior valor esta na %d posicao: %d, e o menor em %d: %d \n", count, maior, count_menor, menor);


  return 0;
}
