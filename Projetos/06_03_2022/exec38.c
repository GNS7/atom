#include <stdio.h>
#include <math.h>

//int main()
{
  int n = 1000, a, b, c; //declaração de variáveis
  int pow_a = pow(a,2);
  int pow_b = pow(b,2);
  int pow_c = pow(c,2);
  int pitagoras = pow_a + pow_b + pow_c;
  if (pitagoras != n)
  {
    if (pow_a + pow_b != pow_c)
    {
      do
      {
        pow_a++;
        pow_b++;
      } while (pow_a + pow_b != pow_c);
    }
  }
  else
  {
    printf("%d + %d + %d = %d \n", pow_a, pow_b, pow_c, n);
  }
  return 0;
}
