#include <stdio.h>
#include <math.h>

int main()
{
  int dia, mes;
  int ano = 2008; //declaração de variáveis
  do
  {
    printf("Digite o ano: \n");
    scanf("%d", &ano);
    if (ano > 2008)
    {
      printf("Data invalida");
      return 0;
    }
  } while (ano <= 0 && ano > 2008);
  if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
  {
    printf("Ano bissexto. \n");
    do
    {
      printf("Digite o mes: \n");
      scanf("%d", &mes);
      if (mes < 1 || mes > 12)
      {
        printf("Data invalida");
        return 0;
      }
    } while (mes < 1 || mes > 12);
    do
    {
      if (mes == 2)
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
        if (dia > 29)
        {
          printf("Data invalida. \n");
          return 0;
        }
      }
      else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
        if (dia > 30)
        {
          printf("Data invalida.");
          return 0;
        }
      }
      else
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
        if (ano > 2008)
        {
          printf("Data invalida");
          return 0;
        }
      }
    } while (dia < 1 || dia > 31);
  }
  else
  {
    do
    {
      printf("Digite o mes: \n");
      scanf("%d", &mes);
      if (mes < 1 || mes > 12)
      {
        printf("Data invalida");
        return 0;
      }
    } while (mes < 1 || mes > 12);
    do
    {
      if (mes == 2)
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
        if (dia > 28)
        {
          printf("Data invalida. \n");
          return 0;
        }
      }
      else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
        if (dia > 30)
        {
          printf("Data invalida.");
          return 0;
        }
      }
      else
      {
        printf("Digite o dia: \n");
        scanf("%d", &dia);
      }
    } while (dia < 1 || dia > 31);
  }
  printf("Data valida \nData: %d/%d/%d", dia, mes, ano);
  return 0;
}
