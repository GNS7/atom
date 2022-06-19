#include <stdio.h>
#include <math.h>

int main()
{
  int temp, count = 0, count_par = 0, soma = 0, soma_par = 0, maior = 0, menor = 1000;
  float  media, media_par;
  do
  {
    printf("Digite um numero: ");
    scanf("%d", &temp);
    if (temp != 0)
    {
      if (temp % 2 == 0)
      {
        soma_par += temp;
        count_par++;
      }
      if (temp > maior)
      {
        maior = temp;
      }
      if (temp < menor )
      {
        menor = temp;
      }
      soma += temp;
      ++count;
    }
  } while(temp != 0);
  media = soma / count;
  media_par = soma_par / count_par;
  printf("Quantidade de numeros: %d \nSoma: %d \nMedia: %.2f \nMaior numero: %d \nMenor numero: %d \nMedia par: %.2f \n", count, soma, media, maior, menor, media_par);
  return 0;
}
