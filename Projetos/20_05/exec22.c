#include <stdio.h>
#include <math.h>

int main()
{
  int idade; //declaração de variáveis
  int tempo_trabalho; //declaração de variáveis
  printf("Digite sua idade: \n");
  scanf("%d", &idade);
  printf("Digite seu tempo de trabalho (em anos): \n");
  scanf("%d", &tempo_trabalho);
  if (idade >= 65)
  {
    printf("Pode se aposentar.");
  }
  else if (tempo_trabalho >= 30)
  {
    printf("Pode se aposentar.");
  }
  else if (idade >= 60 && tempo_trabalho >= 25)
  {
    printf("Pode se aposentar.");
  }
  else
  {
    printf("Nao pode se aposentar.");
  }
  return 0;
}
