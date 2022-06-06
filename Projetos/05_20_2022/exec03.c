#include <stdio.h>
#include <math.h>

int main()
{
  float num; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%f", &num);
  if (num > 0) //se num maior que 0, numero positivo
  {
    printf("%f", sqrt(num)); //raiz quadrada de x
  }
  else {
    printf("%f", pow(num, 2)); //x elevado a 2
  }
  return 0;
}
