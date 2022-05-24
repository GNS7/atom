#include <stdio.h>
#include <math.h>

int main()
{
  int nota1, nota2, nota3; //declaração de variáveis
  int media; //declaração de variáveis
  printf("Digite a primeira nota:\n");
  scanf("%d", &nota1);
  printf("Digite a segunda nota:\n");
  scanf("%d", &nota2);
  printf("Digite a terceira nota:\n");
  scanf("%d", &nota3);
  media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4;  //media ponderada das notas onde nota1 e nota2 sao multiplicadas por 1 e a nota 3 por 2, depois divide-se o resultado pela soma dos pesos.
  if (media >= 60) { //se a media das notas e maior que 60
    printf("A media do aluno foi %i\n", media);
    printf("O aluno foi aprovado.");
  }
  else {
    printf("O aluno foi reprovado.");
  }
  return 0;
}
