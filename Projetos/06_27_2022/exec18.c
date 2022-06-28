#include <stdio.h>


int main()
{
  int arr[10], x, count = 0, mult_x[count + 1];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &arr[i]);
  }
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] % x == 0)
    {
      mult_x[count] = arr[i];
      count++;
    }
  }
  printf("Multiplos de %d: ", x);
  for (int i = 0; i < count; i++)
  {
    printf("%d ", mult_x[i]);
  }

  return 0;
}
