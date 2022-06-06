#include <stdio.h>
#include <math.h>

int main()
{
  int base_maior, base_menor; //declaração de variáveis
  int altura; //declaração de variáveis
  int area_trapezio; //declaração de variáveis
  printf("Digite a base maior do trapezio: \n");
  scanf("%d", &base_maior);
  printf("Digite a base menor do trapezio: \n");
  scanf("%d", &base_menor);
  printf("Digite a altura do trapezio: \n");
  scanf("%d", &altura);
  if ((base_maior && base_menor) > 0) //a base maior e a base menor nao podem ser menor que 0
  {
    area_trapezio = ((base_maior + base_menor) * altura) / 2; //calculo da area do trapezio
    printf("A area do trapezio e igual a: %i", area_trapezio);
  }
  return 0;
}
