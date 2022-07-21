#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int positive (int a);

int main() {
  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);
  printf ("%d",positive (n));
  return 0;
}

int positive (int a)
{
  if (a < 0)
  {
    return -1;
  }
  else if (a == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
