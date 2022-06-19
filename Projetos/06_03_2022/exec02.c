#include <stdio.h>
#include <math.h>

int main()
{
  int num1 = 0, num2 = 0, num3 = 0, a = 0, b = 0;
  for (int i = 0; i < 100; i++) //for loop, num + 1, <100
  {
    ++num1;
    printf("%d, ", i);
  }
  printf("\n----------------------------------------\n");
  while (a < 100) //while...do loop, num + 1, <100
  {
    ++a;
    ++num2;
    printf("%d, ", num2);

  }
  printf("\n----------------------------------------\n");
  do //do...while loop, num + 1, <100
  {
    ++b;
    ++num3;
    printf("%d, ", num3);
  } while (b < 100);
  printf("\n----------------------------------------\n");
  return 0;
}
