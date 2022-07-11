
#include <stdio.h>

int main() {
	int arr[10], temp = 0, count = 0;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &arr[i]);
  }
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("\narr[%d]: %d \n", i, arr[i]);
  // }
  do
  {
    for (int i = 0; i < 9; i++)
    {
      if (arr[i] > arr[i + 1]) //se o numero que aparece na menor posicao for maior que o prox numero
      {
        temp = arr[i + 1]; //armazena o valor
        //printf("\n\nTemp: %d e arr[%d]: %d \n\n", temp, i + 1, arr[i + 1]);
        arr[i + 1] = arr[i]; //o valor do menor vira o valor do maior
        arr[i] = temp; // o maior fica com o valor do menor
        //printf("\narr[%d]: %d e arr[%d]: %d \n", i, arr[i], i + 1, arr[i + 1]);
      }
    }
    count++;
  } while (count < 30);
  for (int i = 0; i < 10; i++)
  {
    printf("arr[%d]: %d \n", i, arr[i]);
  }
 return 0;
}
