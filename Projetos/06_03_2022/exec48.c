#include <stdio.h>
#include <math.h>

int main()
{
  int fn[3] = {1,1,0}, fn_total = 0, n = 4000000, soma = 0;
  //printf("Digite um numero: ");
  //scanf("%d", &n);
  do
  {
    if (fn[2] % 2 == 0)
    {
      soma += fn[2];
    }
    fn[2] = fn[0] + fn[1];
    //printf("fn %d e %d fn_total %d\n", fn[0], fn[1], fn[2]);
    fn[0] = fn[1];
    fn[1] = fn[2];
    //printf("------------------------fn %d e %d fn_total %d\n", fn[0], fn[1], fn[2]);
  }while(fn[2] < n - 1000000);
  printf("O valor de fibonacci e: %d e a soma dos pares: %d", fn[2], soma);
  return 0;
}
