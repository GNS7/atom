#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("Digite um numero:");
  scanf("%d", &num);
  switch (num) //se o valor de num corresponder a um dos cases o switch imprime a resposta
  {
    case 1: printf("Domingo"); break;
    case 2: printf("Segunda-feira"); break;
    case 3: printf("Terca-feira"); break;
    case 4: printf("Quarta-feira"); break;
    case 5: printf("Quinta-feira"); break;
    case 6: printf("Sexta-feira"); break;
    case 7: printf("Sabado"); break;
    default: printf("Numero nao reconhecido, tente usar um numero entre 1 e 7."); //se o usuario colocar um numero menor que 0 ou maior que 7, o switch imprime o printf e fecha o prgrama
  }
  return 0;
}
