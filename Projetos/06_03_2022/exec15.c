#include <stdio.h>
#include <math.h>

int main()
{
  int valor, num;
  printf("Digite um valor par: ");
  scanf("%d", &valor);
  if (valor % 2 != 0)
  {
    for (int i = 0; i <= valor; i++)
    {
      if (num % 2 != 0)
      {
        printf("%d ", num);
      }
      ++num;
    }
  }
  else
  {
      printf("valor invalido.");
  }
  return 0;
}
