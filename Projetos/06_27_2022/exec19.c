#include <stdio.h>


int main()
{
  int arr[50];
  for(int i=0; i<50; i++)
  {
    arr[i] = (i + (5 * i)) % (i + 1);
  }
  for(int i=0; i<50; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
