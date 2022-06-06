#include <stdio.h>

int main() {
  int a;
  int b;
  int b3;
  int resto;
  int resultado;
  printf("Qual o valor de a: ");
  scanf("%i", &a);
  printf("Qual o valor de b: ");
  scanf("%i", &b);
  b3 = b * b * b;
  if (a % b != 0) {
   resto = a % b; //o if determina que se o resto de a e b é diferente de 0, então esse resto vai ser atribuido a variável resto, senão é atribuída a variável o valor 0.
 }
  else {
    resto = 0;
  }
  resultado = (b3 + a * b) - 2 * b + resto;
  printf("O resultado e : %i ", resultado);
  return 0;
}
