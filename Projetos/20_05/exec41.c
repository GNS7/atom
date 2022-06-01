#include <stdio.h>
#include <math.h>

int main() {
  float altura; //declaração de variáveis
  float peso;  //declaração de variáveis
  float imc;  //declaração de variáveis
  float altura_ao_2;  //declaração de variáveis
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  altura_ao_2 = pow(altura,2);
  imc = peso / altura_ao_2;
  if (imc <= 18.5)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: abaixo do peso.", imc);
  }
  else if (imc >= 18.6 && imc <= 24.9)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: saudavel.", imc);
  }
  else if (imc >= 25 && imc <= 29.9)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: peso em excesso.", imc);
  }
  else if (imc >= 30 && imc <= 34.9)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: obesidade grau I.", imc);
  }
  else if (imc >= 35 && imc <=39.9)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: obesdidade com grau II (severa).", imc);
  }
  else if (imc > 40)
  {
    printf("Seu indicie de massa corporal e: %f\n, condicao: obesidade com grau III (morbida).", imc);
  }
  return 0;
}
