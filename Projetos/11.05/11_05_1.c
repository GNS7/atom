#include <stdio.h>

int main() {
  float altura;
  float peso;
  float imc;
  float altura_ao_2;
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  altura_ao_2 = altura * altura; //como nao existe a operaçao de potenciaçao é nessario fazer manualmente
  imc = peso / altura_ao_2;
  printf("Seu indicie de massa corporal e: %f\n", imc);
  return 0;
}
