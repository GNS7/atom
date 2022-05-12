#include <stdio.h>
#include <math.h> //adiciona mais operaçoes matematicas

int main() {
  float cA;
  float cB;
  float hipotenusa;
  float hipotenusa_ao_2;
  printf("Qual o primeiro cateto: ");
  scanf("%f", &cA);
  printf("Qual o segundo cateto: ");
  scanf("%f", &cB);
  if (cA != 0 && cB != 0) { //para garantir que o resultado nao é simplesmete 0
    hipotenusa_ao_2 = (cB * cB) + (cA * cA);
  }
  else {
    hipotenusa_ao_2 = 0;
   }
   hipotenusa = sqrt(hipotenusa_ao_2);
   printf("A hipotenusa e: %.2f", hipotenusa);
  return 0;
}
