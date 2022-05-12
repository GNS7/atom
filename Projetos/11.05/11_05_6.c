#include <stdio.h>

int main() {
  float farenheit;
  float celsius;
  printf("Qual a temperatura em farenheit: ");
  scanf("%f", &farenheit);
  celsius = 5 * (farenheit - 32) / 9;
  printf("%.2f farenheit e igual a %.2f graus celsius", farenheit, celsius);
  return 0;
}
