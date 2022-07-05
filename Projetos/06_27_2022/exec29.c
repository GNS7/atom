#include <stdio.h>



int main()
{
  int arr[6], arr_par[6], arr_impar[6], count_par = 0, count_impar = 0, soma = 0;
  for (int i = 0; i < 6; i++)
  {
    printf ("digite um valor: ");
    scanf("%d", &arr[i]);
    //printf ("arr[%d]: %d", i, arr[i]);
  }
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] % 2 == 0)
    {
      arr_par[count_par] = arr[i];
      ++count_par;
    }
    else
    {
      arr_impar[count_impar] = arr[i];
      ++count_impar;
    }
  }
  for (int i = 0; i < count_par; i++)
  {

    soma += arr_par[i];
  }
  for (int i = 0; i < count_par; i++)
  {
    printf ("Vetor_dos_pares[%d]: %d \n", i, arr_par[i]);
  }
  printf ("Soma dos pares: %d \n", soma);
  for (int i = 0; i < count_impar; i++)
  {
    printf ("Vetor_dos_impares[%d]: %d \n", i, arr_impar[i]);
  }
  printf ("Foram digitados %d numeros impares.", count_impar);

  return 0;
}
