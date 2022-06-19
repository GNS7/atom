#include <stdio.h>
#include <math.h>

int main()
{
  int num = 0;
  for (;num <= 100000;) //for loop, num + 1000, <100.000 (cem mil)
  {
    printf("%d, ", num);
    num += 1000;
  }
  return 0;
}
