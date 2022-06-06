#include <stdio.h>
#include <math.h>

int main()
{
  int a = 5; //declaração de variáveis
  int b = 2; //declaração de variáveis
  int soma; //soma dos dois numeros
  int num_acerto = 0; //Quantidade de questoes acertadas
  printf("Qual e a soma de %d e %d? \n", a, b);
  scanf("%d", &soma);
  if (soma == 7)
  {
    printf("Resposta correta! \n");
    ++num_acerto;
  }
  else
  {
    printf("Resposta incorreta, a resposta correta e 7. \n");
  }
  a = 15;
  b = 12;
  soma;
  printf("Qual e a soma de %d e %d? \n", a, b);
  scanf("%d", &soma);
  if (soma == 27)
  {
    printf("Resposta correta! \n");
    ++num_acerto;
  }
  else
  {
    printf("Resposta incorreta, a resposta correta e 27. \n");
  }
  a = 24;
  b = 20;
  soma;
  printf("Qual e a soma de %d e %d? \n", a, b);
  scanf("%d", &soma);
  if (soma == 44)
  {
    printf("Resposta correta! \n");
    ++num_acerto;
  }
  else
  {
    printf("Resposta incorreta, a resposta correta e 44. \n");
  }
  a = 32;
  b = 25;
  soma;
  printf("Qual e a soma de %d e %d? \n", a, b);
  scanf("%d", &soma);
  if (soma == 57)
  {
    printf("Resposta correta! \n");
    ++num_acerto;
  }
  else
  {
    printf("Resposta incorreta, a resposta correta e 57. \n");
  }
  a = 50;
  b = 30;
  soma;
  printf("Qual e a soma de %d e %d? \n", a, b);
  scanf("%d", &soma);
  if (soma == 80)
  {
    printf("Resposta correta! \n");
    ++num_acerto;
  }
  else
  {
    printf("Resposta incorreta, a resposta correta e 80. \n");
  }
  printf("%d questoes certas e %d questoes incorretas", num_acerto, 5 - num_acerto);
  return 0;
}
