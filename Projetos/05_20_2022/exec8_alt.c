#include <stdio.h>
#include <math.h>

int main()
{
  int num, num2, soma, media; //declaração de variáveis
  printf("Digite a primeira nota: \n");
  scanf("%d", &num);
  printf("Digite a segunda nota: \n");
  scanf("%d", &num2);
  soma = num + num2;
  if (soma >= 0 && soma <= 20)
  {
    media = (num + num2) / 2;
    printf("A media das notas e igual a: %i", media);
  }
  else
  {
    printf("Os valores digitados sao invalidos.");
  }
  return 0;
}
