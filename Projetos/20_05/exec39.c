#include <stdio.h>
#include <math.h>

int main()
{
  int salario; //declaração de variáveis
  int anos_trabalho; //declaração de variáveis
  int bonus; //declaração de variáveis
  printf("Qual o seu salario atual?");
  scanf("%d", &salario);
  printf("Ha quantos anos voce trabalha na empresa?");
  scanf("%d", &anos_trabalho);
  if(salario <= 500)
  {
      salario += salario * 0.25;
      if(anos_trabalho <= 1)
      {
        bonus = 0;
      }
      else if(anos_trabalho > 1 && anos_trabalho <= 3)
      {
        bonus = 100;
      }
      else if(anos_trabalho >= 4 && anos_trabalho <= 6)
      {
        bonus = 200;
      }
      else if(anos_trabalho >= 7 && anos_trabalho <= 10)
      {
        bonus = 300;
      }
      else if(anos_trabalho > 10)
      {
        bonus = 500;
      }
  }
  else if (salario <= 1000)
  {
    salario += salario * 0.2;
    if(anos_trabalho <= 1)
    {
      bonus = 0;
    }
    else if(anos_trabalho > 1 && anos_trabalho <= 3)
    {
      bonus = 100;
    }
    else if(anos_trabalho >= 4 && anos_trabalho <= 6)
    {
      bonus = 200;
    }
    else if(anos_trabalho >= 7 && anos_trabalho <= 10)
    {
      bonus = 300;
    }
    else if(anos_trabalho > 10)
    {
      bonus = 500;
    }
  }
  else if (salario <= 1500)
  {
    salario += salario * 0.15;
    if(anos_trabalho <= 1)
    {
      bonus = 0;
    }
    else if(anos_trabalho > 1 && anos_trabalho <= 3)
    {
      bonus = 100;
    }
    else if(anos_trabalho >= 4 && anos_trabalho <= 6)
    {
      bonus = 200;
    }
    else if(anos_trabalho >= 7 && anos_trabalho <= 10)
    {
      bonus = 300;
    }
    else if(anos_trabalho > 10)
    {
      bonus = 500;
    }
  }
  else if(salario <= 2000)
  {
    salario += salario * 0.1;
    if(anos_trabalho <= 1)
    {
      bonus = 0;
    }
    else if(anos_trabalho > 1 && anos_trabalho <= 3)
    {
      bonus = 100;
    }
    else if(anos_trabalho >= 4 && anos_trabalho <= 6)
    {
      bonus = 200;
    }
    else if(anos_trabalho >= 7 && anos_trabalho <= 10)
    {
      bonus = 300;
    }
    else if(anos_trabalho > 10)
    {
      bonus = 500;
    }
  }
  else if (salario > 2000)
  {
    printf("Salario sem reajuste");
    if(anos_trabalho <= 1)
    {
      bonus = 0;
    }
    else if(anos_trabalho > 1 && anos_trabalho <= 3)
    {
      bonus = 100;
    }
    else if(anos_trabalho >= 4 && anos_trabalho <= 6)
    {
      bonus = 200;
    }
    else if(anos_trabalho >= 7 && anos_trabalho <= 10)
    {
      bonus = 300;
    }
    else if(anos_trabalho > 10)
    {
      bonus = 500;
    }
  }
  printf("salario reajustado %d\n", salario);
  printf("bonus %d", bonus);

  return 0;
}
