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
    printf ("%i - %i = %i", num, num2, num-num2); //print da diferença entre os numeros
  }
  else
  {
    printf ("%i\n", num2);
    printf ("%i - %i = %i", num2, num, num2-num); //print da diferença entre os numeros
  }
  return 0;
}
