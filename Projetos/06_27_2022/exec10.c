#include <stdio.h>
#include <math.h>

int main()
{
  int arr_notas[15];
  float media, soma = 0, count = 0;;
  for(int i=0; i<15; i++)
  {
    printf("Digite a nota: ");
    scanf("%d",&arr_notas[i]);
  }
  for(int i=0; i<15; i++)
  {
    //printf("arr_notas[%d]: %d\n", i, arr_notas[i]);
    soma += arr_notas[i];
    printf("soma: %f\n", soma);
    ++count;
  }
  media = soma / count;
  printf("a media das notas e de: %f", media);
  return 0;
}
