#include <stdio.h>
#include <math.h>

int main()
{
  int valor = -1, i, divisores[i], n_count = 1, soma = 0, count = 0;
  while (valor < 0)
  {
    printf("Digite um numero (maior ou igual a 1): ");
    scanf("%d", &valor);
  }
  do
  {
    for (i = 2; i - 2 < valor; i++)
    {
      if (n_count % i == 0)
      {
        //printf("valor: %i \n", valor);
        divisores[count] = i;
        printf("%i e divisivel por %d\n", n_count, divisores[count]);
        count++;

        //printf("count: %d\n", count);
      }
      //else
      //{
        //soma += count;
        //printf("count: %d soma: %d\n", count, soma);
        //i++;
        //count++;
      //}
    }
    n_count++;
    if (count < 2 && valor )
    {
      soma += count;
      printf("count: %d soma: %d\n", count, soma);
      i++;
      count++;
    }
  }while (i < valor);
  return 0;
}
