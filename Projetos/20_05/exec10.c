#include <stdio.h>
#include <math.h>

int main()
{
  float altura; //declaração de variáveis
  int sexo; //declaração de variáveis
  float peso_i_H, peso_i_F; //declaração de variáveis
  printf("Digite a sua altura (em metro): \n");
  scanf("%f", &altura);
  printf("Digite o seu sexo (use 1 para masculino e 2 para feminino): \n");
  scanf("%d", &sexo);

  if (sexo == 1)
  {
    peso_i_H = (72.7 * altura) - 58; //formula dada no exec para peso ideal masculino
    printf("Seu peso ideal e: %.2f \n", peso_i_H);
  }
  else
  {
    peso_i_F = (62.1 * altura) - 44.7; //formula dada no exec para peso ideal feminino
    printf("Seu peso ideal e: %.2f \n", peso_i_F);
  }
  return 0;
}
