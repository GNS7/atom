#include <stdio.h>

int main()
{
  int x;
  int g_x;
  int f_x;
  printf("Digite o valor de x: \n");
  scanf("%d", &x);
  int h_x = (x * x) + (3 * x) - 20; // equaçao que determina o valor de h_x
  if (h_x > 5) // se h_x > 5 continua senao vai para o else if
  {
    g_x = h_x;
    if (g_x > 10) //se h_x > 5, se g_x = h_x e f_x = x + (2 * (x *x))
    {
      f_x = x + (2 * (x *x));
      printf("f(x) = %d", f_x);
    }
  }
  else if (h_x <= 5) //determina se h_x <= 5
    {
      g_x = 5;
      if (g_x <= 10) //se h_x <= 5, se g_x = 5 e f_x = 10
      {
        f_x = 10;
      }
      printf("f(x) = %d", f_x);
    }
  return 0;
}
