#include <stdio.h>
#include <math.h>

int main()
{
  int valor, num;
  printf("Digite um valor: ");
  scanf("%d", &valor);
  num = valor;
  for (int i = 0; i <= valor; i++)
  {
    printf("%d ", num);
    --num;
  }
  return 0;
}
