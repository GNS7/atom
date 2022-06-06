#include <stdio.h>
#include <math.h>

int main()
{
  int num, input, quant = 0, media;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &input);
    num += input;
    ++quant;
  }
  //printf("i = %d", quant);
  media = num / quant;
  printf("soma: %d", num);
  printf("\nmedia: %d", media);
  return 0;
}
