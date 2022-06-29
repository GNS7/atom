#include <stdio.h>
#include <math.h>


int main()
{
  float n = 10, arr[10] = {10, 34,	94,	89,	3, 44, 81, 50, 41, 22}, media = 0, somatorio = 0, desvio_padrao;
  for (int i = 0; i < 10; i++)
  {
    media += arr[i];
    printf("arr[%d]: %f \n", i, arr[i]); //Media: %f &&
  }
  media = media / n;
  // printf("\n");
  // printf ("media: %f \n", media);
  for (int i = 1; i < n; i++)
  {
    somatorio += pow((arr[i] - media), 2);
    desvio_padrao = sqrt((1 / (n - 1)) * somatorio);
  }
  printf("\nDesvio padrao = %f", desvio_padrao);


  return 0;
}
