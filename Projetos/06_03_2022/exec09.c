#include <stdio.h>
#include <math.h>

int main()
{
    int quant;
    int num = 1;
    printf("Digite um valor: ");
    scanf("%d", &quant);
    for (int i = 0; i < quant; i++)
    {
      printf("%d ", num);
      num += 2;
    }
    return 0;
}
