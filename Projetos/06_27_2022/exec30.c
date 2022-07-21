#include <stdio.h>

 int main()
{
  int count = 0, arr1[10], arr2[10], arr_repeat[10] = {0,0,0,0,0,0,0,0,0,0};
  for(int i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d",&arr1[i]);
  }
  printf("\n");
  for(int i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d",&arr2[i]);
  }
  for(int i = 0; i < 10; i++) //posicao em arr1
  {
    for(int j = 0; j < 10; j++) //posicao em arr2, comecando de i
    {
      if(arr1[i] != arr_repeat[j])
      {
        if (arr1[i] == arr2[j]) //se arr1[0] == arr2[0 -> 9]
        {
          //for(int p = 0; p < 10; p++)
          //{
            //if (arr1[i] != arr_repeat[j]) //arr1[i] diferente de arr_repeat[0 - 9]
            //{
          arr_repeat[count] = arr1[i]; //adiciona o numero a arr que interseciona
          count ++;
          printf(">>>arr[%d]: %d, arr_repeat[%d]: %d<<< \n", i, arr1[i], j, arr_repeat[j]);
            //}
          //}
        }
      }
      else
      {
        printf("Error: arr[%d]: %d, arr_repeat[%d]: %d \n", i, arr1[i], j, arr_repeat[j]);
      }
    }
  }
  for(int i = 0; i < count; i++) //imprimir arr_repeat
  {
    printf("Vetor_repetido[%d]: %d \n", i, arr_repeat[i]);
  }
  return 0;
}
