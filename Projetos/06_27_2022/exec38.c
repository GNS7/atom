#include <stdio.h>

int main() {
	//int arr[10], temp = 0, arr_temp = 0, count = 0, j = 0;
  for (int i = 0; i < 10; i++)
  {
    arr[i] = 0;
    printf("arr[%d]=%d \n", i, arr[i]);
  }
  //arr[0] = 1000;
  //arr[9] = 0;
  printf("Digite um valor: ");
  scanf("%d", &arr[0]);

  for (int i = 1; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &temp);
    do
    {
      j = 0;
      for (int k = 0; k < 10; k++)
      {
        if (temp < arr[j]) //se o valor de temp e menor que os valores da array, subtitui o valor da array na posicao j pelo valor de temp
        {
          printf("\n/Temp%d: %d e arr[%d]: %d \n", j, temp, j, arr[j]);
          arr_temp = arr[j];
          arr[j] = temp;
          arr[j + 1] = arr_temp;
          printf("/arr[%d]: %d e arr[%d]: %d \n\n", j, arr[j], j + 1, arr[j + 1]);
        }
        else if (temp > arr[j])
        {
          printf("\n//Temp: %d e arr[%d]: %d \n", temp, j, arr[j]);
          if (arr[j] != 0 && j > 0)
          {
            arr_temp = arr[j];
            arr[j] = temp;
            arr[j - 1] = arr_temp;
            printf("//arr[%d]: %d e arr[%d]: %d \n\n", j, arr[j], j - 1, arr[j - 1]);
          }
          else
          {
            arr[j] = temp;
            printf("//arr[%d]: %d \n\n", j, arr[j]);
          }
        }
        j++;
        count++;
      }
    } while (count < 30);
    //for (int j = 9; j > 0; j--)
    //{
    //}
  }
  for (int i = 0; i < 10; i++)
  {
    printf("Vetor[%d]: %d \n", i, arr[i]);
  }



 return 0;
}
