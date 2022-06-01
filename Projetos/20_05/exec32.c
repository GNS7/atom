#include <stdio.h>
#include <math.h>

int main()
{
  int codigo; //codigo do produto no menu
  int quant; //quantidade de cada item
  float preco; //preço de cada item
  do
  {
    printf("     MENU     \n Cachorro quente  cod: 100  preco: 1.20 \n Bauru Simples  cod: 101  preco: 1.30 \n Bauru com ovo  cod: 102  preco: 1.50 \n Hamburguer  cod: 103  preco: 1.20 \n Cheeseburguer  cod: 104  preco: 1.70 \n Suco  cod: 105  preco: 2.20 \n Refrigerante  cod: 106  preco: 1.00. \n Digite um codigo: \n");
    scanf("%i", codigo);
    /*if (codigo < 100 || codigo > 106)
    {
      printf("Codigo nao reconhecido.");
      break;
    }*/
    printf("Quantidade: ");
    scanf("%d", quant);
  } while (codigo < 100 || codigo > 106);
  switch (codigo) //se o valor de codigo corresponder a um dos cases o switch imprime a resposta
  {
    case 100:
    {
      preco = 1.20;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
    case 101:
    {
      preco = 1.30;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
    case 102:
    {
      preco = 1.50;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
    case 103:
    {
      preco = 1.20;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
    case 104:
    {
      preco = 1.70;
      printf("O preco do seu pedido e igual a: %f", preco);
    } break;
    case 105:
    {
      preco = 2.20;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
    case 106:
    {
      preco = 1.00;
      printf("O preco do seu pedido e igual a: %f", preco * quant);
    } break;
  }
return 0;
}
