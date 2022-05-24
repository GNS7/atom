#include <stdio.h>
#include <math.h>

int main()
{
  int A, B, C; //declaração de variáveis
  printf("Digite o valor do primeiro lado: \n");
  scanf("%d", &A);
  printf("Digite o valor do segundo lado: \n");
  scanf("%d", &B);
  printf("Digite o valor do terceiro lado: \n");
  scanf("%d", &C);
  if (A + B > C && B + C > A && C + A > B)
  {
    if (A == B && B == C)
    {
      printf("Triangulo equilatero.");
    }
    else if ((A == B) && A && B != C || (A == C) && A && C != B || (B == C) && B && C != A)
    {
      printf("Triangulo isosceles.");
    }
    else
    {
      printf("Triangulo escaleno.");
    }
  }
  else
  {
    printf("Nao e um triangulo.");
  }
  return 0;
}
