#include <stdio.h>


int main()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] < 0)
    {
      arr[i] = 0;
    }
  }
  for (int i = 0; i < 10; i++)
  {
    printf("Vetor[%d]: %d", i, arr[i]);
  }
  return 0;
}
