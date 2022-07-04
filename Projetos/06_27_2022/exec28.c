#include <stdio.h>
#include <math.h>


int main()
{
  int count_par = 0, count_impar = 0;
  int  v[10], v1[10], v2[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &v[i]);
  }

  printf ("\n");

//   for (int i = 0; i < 10; i++)
// {
//   printf("V[%d]: %d\n", i, v[i]);
// }
  for (int i = 0; i < 10; i++)
  {
    if (v[i] % 2 != 0)
    {
      printf("V1 = V[%d]: %d\n", i, v[i]);
      v1[count_impar] = v[i];
      printf("V1[%d]: %d \n", count_impar, v1[count_impar]);
      count_impar++;
    }
    else //if //(v[i] % 2 == 0)
    {
      printf("V2 = V[%d]: %d\n", i, v[i]);
      v2[count_par] = v[i];
      printf("V2[%d]: %d \n", count_par, v2[count_par]);
      count_par++;
    }
  }

  printf ("\n");

  for (int j = 0; j < count_impar; j++)
  {
    printf("V1[%d]: %d \n", j, v1[j]);
  }

  printf ("\n");

  for (int j = 0; j < count_par; j++)
  {
    printf("V2[%d]: %d \n", j, v2[j]);
  }
  return 0;
}
