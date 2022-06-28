#include <stdio.h>

int main()
{
  int arr[10], count_par = 0, count_impar = 0, soma = 0;
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<10; i++)
  {
    if(arr[i] % 2 == 0)
    {
      soma += arr[i];
      ++count_par;
    }
    else if(arr[i] % 2 != 0)
    {
      count_impar++;
    }
  }
  printf("O vetor possui %d valores impares \nA soma dos valores pares: %d", count_impar, soma);
  return 0;
}
