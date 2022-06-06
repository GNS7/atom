#include <stdio.h>
#include <math.h>

int main()
{
  int x, y; //declaração de variáveis
  int num; //declaração de variáveis
  printf("Selecione uma funcao \n 1) x - 2\n 2) x + 2(y)\n 3) x * y\n 4) x + 100\n");
  scanf("%i", &num);
  if(num >= 1 && num <= 4) //se num maior que ou igual a 1 e menor que ou igual a 4
  {
    printf("Qual o valor de x? ");
    scanf("%i", &x);
    printf("Qual o valor de y? ");
    scanf("%i", &y);
    int function1 = x - 2;
    int function2 = x + 2*(y);
    int function3 = x * y;
    int function4 = x + 100;
    switch (num) {  //se o valor de num corresponder a um dos cases o switch imprime a resposta
      case 1: printf("%i",function1); break;
      case 2: printf("%i",function2); break;
      case 3: printf("%i",function3); break;
      case 4: printf("%i",function4); break;
    }
  }
  else
  {
    printf("funcao nao existente.");
  }
  return 0;
}
