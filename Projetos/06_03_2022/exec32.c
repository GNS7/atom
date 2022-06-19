#include <stdio.h>
#include <math.h>

int main()
{
  int n, dado_1 [6] = { 1, 2, 3, 4, 5, 6}, dado_2 [6] = {2, 3, 5, 1, 6, 4};
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    if (dado_1[i] == dado_2[i])
    {
      printf("%d = %d\n", dado_2[i], dado_1[i]);
    }
    else if (dado_1[i] < dado_2[i])
    {
      printf("%d < %d\n", dado_1[i], dado_2[i]);
    }
    else if (dado_1[i] > dado_2[i])
    {
      printf ("%d > %d\n", dado_1[i], dado_2[i]);
    }
  }
  return 0;
}
