#include <stdio.h>

int main(){
  float Celsius;
  float Farenheit;
  printf("Temperatura em Celsius: ");
  scanf("%f", &Celsius);
  Farenheit = (Celsius * 9/5) + 32;
  printf("%.2f graus Celsius equivalem a %.2f Farenheit", Celsius, Farenheit);
  return 0;
}
