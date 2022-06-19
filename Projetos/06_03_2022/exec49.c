#include <stdio.h>
#include <math.h>

int main()
{
  float Carlos, Joao, poupanca = 0, fundo_renda = 0, count = 0;
  Carlos = 12000;
  Joao = Carlos / 3;
  poupanca += Carlos;
  fundo_renda += Joao;
  do
  {
    poupanca += (Carlos * 0.02);
    Carlos = poupanca;
    fundo_renda += (Joao * 0.05);
    Joao = fundo_renda;
    count++;
    //printf("poupanca: %f, fundo_renda: %f, count: %f\n", poupanca, fundo_renda, count);
  }while(Joao <= Carlos);
  printf("Foram necessarios %.0f meses para Joao igualar/superar Carlos", count);

  return 0;
}
