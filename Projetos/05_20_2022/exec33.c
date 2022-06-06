#include <stdio.h>
#include <math.h>

int main()
{
  float preco;
  printf("Qual era o preco do item: ");
  scanf("%f", &preco);
  if (preco < 50)
  {
    preco = preco * 1.05;
    printf("O novo preco e: %.2f, houve um aumento de 5 por cento. \n", preco);
    if (preco < 80)
    {
      printf("Barato");
    }
    else if (preco >= 80 && preco <= 120)
    {
      printf("Normal");
    }
    else if (preco >= 120 && preco <= 200)
    {
      printf("Caro");
    }
    else if (preco > 200)
    {
      printf("Muito caro");
    }
  }
  else if (preco >= 50 && preco <= 100)
  {
    preco = preco * 1.10;
    printf("O novo preco e: %.2f, houve um aumento de 10 por cento. \n", preco);
    if (preco < 80)
    {
      printf("Barato");
    }
    else if (preco >= 80 && preco <= 120)
    {
      printf("Normal");
    }
    else if (preco >= 120 && preco <= 200)
    {
      printf("Caro");
    }
    else if (preco > 200)
    {
      printf("Muito caro");
    }
  }
  else if (preco > 100)
  {
    preco = preco * 1.15;
    printf("O novo preco e: %.2f, houve um aumento de 15 por cento. \n", preco);
    if (preco < 80)
    {
      printf("Barato");
    }
    else if (preco >= 80 && preco <= 120)
    {
      printf("Normal");
    }
    else if (preco >= 120 && preco <= 200)
    {
      printf("Caro");
    }
    else if (preco > 200)
    {
      printf("Muito caro");
    }
  }
  return 0;
}
