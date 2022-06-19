#include <stdio.h>
#include <math.h>

int main()
{
    int quant, num_quant, num_maior, temp;
    printf("Digite a quantidade de variaveis: ");
    scanf("%d", &quant);
    num_maior = 0;
    //printf("%d", num_maior);
    for (int i = 0; i < quant; i++)
    {
      printf("Digite um valor: ");
      scanf("%d", &temp);
      if (temp >= num_maior)
      {
        if (temp == num_maior || num_maior == 0)
        {
            ++num_quant;
        }
        num_maior = temp;
      }
    }
    printf("Maior valor: %d, ", num_maior);
    printf("o %d apareceu %d vezes", num_maior, num_quant);
    return 0;
}
