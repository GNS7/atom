
#include <stdio.h>

int main() {
	int arr[11], temp = 0, count = 0, count_decresc =0;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &arr[i]);
  }
  do
  {
    for (int i = 0; i <= 5; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i + 1];
        //printf("\n\nTemp: %d e arr[%d]: %d \n\n", temp, i + 1, arr[i + 1]);
        arr[i + 1] = arr[i];
        arr[i] = temp;
        //printf("\narr[%d]: %d e arr[%d]: %d \n", i, arr[i], i + 1, arr[i + 1]);
      }
    }
    count++;
  } while (count < 30);
  do
  {
    for (int i = 5; i < 9; i++)
    {
      if (arr[i] < arr[i + 1])
      {
        temp = arr[i];
        //printf("\n\nTemp: %d e arr[%d]: %d \n\n", temp, i + 1, arr[i + 1]);
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        //printf("\narr[%d]: %d e arr[%d]: %d \n", i, arr[i], i + 1, arr[i + 1]);
      }
    }
    count_decresc++;
  } while (count_decresc < 20);
  for (int i = 0; i < 10; i++)
  {
    printf("arr[%d]: %d \n", i, arr[i]);
  }
 return 0;
}
