#include <stdio.h>
#include <math.h>

int main()
{
  int n, soma = 0, soma_2 = 0, soma_3 = 0, i_while = 1;
  printf("O valor de n: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) // loop de soma 1° soma
  {
    printf("%d ", i);
    soma += i;
  }
  printf("\nsoma: %d\n", soma);
  for (int i = 1; i <= (2 * n - 1); i++) //loop que subtrai par e soma impar 2° soma
  {
    if (i % 2 == 0) //se nmr par
    {
      soma_2 -= i;
    }
    else if (i % 2 != 0) //se nmr impar
    {
      soma_2 += i;
    }
    printf("%d ", i);
  }
  printf ("\n2 soma: %d\n", soma_2);
  do //loop de soma de impares 3° soma
  {
    printf("%d ", i_while);
    soma += i_while;
    i_while += 2;
  }while (i_while <= 2 * n - 1);
  printf("\n3 soma: %d\n", soma);
  return 0;
}
