#include <stdio.h>

int main()
{
  int arr[10], maior = -10000, menor =1000;
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
    }
    else if (arr[i] < menor)
    {
      menor = arr[i];
    }
  }

  printf("O maior valor e: %d e o menor: %d", maior, menor);
  return 0;
}
