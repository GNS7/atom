#include <stdio.h>
#include <math.h>

int main()
{
  float salario, aumento, ano = 2022;
  int count = 1;
  salario = 2000;
  aumento = 0.015;
  salario = salario + (salario * aumento);
  aumento = salario - 2000;
  printf("Aumento: %f% \n", aumento);
  printf("Salario em : %f\n", salario);
  for (int i = 1997; i < ano; i++)
  {
    aumento = aumento * 2;
    printf("Aumento: %.2f \n", aumento);
    salario = salario + aumento;
    printf("Salario em %i: %.2f\n", i, salario);
    ++count;
  }
  printf("salario em 2022: %f", salario);
  return 0;
}
