#include <stdio.h>
#include <math.h>

int main()
{
  int valor1, valor1_soma, valor2, soma, par, impar, multi;
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);
  valor1_soma = valor1;
  if (valor1 <= valor2)
  {
    while (valor1 <= valor2)
    {
      if (valor1 % 2 == 0)
      {
        soma += valor1_soma;
        printf("\nsoma == %d", soma);
        ++valor1_soma;
        printf("\nV1 == %d", valor1);
        printf ("\nV1 <= V2 soma par: %d", soma);
        //++par;
      }
      else
      {
        ++valor1;
        soma += valor1;
        printf ("\nV1 <= V2 soma impar: %d", soma);
      }
    }
  }/*  if (valor1 % 2 == 0)
      {
        ++valor1;
        multi *= valor1;
        printf ("\nV1 <= V2 multi par: %d", multi);
      }
      else
      {
        multi *= valor1;
        printf ("\nV1 <= V2 multi impar: %d", multi);
        ++valor1;
      }
    }
  }
  else if (valor2 <= valor1)
  {
    while (valor2 <= valor1)
    {
      if (valor2 % 2 == 0)
      {
        soma += valor2;
        printf ("\nV2 <= V1 soma par: %d", soma);
        ++valor2;
        //++par;
      }
      else
      {
        ++valor2;
        soma += valor2;
        printf ("\nV2 <= V1 soma impar: %d", soma);
      }
      if (valor2 % 2 == 0)
      {
        ++valor2;
        multi *= valor2;
        printf ("\nV2 <= V1 multi par: %d", multi);
      }
      else
      {
        multi *= valor2;
        printf ("\nV2 <= V1 multi impar: %d", multi);
        ++valor2;
      }
    }
  } */
    printf("\nsoma: %d e multiplicacao: %d", soma, multi);
  //}
  return 0;
}
