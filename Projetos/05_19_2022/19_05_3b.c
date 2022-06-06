#include <stdio.h>

int main()
{
  int numero;
  int nmr;
  int count = 5;
  do
  {
    printf("Digite um numero:");
    scanf("%i", &numero);
    if (numero % 2 == 0)
    {
      printf("Numero par.\n");
      ++nmr;
    }
    else
    {
      printf("Numero impar.\n");
    }
    --count;
  }
  while (count > 0);
  printf("Voce digitou %i numeros pares e %i numeros impares.", nmr, 5-nmr);
  return 0;
}
