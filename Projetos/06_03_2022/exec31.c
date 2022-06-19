#include <stdio.h>
#include <math.h>

//int main()
{
  for (int i = 1; i <= 99; i += 2)
  {
    for (int j = 1; j <= 50; j++)
    {
      if (i != j)
      printf("%d/%d ", i, j);
    }
  }
  return 0;
}
