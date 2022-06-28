#include <stdio.h>

int main()
{
  int arr[10];
  int repeat[2];
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<10; i++) //loop para comparar elementos dentro de um vetor
  {
    for(int j=i; j<10; j++)
    {
      if (arr[i] == arr[j + 1]) //compara o 1° valor com o resto do vetor
      {
        repeat[0] = arr[i];
        repeat[1] = arr[j + 1];
        printf("Os numeros que repetem sao: \narr[%i]: %d \narr[%d]: %d\n", i, repeat[0], j + 1, repeat[1]);
      }
    }
  }
  return 0;
}
