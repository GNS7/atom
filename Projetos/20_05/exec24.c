#include <stdio.h>
#include <math.h>

int main()
{
  int valor; //declaração de variáveis
  int estado; //declaração de variáveis
  printf("Qual o valor do produto? \n");
  scanf("%d",&valor);
  do
  {
    printf("Selecione um estado \n 1)Minas Gerais \n 2)Sao Paulo \n 3)Rio de Janeiro \n 4)Mato Grosso do Sul \n");
    scanf("%d", &estado);
    if (estado < 1 || estado > 4)
    {
      printf("Estado invalido.\n");
    }
  } while (estado < 1 || estado > 4);
  float mg = valor * 1.07;
  float sp = valor * 1.12;
  float rj = valor * 1.15;
  float ms = valor * 1.08;
  if (estado >= 1 && estado <= 4)
  {
    switch (estado) //se o valor de num corresponder a um dos cases o switch imprime a resposta
    {
      case 1: printf("%.2f", mg); break;
      case 2: printf("%.2f", sp); break;
      case 3: printf("%.2f", rj); break;
      case 4: printf("%.2f", ms); break;
    }
  }
  return 0;
}
