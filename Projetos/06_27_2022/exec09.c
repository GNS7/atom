#include <stdio.h>

int main()
{
  int arr[6], arr_inv[6], count = 5, temp;
  for(int i=0; i<6;)
  {
    printf("Digite um numero ");
    scanf("%d",&temp);
    if (temp % 2 == 0)
    {
      arr[i] = temp;
      i++;
    }
  }
  for(int i=0; i<6; i++)
  {
    arr_inv[count] = arr[i];
    count--;
  }
  // for(int i=0; i<6; i++)
  // {
    // printf("%d arr: %d\n", i, arr[i]);
  // }
  for(int i=0; i<6; i++)
  {
    printf("%d arr inversa: %d\n", i, arr_inv[i]);
  }
  return 0;
}
