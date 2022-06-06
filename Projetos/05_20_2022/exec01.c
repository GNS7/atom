#include <stdio.h>

int main()
{
  float x, y; //declaração de variáveis
  printf("Qual o primeiro numero?");
  scanf("%f", &x);
  printf("Qual o segundo numero?");
  scanf("%f", &y);
  if (x > y) { //se x maior que y
      printf ("%f", x);
  }
  else if (x < y) { //se y maior que x
    printf ("%f", y);
  }
  else {
    printf ("os numeros sao iguais");
  }
  return 0;
}
