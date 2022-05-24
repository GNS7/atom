#include <stdio.h>
#include <math.h>

int main()
{
  float num; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%f", &num);
  if (num > 0) //se num maior que 0, numero positivo
  {
    printf("%.2f elevado ao quadrado: %.2f. \n", num, pow(num, 2)); //x elevado a 2
    printf("Raiz quadrada de %.2f e igual a %.2f.", num, sqrt(num)); //raiz quadrada de x
  }
  return 0;
}
