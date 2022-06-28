#include <stdio.h>
#include <math.h>

int main()
{
  int  arr[5], result_arr[5], count = 0, stat;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    stat = 0; //false
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[i] == arr[j])
      {
        stat = 1; //true
        break;
      }
    }
    if (stat == 0)
    {
      result_arr[count] = arr[i];
      count++;
    }
  }
  for (int i = 0; i < count; i++)
  {
    printf("result array[%d]: %d\n", i, result_arr[i]);
  }
  return 0;
}
