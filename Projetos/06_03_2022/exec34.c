#include <stdio.h>
#include <math.h>

//int main()
{
  int a = 11, num, m = 1, n = 20, valor = 1, mmc[10]; //declaração de variáveis
  for ( int i = 0; i < 10; i++)
  {
    printf(" m: %d, n: %d\n", m, n);
    num = m * n;
    printf("num: %d\n", num);
    mmc[i] = num;
    printf("mmc %d: %d\n", i, mmc[i]);
    ++m;
    --n;
  }
  for ( int i = 0; i < 10; i++)
  {
    printf("\nmmc %d: %d\n", i, mmc[i]);
  }
  valor = mmc[0];
  for ( int i = 1; i < 9; i++)
  {
    printf("a: %d\n", a);
    valor = valor * a;
    if (a == 11)
    {
      a = 13;
    }
    else
    {
      ++a;
    }
    printf("valor: %d\n", valor);
  }
  printf("o menor valor divisivel por todos os numeros de 1 a 20 e: %d", valor);
  return 0;
}
