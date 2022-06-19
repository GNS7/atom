#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, x, y, count = 0;
  printf("Qual o valor de n: ");
  scanf("%d", &n);
  printf("Qual o valor de x: ");
  scanf("%d", &x);
  printf("Qual o valor de y: ");
  scanf("%d", &y);
  int arr[n];
  if (x != 0 && y != 0)
  {
    for (i = 0; count < n; i++) // roda ate que o valor do count, ou seja a quantidade de elementos da array, seja o mesmo que a o valor de n
    {
      if (i % x == 0 || i % y == 0) //Verifica se o numero é divisivel por 2, 3, ou pelos dois, se sim, adiciona o elemento à array
      {
        arr[count] = i;
        ++count;
      }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  }
  else
  {
    printf("Valor invalido.");
  }
  return 0;

}
