#include <stdio.h>
#include <math.h>

int main()
{
  int temp, valor, quant = 0, soma = 0, media;
  do
  {
    printf("Digite uma valor: ");
    scanf("%d", &temp);
    if (temp >= 10 && temp <= 20)
    {
      ++quant;
      printf("quant: %d\n", quant);
      valor = temp;
      soma += valor;
      printf("soma = %d\n", soma);
    }
  } while (temp >= 10 && temp <= 20);
  media = soma / quant;
  printf("\nmedia = %d", media);
  return 0;
}
