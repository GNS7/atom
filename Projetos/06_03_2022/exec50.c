#include <stdio.h>
#include <math.h>

int main()
{
  float Chico, Ze, count = 0;
  Chico = 1.50;
  Ze = 1.10;
  do
  {
    Chico += 0.02;
    Ze += 0.03;
    count++;
    //printf("Chico: %f, Ze: %f, count: %f\n", Chico, Ze, count);
  }while(Ze <= Chico);
  printf("Foram necessarios %.0f meses para Ze igualar/superar Chico", count);

  return 0;
}
