#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int media (int *a, int num, char letra);

int main() {
  int notas[3];
  char letra;

  for (int i = 0; i < 3; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &notas[i]);
  }

  fflush(stdin);

  printf ("Digite uma letra (a ou p): ");
  scanf ("%c", &letra);

  int resultado = media(notas, 3, letra);
  printf("%d", resultado);
  return 0;
}

int media (int *a, int num, char letra)
{
  int soma = 0;
  for (int i = 0; i < num; i++)
  {
    soma += a[i];
  }
  if (letra == 'a')
  {
    int media_arit = soma / num;
    return media_arit;
  }
  else if (letra == 'p')
  {
    int media_pond = a[0] * 5 + a[1] * 3 + a[2] * 2;
    return media_pond;
  }
}
