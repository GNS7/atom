#include <stdio.h>


int main()
{
  int num = 0, soma = 0;
  for (int i = 0; i <= 50; i++)
  {
    //printf("num :%d\n", num);
    soma += num;
    //printf("soma :%d\n", soma);
    num += 2;
  }
  printf("%d \n", soma);
  return 0;
}
