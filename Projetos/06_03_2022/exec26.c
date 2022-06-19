#include <stdio.h>
#include <math.h>

//int main()
{
  int valor, n = 1, quociente;
  printf("Digite um valor: ");
  scanf("%d", &valor);
  do
  {
    if (valor % 11 == 0)
    {
      printf("%d e divisivel por 11\n", valor);
      break;
    }
    else if (valor % 13 == 0)
    {
      printf("%d e divisivel por 13\n", valor);
      break;
    }
    else if (valor % 17 == 0)
    {
      printf("%d e divisivel por 17\n", valor);
      break;
    }
    else if (valor % 11 != 0 || valor % 13 != 0 || valor % 17 != 0)
    {
      ++valor;
    }
    //++valor;
  } while (valor % 11 == 0 || valor % 13 == 0 || valor % 17 == 0);
  //printf("O primeiro multiplo de 11, 13 ou 17: %d", valor);
  return 0;
}
