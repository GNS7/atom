#include <stdio.h>
#include <math.h>

int main()
{
  int num, part_num, soma; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%d", &num);
  do
  {
    part_num = num % 10; //part_num é igual ao resto do num dividido por 10
    soma = soma + part_num;
    num = num / 10; //divide os numeros por 10
  } while (num % 10 > 0);
  printf("%d", soma);
  if (num < 0)
  {
    printf("Numero invalido");
  }
  return 0;
}
