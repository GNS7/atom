#include <stdio.h>

int main()
{
  int num; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%d", &num);
  if (num % 2 == 0) //se resto de num/2 == 0, o numero e par
  {
    printf ("%i e um numero par. \n", num);
  }
  else
  {
    printf ("%i e um numero impar.", num);
  }
  return 0;
}
