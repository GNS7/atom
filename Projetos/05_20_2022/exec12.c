#include <stdio.h>
#include <math.h>

int main()
{
  int num; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%d", &num);
  if (num > 0) //se num maior que 0
  {
    printf("O logaritmo de %i e igual a %.2f.", num, log10(num)); //logaritmo de num na base 10
  }
  else
  {
    printf("Numero invalido.");
  }
  return 0;
}
