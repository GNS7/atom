#include <stdio.h>
#include <math.h>

int main()
{
  int ano; //declaração de variáveis
  printf("Digite o ano: \n");
  scanf("%d", &ano);
  if (ano % 400 == 0)
  {
    printf("Ano bissexto.");
  }
  else if (ano % 4 == 0)
  {
    if (ano % 100 == 0)
    {
      printf("Nao e um ano bissexto.");
      return 0;
    }
    printf("Ano bissexto.");
  }
  return 0;
}
