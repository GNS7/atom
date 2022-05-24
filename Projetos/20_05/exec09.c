#include <stdio.h>
#include <math.h>

int main()
{
  int salario; //declaração de variáveis
  int prest_de_emprestimo; //declaração de variáveis
  printf("Digite o salario: \n");
  scanf("%d", &salario);
  printf("Digite o valor da prestação de emprestimo \n");
  scanf("%d", &prest_de_emprestimo);
  if (prest_de_emprestimo > 0.2*salario) //se 20% do salario é menor que a prestação de emprestimo
  {
    printf("Emprestimo nao concedido.");
  }
  else
  {
    printf("Emprestimo concedido.");
  }
  return 0;
}
