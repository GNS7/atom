#include <stdio.h>

int main()
{
  int arr[10], maior = -10000, count = 0;
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
  }

  printf("O maior valor esta na %d posicao: %d", count, maior);
  return 0;
}
