#include <stdio.h>

int main()
{
  int arr[5], maior = -10000, menor =1000, soma = 0, count = 0;
  float media;
  for(int i=0; i<5; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<5; i++)
  {
    if (arr[i] > maior)
    {
      maior = arr[i];
    }
    else if (arr[i] < menor)
    {
      menor = arr[i];
    }
    soma += arr[i];
    count++;
  }
  media = soma / count;
  printf("O maior valor e: %d e o menor: %d, media: %f\n", maior, menor, media);
  return 0;
}
