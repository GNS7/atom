#include <stdio.h>
#include <math.h>

int main()
{
  int valor, num1, num2, num3;
  printf ("Digite um valor entre 100 e 999: ");
  scanf("%d", &valor);
  if (valor >= 100 || valor <= 999)
  {
    num1 = valor / 100; //divide o valor por 100 para conseguir as centenas
    num2 = (valor / 10) % 10; //divide o valor por 10, por exemplo 245 / 10 = 24,5, e depois faz o resto da divisao por 10, 24,5 % 10 = 4,5 para conseguir as dezenas
    num3 = valor % 10; //divide o valor por 10 e pega o resto, resto de 245 / 10 = 5
    printf ("%d, %d, %d", num1, num2, num3);
  }
  else
  {
    printf ("Valor invalido");
  }
  return 0;
}  //for (int i = 0; i < 3; i++)
//  { }
