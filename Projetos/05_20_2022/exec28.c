#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c; //declaração de variáveis
  int num; //opçao de qual media é escolhida pelo usuario
  printf("Digite um numero:\n");
  scanf("%d", &a);
  printf("Digite um numero:\n");
  scanf("%d", &b);
  printf("Digite um numero:\n");
  scanf("%d", &c);
  //printf("Qual tipo de media?\n 1) Geometrica\n 2) Ponderada \n 3) Harmonica \n 4) Aritmetica \n");
  //scanf("%d", &num);
  float geo = cbrt(a * b * c);
  printf("Geometrica %f \n", geo);
  float pond = (a + (2 * b) + (3 * c)) / 6;
  printf("Ponderada %f \n", pond);
  float harm = 1 / ((1/a) + (1/b) + (1/c));
  printf("Harmonica %f \n", harm);
  float arit = (a + b + c) / 3;
  printf("aritmetica %f \n", arit);
  switch (num)
  {
    case 1: printf("%f", geo); break;
    case 2: printf("%f", pond); break;
    case 3: printf("%f", harm); break;
    case 4: printf("%f", arit); break;
  }
  return 0;
}
