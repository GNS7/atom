#include <stdio.h>
#include <math.h>

int main()
{
  int codigo;
  float preco;
  printf("codigo:");
  scanf("%d", &codigo);
  switch (codigo)
  {
    case 100:
    {
      preco = 1.20;
      printf("O preco do seu pedido e igual a: %f", preco);
    } break;
    case 101: preco = 1.30; break;
    case 102: preco = 1.50; break;
    case 103: preco = 1.20; break;
    case 104: preco = 1.70; break;
    case 105: preco = 2.20; break;
    case 106: preco = 1.00; break;
  }
  return 0;
}
