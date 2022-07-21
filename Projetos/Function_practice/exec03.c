#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Celsius_Farenheit (float a, float *b);

int main() {
  float celsius, farenheit;
  printf("Digite a temperatura em celsius: ");
  scanf("%f", &celsius);
  Celsius_Farenheit(celsius, &farenheit);
  printf("Celsius: %f e Farenheit: %f \n", celsius, farenheit);
	return 0;
}

void Celsius_Farenheit (float a, float *b)
{
  *b = a * (9/5) + 32;
}
