#include <stdio.h>

int main()
{
  int arr[10], maior = -10000, menor = 10000, count = 0, count_menor = 0;
  int repeat[2];
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<10; i++)
  {
    for(int j=i; j<10; j++)
    {
      if (arr[i] == arr[j + 1] && i != j + 1)
      {
        repeat[0] = arr[i];
        repeat[1] = arr[j + 1];
        printf("Os numeros que repetem sao: \narr[%i]: %d \narr[%d]: %d\n", i, repeat[0], j + 1, repeat[1]);
        //
        // count = i;
      }
    }
    //else if (arr[i] < menor)
    // {
      // menor = arr[i];
      // count_menor = i;
    // }
  }
  //printf("O maior valor esta na %d posicao: %d, e o menor em %d: %d \n", count, maior, count_menor, menor);


  return 0;
}
