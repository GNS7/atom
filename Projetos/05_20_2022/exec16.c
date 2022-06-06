#include <stdio.h>
#include <math.h>

int main()
{
  int num;
  printf("Digite um numero:");
  scanf("%d", &num);
  switch (num) //se o valor de num corresponder a um dos cases o switch imprime a resposta
  {
    case 1: printf("Janeiro"); break;
    case 2: printf("Fevereiro"); break;
    case 3: printf("Marco"); break;
    case 4: printf("Abril"); break;
    case 5: printf("Maio"); break;
    case 6: printf("Junho"); break;
    case 7: printf("Julho"); break;
    case 8: printf("Agosto"); break;
    case 9: printf("Setembro"); break;
    case 10: printf("Outubro"); break;
    case 11: printf("Novembro"); break;
    case 12: printf("Dezembro"); break;
    default: printf("Numero nao reconhecido, tente usar um numero entre 1 e 12."); //se o usuario colocar um numero menor que 0 ou maior que 12, o switch imprime o printf e fecha o prgrama
  }
  return 0;
}
