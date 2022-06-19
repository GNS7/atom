#include <stdio.h>
#include <math.h>

int main()
{
  int valor = 0, i, divisores[i], count = 0;
  while (valor < 1)
  {
    printf("Digite um numero (maior ou igual a 1): ");
    scanf("%d", &valor);
  }
  do
  {
    for (i = 1; i < valor; i++)
    {
      if (valor % i == 0)
      {
        //printf("valor: %i \n", valor);
        divisores[count] = i;
        printf("%i e divisivel por %d\n", valor, divisores[count]);
        count++;
        //printf("count: %d\n", count);
      }
    }
    if (count < 2 && valor != 4)
    {
      printf("%d e primo", valor);
      break;
    }
  }while (i < valor);
  return 0;
}
