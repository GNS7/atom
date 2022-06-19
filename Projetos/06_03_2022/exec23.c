#include <stdio.h>
#include <math.h>

int main()
{
  int valor, divisor = 1, quociente;
  int arr[10], n = 0;
  printf("Digite um valor: ");
  scanf("%d", &valor);
  for (int i = 0; i < valor; i++)
  {
    if (valor % divisor == 0)
    {
      quociente = valor / divisor;
      arr[n] = quociente;
      ++n;
    }
  }
  printf(" os divisores sao: %d", arr[10]);
  return 0;
}
