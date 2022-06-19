#include <stdio.h>
#include <math.h>

int main()
{
  int n, altura, base, area; //declaração de variáveis
  printf("Digite o valor da altura do triangulo: ");
  scanf("%d", &altura);
  printf("Digite o valor da base do triangulo: ");
  scanf("%d", &base);
  if (altura <= 0 || base <= 0)
  {
    printf("Dados invalidos.");
    return 0;
  }
  else
  {
    area = (base * altura) / 2;
    printf("A area do triangulo e: %d\n", area);
  }
  return 0;
}
