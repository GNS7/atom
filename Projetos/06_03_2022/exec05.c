#include <stdio.h>
#include <math.h>

int main()
{
  int num, input;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &input);
    num += input;
  }
  printf("soma: %d", num);
  return 0;
}
