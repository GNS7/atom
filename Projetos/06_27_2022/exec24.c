#include <stdio.h>


int main()
{
   float numero[10], altura[10], maior = 0, num_maior, menor, num_menor;
  for(int i = 0; i < 10; i++)
  {
    printf("Digite o numero do aluno: ");
    scanf("%f", &numero[i]);
    printf("Digite a altura desse aluno: ");
    scanf("%f", &altura[i]);

  }
  menor = altura[0];
  for(int i = 0; i < 10; i++)
  {
    if (altura[i] > maior)
    {
      maior = altura[i];
      num_maior = numero[i];
    }
    else if (altura[i] < menor)
    {
      menor = altura[i];
      num_menor = numero[i];
    }
  }
  printf ("A maior altura e %.2f do numero %.2f e a menor e %.2f do numero %.2f", maior, num_maior, menor, num_menor);
  return 0;
}
