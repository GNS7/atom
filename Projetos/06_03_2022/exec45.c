#include <stdio.h>
#include <math.h>

int main()
{
  int escolha;
  float m_s, km_h, temp, constante;
  constante = 3.6;
  do
  {
    printf("Escolha uma opcao: \n1) km/h => m/s \n2) m/s => km/h \n3) Finalizar o programa\n");
    scanf("%d", &escolha);
    if (escolha <= 0 || escolha >= 3)
    {
      if (escolha == 3)
      {
        return 0;
      }
      printf("opcao invalida");
      return 0;
    }
    printf("Digite o valor: ");
    scanf("%f", &temp);
    m_s = temp / constante;
    km_h = temp * constante;
    switch (escolha) {
      case 1:
       printf("\n%.2f km/h e igual a %.2f m/s\n\n", temp, m_s);
       break;
      case 2:
       printf("\n%.2f m/s e igual a %.2f km/h\n\n", temp, km_h);
       break;
      case 3: return 0; break;
    }
  } while(escolha != 3);
  return 0;
}
