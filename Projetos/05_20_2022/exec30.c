#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c; //declaração de variáveis
  printf("Digite um numero: \n");
  scanf("%d", &a);
  printf("Digite um numero: \n");
  scanf("%d", &b);
  printf("Digite um numero: \n");
  scanf("%d", &c);
  if (a < b && a < c && b < c) //verificar qual numero é menor e qual é maior
  {
    printf("Ordem crescente: %d, %d, %d.", a, b, c);
  }
  else if (c < b && a < c &&  a < b)
  {
    printf("Ordem crescente: %d, %d, %d.", a, c, b);
  }
  else if (b < a && a < c && b < c)
  {
    printf("Ordem crescente: %d, %d, %d.", b, a, c);
  }
  else if (b < a && c < a && b < c)
  {
    printf("Ordem crescente: %d, %d, %d.", b, c, a);
  }
  else if (c < a && a < b && c < b )
  {
    printf("Ordem crescente: %d, %d, %d.", c, a, b);
  }
  else if (c < b && c < a && b < a)
  {
    printf("Ordem crescente: %d, %d, %d.", c, b, a);
  }
  return 0;
}
