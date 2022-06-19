#include <stdio.h>


int main()
{
  int num = 0, soma = 0;
  for (int i = 0; i <= 50; i++) //loop soma de 0 a 50
  {
    //printf("num :%d\n", num);
    soma += num; //soma dos numeros
    //printf("soma :%d\n", soma);
    num += 2; //incremento de 2
  }
  printf("%d \n", soma);
  return 0;
}
