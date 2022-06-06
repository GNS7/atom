#include <stdio.h>

int main() {
  float salario;
  float grat; //gratificaçao
  float imposto;
  float resultado;
  printf("Qual o salario recebido: ");
  scanf("%f", &salario);
  grat = (salario / 100) * 5; //5% do salario
  imposto = (salario / 100) * 7; //7% do salario
  resultado = salario + (imposto - grat); // Salario + gratificaçao - imposto, de jeito que ele pague 2% de imposto
  printf("O salario final e: %.2f", resultado);
  return 0;
}
