#include <stdio.h>
#include <math.h>

int main()
{
  float altura; //declaração de variáveis
  int peso; //declaração de variáveis
  printf("Digite o seu altura (em metro): \n");
  scanf("%f", &altura);
  printf("Digite o seu peso: \n");
  scanf("%d", &peso);
  if (peso < 60)
  {
    if (altura <= 1.20)
    {
      printf("Sua classificacao e: A");
    }
    else if (altura > 1.20 && altura <= 1.70)
    {
      printf("Sua classificacao e: B");
    }
    else if (altura > 1.70)
    {
      printf("Sua classificacao e: C");
    }
  }
  else if (peso >= 60 && peso <= 90)
  {
    if (altura <= 1.20)
    {
      printf("Sua classificacao e: D");
    }
    else if (altura > 1.20 && altura <= 1.70)
    {
      printf("Sua classificacao e: E");
    }
    else if (altura > 1.70)
    {
      printf("Sua classificacao e: F");
    }
  }
  else if (peso > 90)
  {
    if (altura <= 1.20)
    {
      printf("Sua classificacao e: G");
    }
    else if (altura > 1.20 && altura <= 1.70)
    {
      printf("Sua classificacao e: H");
    }
    else if (altura > 1.70)
    {
      printf("Sua classificacao e: I");
    }
  }
  return 0;
}
