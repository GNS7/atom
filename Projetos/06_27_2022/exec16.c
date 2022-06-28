#include <stdio.h>


int main()
{
  int arr[5], cod, arr_inv[5], count = 4;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &arr[i]);
  }
  do
  {
    printf("Digite um codigo \n0) Finaliza o programa \n1) Vetor a ordem direta \n2) Vetor na ordem inversa\n");
    scanf("%d", &cod);
    if (cod == 0)
    {
      return 0;
    }
  } while (cod != 1 && cod != 2);
  switch (cod)
  {
    case 1:
      printf("Vetor na ordem direta: ");
      for (int i = 0; i < 5; i++)
      {
      printf("%d ", arr[i]);
      }
    break;
    case 2:
      for(int i=0; i<5; i++)
      {
      arr_inv[count] = arr[i];
      count--;
      }
      printf("Vetor na ordem indireta: ");
      for (int i=0; i<5; i++)
      {
      printf("%d ", arr_inv[i]);
      }
    break;
  }
  return 0;
}
