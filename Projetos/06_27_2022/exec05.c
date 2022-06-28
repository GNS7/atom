#include <stdio.h>

int main()
{
  int arr[10], count_par = 0;
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<10; i++)
  {
    if(arr[i] % 2 == 0)
    {
      ++count_par;
    }
  }
  printf("O vetor possui %d valores pares", count_par);
  return 0;
}
