#include <stdio.h>
#include <math.h>

int main()
{
  int valor, count100 = 0, count50 = 0, count20 = 0, count10 = 0, count5 = 0, count2 = 0, count1 = 0;
  printf("Digite o valor a ser sacado: ");
  scanf("%d", &valor);
  do
  {
    if (valor % 100 == 0)
    {
      ++count100;
      valor -= 100;
    }
    else if (valor % 50 == 0)
    {
      ++count50;
      valor -= 50;
    }
    else if (valor % 20 == 0)
    {
      ++count20;
      valor -= 20;
    }
    else if (valor % 10 == 0)
    {
      ++count10;
      valor -= 10;
    }
    else if (valor % 5 == 0)
    {
      ++count5;
      valor -= 5;
    }
    else if (valor % 2 == 0)
    {
      ++count2;
      valor -= 2;
    }
    else if (valor % 1 == 0)
    {
      ++count1;
      valor -= 1;
    }
  }while (valor > 0);
  printf("Notas de 100: %d\n Notas de 50: %d\n Notas de 20: %d\n Notas de 10: %d\n Notas de 5: %d\n Notas de 2: %d\n Notas de 1: %d\n", count100, count50, count20, count10, count5, count2, count1);
  return 0;
}
