#include <stdio.h>
#include <math.h>

int main()
{
  int arr[10], arr_sqrd[10];
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<10; i++)
  {
    arr_sqrd[i] = pow(arr[i], 2);
  }
  for(int i=0; i<10; i++)
  {
    printf("%d valor: %d\n", i, arr[i]);
    printf("%d valor ao quadrado: %d\n", i, arr_sqrd[i]);
  }
  return 0;
}
