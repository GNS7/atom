#include <stdio.h>

int main() {
  float pag_dia = 30.00;//pagamento por dia
  int dias;
  float resultado;
  float imp_de_renda;
  float pag_total;
  printf("Quantos dias o encanador trabalhara:");
  scanf("%i", &dias);
  resultado = (dias * pag_dia);
  imp_de_renda = (resultado / 100) * 8; //8% do salario antes da gratificaçao
  pag_total = resultado - imp_de_renda; // pagamento apos retirada do imposto de renda
  printf("O contratador pagara %f e o encanador recebera %f", resultado, pag_total);
  return 0;
}
