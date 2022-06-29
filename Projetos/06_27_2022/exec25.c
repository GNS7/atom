#include <stdio.h>


int main()
{
  int arr[100], num = 0;
  for (int i = 0; i < 100;)
  {
    num += 1;
    if (num % 7 != 0 || num % 10 == 7 && num != 7)
    {
      arr[i] = num;
      i++;
    }
  }
  for (int i = 0; i < 100; i++)
  {
    printf("Vetor[%d]: %d\n", i, arr[i]);
  }
  return 0;
}
