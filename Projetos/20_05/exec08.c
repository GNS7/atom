#include <stdio.h>
#include <math.h>

int main()
{
  int num, num2; //declaração de variáveis
  int media; //declaração de variáveis
  printf("Digite a primeira nota: \n");
  scanf("%d", &num);
  printf("Digite a segunda nota: \n");
  scanf("%d", &num2);
  if ((num && num2 >= 0) && (num && num2 <= 10)) //se num e num2 sao ambos maior ou igual que 0 e menor ou igual que 10
  {
    media = (num + num2) / 2; //media de (num + num2)
    printf("A media das notas e igual a: %i", media);
  }
  else
  {
    printf("Os valores digitados sao invalidos.");
  }
  return 0;
}
