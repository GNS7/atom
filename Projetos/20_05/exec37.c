#include <stdio.h>
#include <math.h>

int main()
{
  int hora_chegada, min_chegada, hora_saida, min_saida, hora_stay, min_stay;
  float preco;
  printf("Que hora voce chegou no estacionamento?\n");
  scanf("%d", &hora_chegada);
  printf("Quantos minutos da hora?\n");
  scanf("%d", &min_chegada);
  printf("Que hora voce saiu do estacionamento?\n");
  scanf("%d", &hora_saida);
  printf("Quantos minutos da hora?\n");
  scanf("%d", &min_saida);
  hora_stay = hora_saida - hora_chegada;
  if (hora_stay < 0)
  {
    hora_stay = hora_stay * (-1);
  }
  min_stay = min_saida + min_chegada;
  do
  {
    hora_stay = hora_stay + 1;
    min_stay = min_stay - 60;
  } while (min_stay > 60);

  preco = 4.8 + (2 * (hora_stay - 4));
  switch (hora_stay)
  {
    case 1: printf("O preco do estacionamento foi 1.00"); break;
    case 2: printf("o preco do estacionamento foi 2.00"); break;
    case 3: printf("o preco do estacionamento foi 3.00"); break;
    case 4: printf("o preco do estacionamento foi 4.00"); break;
    default: ("o preco do estacionamento foi %f", preco); break;
  }
  return 0;
}
