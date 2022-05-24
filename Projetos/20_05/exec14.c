#include <stdio.h>
#include <math.h>

int main()
{
  float trabalho_lab;  //declaração de variáveis
  float aval_semestral;  //declaração de variáveis
  float exame_final;  //declaração de variáveis
  float media;  //declaração de variáveis
  printf("Digite a nota do trabalho de laboratorio: \n");
  scanf("%f", &trabalho_lab);
  printf("Digite a nota da avaliacao semestral: \n");
  scanf("%f", &aval_semestral);
  printf("Digite a nota do exame final: \n");
  scanf("%f", &exame_final);
  media = ((trabalho_lab * 2) + (aval_semestral * 3) + (exame_final * 5)) / 10; //media ponderada das notas onde as notas sao multiplicadas por pesos, depois divide-se o resultado pela soma dos pesos.
  if (media < 2.9) // se a media menor que 2.9
  {
    printf("%.1f\n", media);
    printf("O aluno foi reprovado.");
  }
  else if (media > 3 && media < 4.9)  //se a media estiver entre 3 e 4.9
  {
    printf("%.1f\n", media);
    printf("O aluno pegou recuperaçao.");
  }
  else // se a media maior ou igual a 5
  {
    printf("%.1f\n", media);
    printf("O aluno foi aprovado.");
  }
  return 0;
}
