#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int operacao (int num, int num2, char simbol);

int main() {
  int num, num2;
  char simbol;
  printf("Digite um valor: ");
  scanf("%d", &num);
  printf("Digite um valor: ");
  scanf("%d", &num2);
  fflush(stdin);
  printf("Digite o simbolo da operacao (+, -, *, /): ");
  scanf("%c", &simbol);
  int resultado = operacao (num, num2, simbol);
  printf("%d", resultado);
  return 0;
}

int operacao (int num, int num2, char simbol)
{
  if (simbol == '+')
  {
    int soma = num + num2;
  }
  else if (simbol == '-')
  {
    int sub = num - num2;
  }
  else if (simbol == '/')
  {
    int div = num/num2;
  }
  else if (simbol == '*')
  {
    int mult = num * num2;
  }
  else
  {
    return 0;
  }
}
