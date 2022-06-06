#include <stdio.h>

int main()
{
  float sal_hora;
  float nmr_hora;
  float salario;
  float salario_total;
  float nr_hora_extra;
  float dependentes;
  printf("Qual o salario/hora recebido?\n");
  scanf("%f", &sal_hora);
  printf("Quantas horas trabalhadas?\n");
  scanf("%f", &nmr_hora);
  printf("Quantas horas extra trabalhadas?\n");
  scanf("%f", &nr_hora_extra);
  printf("Quantos dependentes voce possui?\n");
  scanf("%f", &dependentes);
  salario = sal_hora * (nmr_hora + nr_hora_extra);
  if (dependentes > 0) //determina quanto recebera pelos dependentes
  {
    salario = salario + (dependentes * 128);
  }
  if(salario >= 3582.01) //determina quanto sera pago de imposto de renda baseado no salario recebido
  {
    salario_total = salario - (0.2750 * salario);
  }
  else if(salario <= 3582.00 && salario >= 2866.71)
  {
    salario_total = salario - (0.2250 * salario);
  }
  else if(salario <= 2866.70 && salario >= 2150.01)
  {
    salario_total = salario - (0.15 * salario);
  }
  else if(salario <= 2150 && salario >= 1434.60)
  {
    salario_total = salario - (0.0750 * salario);
  }
  if(salario_total > 1000) //determina quanto ganhara de beneficio devido ao salario apos a retirada do imposto de renda
  {
    salario_total = salario_total + 100;
  }
  else if(salario_total >= 500.01 && salario_total<= 1000)
  {
    salario_total = salario_total + 120;
  }
  else
  {
    salario_total = salario_total + 180;
  }
  printf("O salario final e: %.2f", salario_total);
  return 0;
}
