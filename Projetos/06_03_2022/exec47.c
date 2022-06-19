#include <stdio.h>
#include <math.h>

int main()
{
  int escolha;
  float adicao, subtracao, multiplicacao, divisao, temp1, temp2;
  do
  {
    printf("Escolha uma opcao: \n1) adicao \n2) subtracao \n3) multiplicacao \n4) divisao \n5) Finalizar \n");
    scanf("%d", &escolha);
    if (escolha <= 0 || escolha >= 5)
    {
      if (escolha == 5)
      {
        return 0;
      }
      printf("opcao invalida");
      return 0;
    }
    printf("Digite o valor: ");
    scanf("%f", &temp1);
    printf("Digite o valor: ");
    scanf("%f", &temp2);
    adicao = temp1 + temp2;
    subtracao = temp1 - temp2;
    multiplicacao = temp1 * temp2;
    divisao = temp1 / temp2;
    switch (escolha) {
      case 1:
       printf("Adicao: %.2f\n\n", adicao);
       break;
      case 2:
       printf("Subtracao %.2f\n\n", subtracao);
       break;
      case 3:
      printf("Multiplicacao %.2f\n\n", multiplicacao);
      break;
      case 4:
      printf("Divisao %.2f\n\n", divisao);
      break;
      case 5: return 0; break;
    }
  } while(escolha != 3);
  return 0;
}
