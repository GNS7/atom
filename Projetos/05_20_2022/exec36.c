#include <stdio.h>
#include <math.h>

int main()
{
  int venda_mensal;
  int comissao;
  printf("Digite o valor da venda mensal: ");
  scanf("%d", &venda_mensal);
  if (venda_mensal >= 100000)
  {
    comissao = 700 + (venda_mensal * 0.16);
    printf("comissao: %d", comissao);
  }
  else if (venda_mensal < 100000 && venda_mensal >= 80000)
  {
    comissao = 650 + (venda_mensal * 0.14);
    printf("comissao: %d", comissao);
  }
  else if (venda_mensal < 80000 && venda_mensal >= 60000)
  {
    comissao = 600 + (venda_mensal * 0.14);
    printf("comissao: %d", comissao);
  }
  else if (venda_mensal < 60000 && venda_mensal >= 40000)
  {
    comissao = 550 + (venda_mensal * 0.14);
    printf("comissao: %d", comissao);
  }
  else if (venda_mensal < 40000 && venda_mensal >= 20000)
  {
    comissao = 500 + (venda_mensal * 0.14);
    printf("comissao: %d", comissao);
  }
  else if (venda_mensal < 20000)
  {
    comissao = 400 + (venda_mensal * 0.14);
    printf("comissao: %d", comissao);
  }
  return 0;
}
