#include <stdio.h>
#include <math.h>

int main()
{
  int custo_fabrica; //custo do produto quando sai da fabrica
  int distribuidor; // custo do distribuidor
  int impostos; //valor dos impostos
  int valor_final; //valor do produto + custo do distribuidor + valor dos impostos
  printf("Qual o custo de fabrica?");
  scanf("%d", &custo_fabrica);
  if (custo_fabrica <= 12000)
  {
    distribuidor = custo_fabrica * 0.05;
    valor_final = custo_fabrica + distribuidor;
  }
  else if (custo_fabrica > 12000 && custo_fabrica <= 25000)
  {
    distribuidor = custo_fabrica * 0.10;
    impostos = custo_fabrica * 0.15;
    valor_final = custo_fabrica + distribuidor + impostos;
  }
  else if (custo_fabrica > 25000)
  {
    distribuidor = custo_fabrica * 0.15;
    impostos = custo_fabrica * 0.2;
    valor_final = custo_fabrica + distribuidor + impostos;
  }
  printf("valor final: %d", valor_final);
  return 0;
}
