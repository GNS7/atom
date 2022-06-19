#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int valor, temp, lower = 1, upper = 1000, number, chances;
  srand(time(0));
  number = (rand() % (upper - lower + 1)) + lower;
  do {
    printf("Digite o valor: ");
    scanf("%d", &temp);
    if (temp != number)
    {
      if (temp < number)
      {
        printf("O numero era maior\n");
      }
      else if (temp > number)
      {
        printf("O numero era menor\n");
      }
      ++chances;
      //printf("O numero era %d\n", number);
    }
  } while(temp != number);
  printf("Certo, foram precisas %d tentativas\n", chances);

  return 0;
}
