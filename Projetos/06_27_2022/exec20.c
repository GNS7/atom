#include <stdio.h>


int main()
{
  int arr[10], count_impar = 0, arr_impar[count_impar], temp = 0;
  for (int i = 0; i < 10;)
  {
    printf("Digite um valor: ");
    scanf("%d", &temp);
    if (temp > 0 && temp < 50)
    {
      arr[i] = temp;
      i++;
    }
  }
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] % 2 != 0)
    {
      arr_impar[count_impar] = arr[i];
      count_impar++;
    }
  }
  printf("1 vetor: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n2 vetor: ");
  for (int i = 0; i < count_impar; i++)
  {
    printf("%d ", arr_impar[i]);
  }
  return 0;
}
