#include <stdio.h>
#include <math.h>

int main()
{
  int arr[6];
  for (int i = 0; i < 6; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 6; i++)
  {
    printf("%d valor: %d\n", i, arr[i]);
  }

  return 0;
}
