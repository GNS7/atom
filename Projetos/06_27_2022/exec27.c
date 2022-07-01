#include <stdio.h>



int main()
{
  int arr[10], arr_primos[10], count = 0, posicao[10];
  for (int i = 0; i < 10; i++)
  {
    printf ("Digite um numero: ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    //for (int j = 0; j < 10; j++)
    //{
      if (arr[i] % 2 != 0 && arr[i] % 3 != 0) //verificar se o numero e primo
      {
      arr_primos[count] = arr[i];
      posicao[count] = i;
      count++;
      }
      if (arr[i] == 2 || arr[i] == 3) //exclusoes da regra
      {
        arr_primos[count] = arr[i];
        posicao[count] = i;
        count++;
      }
    //}
  }
  for (int i = 0; i < count; i++)
  {
    printf ("Primos[%d]: posicao antiga: %d e valor: %d \n", i, posicao[i], arr_primos[i]);
  }
  return 0;
}
