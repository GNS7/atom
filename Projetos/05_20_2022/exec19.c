#include <stdio.h>
#include <math.h>

int main()
{
  int x; //declaração de variáveis
  printf("Digite um numero: ");
  scanf("%d", &x);
  if(x % 3 == 0 && x % 5 != 0)
  {
    printf("%i e divisivel por 3, mas nao por 5", x);
  }
  else if (x % 5 == 0 && x % 3 != 0)
  {
    printf("%i e divisivel por 5, mas nao por 3", x);
  }
  else if (x % 5 == 0 && x % 3 == 0)
  {
    printf("%i e divisivel por 3 e por 5");
  }
  else if (x % 3 != 0 && x % 5 != 0)
  {
    printf("%i nao e divisivel nem por 3 e nem por 5", x);
  }
  return 0;
}
