#include <stdio.h>
#include <math.h>

int main()
{
  int Km; //declaração de variáveis
  int litros; //declaração de variáveis
  printf("Quantos kilometros o carro anda com o tanque cheio? \n");
  scanf("%d", &Km);
  printf("Quantos litros tem o tanque cheio? \n");
  scanf("%d", &litros);
  int Km_litros = Km / litros;
  if (Km_litros < 8)
  {
    printf("Venda o carro!");
  }
  else if (Km_litros >= 8 && Km_litros <= 14)
  {
    printf("Economico!");
  }
  else if (Km_litros >= 12)
  {
    printf("Super economico!");
  }
  return 0;
}
