#include <stdio.h>

int main(){
  float raio;
  float area;
  float perimetro;
  printf("Qual o raio do circulo: ");
  scanf("%f", &raio);
  area = 3.14 * (raio * raio);
  perimetro = 2 * 3.14 * raio;
  printf("Se um raio do circulo e %.2f, sua area e %.2f e seu perimetro e %.2f", raio, area, perimetro);
  return 0;
}
