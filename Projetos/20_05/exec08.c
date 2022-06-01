#include <stdio.h>
#include <math.h>

int main()
{
  int num, num2; //declaração de variáveis
  float media; //declaração de variáveis
  printf("Digite a primeira nota: \n");
  scanf("%d", &num);
  printf("Digite a segunda nota: \n");
  scanf("%d", &num2);
  if (num >= 0 && num <= 10) //se num e num2 sao ambos maior ou igual que 0 e menor ou igual que 10
  {
    if (num2 >= 0 && num2 <= 10)
    {
      media = (num + num2) / 2;
      printf("media: %f", media);
    }
    else
    {
      printf("Segunda nota invalida");
    }
  }
  else
  {
    printf("Os valores digitados sao invalidos.");
  }
  return 0;
}
