#include <stdio.h>
#include <math.h>

int main()
{
  int input, print = 0;
  printf("Digite o numero:");
  scanf("%d", &input);
  do
  {
    input += 1;
    if(input % 3 == 0) //verificar se o numero é divisivel por 3
    {
      printf("%d \n", input);
      ++print; //var necessaria para o funcionamento do loop
    }
  } while(print < 5);
  return 0;
}
