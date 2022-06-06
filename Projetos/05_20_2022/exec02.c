#include <stdio.h>
#include <math.h>

int main()
{
  int num; //declaração de variáveis
  float raiz; //declaração de variáveis
  printf("Digite um numero:");
  scanf("%d", &num);
  if (num > 0) //se num maior que 0, numero positivo
  {
    raiz = sqrt(num); //raiz quadrada de x
    printf ("%.2f", raiz);
  }
  else
  {
    printf ("Numero invalido");
  }
  return 0;
}
