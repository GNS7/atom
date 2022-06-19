#include <stdio.h>
#include <math.h>

int main()
{
  int valor, quant, quant_num = 0, quant_par = 0;
  printf("Quantdade de valores: ");
  scanf("%d", &quant);
  for (int i = 0; i < quant; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &valor);
    ++quant_num;
    if (valor % 2 == 0)
    {
      ++quant_par;
    }
    if (valor == 1000)
    {
      break;
    }
  }
  printf("Valores lidos: %d e valores pares: %d", quant_num, quant_par);
  return 0;
}
