#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  int delta;
  float raiz_delta;
  float Bhask, Bhask_neg;
  do
  {
    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    if (a == 0)
    {
      printf("Nao e uma equacao do segundo grau. \n");
    }
  } while (a == 0);
  printf("Digite o valor de b: \n");
  scanf("%d", &b);
  printf("Digite o valor de c: \n");
  scanf("%d", &c);
  int b_2 = pow(b, 2);
  printf("b elevado a 2: %d \n", b_2);
  delta = (b_2) - (4 * a * c);
  printf("delta: %d \n", delta);
  raiz_delta = sqrt(delta);
  printf("raiz do delta: %f \n", raiz_delta);
  Bhask = ((b * (-1)) + raiz_delta) / (2 * a);
  printf("Bhask: %f \n", Bhask);
  Bhask_neg = ((b * (-1)) - raiz_delta) / (2 * a);
  printf("Bhask_neg: %f \n", Bhask_neg);
  if (delta < 0)
  {
    printf("Nao existe raizes reais \n");
  }
  else if (delta == 0)
  {
    printf("Existem duas raizes iguais, %.2f e %.2f \n", Bhask, Bhask_neg);
  }
  else
  {
    printf("Os valores de x sao %.2f e %.2f \n", Bhask, Bhask_neg);
  }

  return 0;
}
