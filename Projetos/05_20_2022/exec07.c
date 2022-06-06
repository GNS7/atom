#include <stdio.h>
#include <math.h>

int main()
{
  int num, num2; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%d", &num);
  printf("Digite outro numero:");
  scanf("%d", &num2);
  if (num > num2) //se num maior que num2
  {
    printf ("%i\n", num);
  }
  else if (num < num2) //se num2 maior que num
  {
    printf ("%i\n", num2);
  }
  else //se num == num2
  {
    printf ("numeros iguais.");
  }
  return 0;
}
