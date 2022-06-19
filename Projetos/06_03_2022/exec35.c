#include <stdio.h>
#include <math.h>

int main()
{
  int inicio, final, intervalo, soma_intervalo = 0;
  printf("Digite o inicio do intervalo: ");
  scanf("%d", &inicio);
  printf("Digite o final do intervalo: ");
  scanf("%d", &final);
  if (final <= inicio) //o programa avisa se o valor final for maior que o inicial
  {
    printf("Intervalo invalido");
  }
  else
  {
    intervalo = final - inicio; //quantidade de numeros no intervalo, usado para determinar quantas vezes o loop roda
    for (int i = 0; i <= (intervalo); i++)
    {
      if (inicio % 2 != 0) //se inicio impar
      {
        soma_intervalo += inicio;
        //printf("%d\n", soma_intervalo);
        ++inicio;
      }
      else if (inicio % 2 == 0) //se inicio par
      {
        ++inicio;
        //printf("inicio: %d\n", inicio);
      }
    }
    printf("Soma dos numeros impares do intervalo: %d", soma_intervalo);
  }
  return 0;
}
