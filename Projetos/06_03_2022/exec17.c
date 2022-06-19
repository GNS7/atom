#include <stdio.h>
#include <math.h>

int main()
{
  int valor, temp = 0, soma = 0;
  printf("Digite um valor: ");
  scanf("%d", &valor);
  for (int i = 0; i <= valor; i++)
  {
    soma += temp;
    ++temp;
  }
  printf ("A soma dos primeiros %d valores e: %d", valor, soma);
  return 0;
}
