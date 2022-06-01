#include <stdio.h>
#include <math.h>

int main()
{
  float notas;
  int faltas;
  printf("Digite a nota do aluno: \n");
  scanf("%f", &notas);
  printf("Digite o numero de faltas do aluno \n");
  scanf("%f", &faltas);
  if (notas >= 9 && notas <= 10)
  {
    if (faltas <= 20)
    {
      printf("Conceito A");
    }
    printf("Conceito B");
  }
  else if (notas >= 7.5 && notas <= 8.9)
  {
    if (faltas <= 20)
    {
      printf("Conceito B");
    }
    printf("Conceito C");
  }
  else if (notas >= 5 && notas <= 7.4)
  {
    if (faltas <= 20)
    {
      printf("Conceito C");
    }
    printf("Conceito D");
  }
  else if (notas >= 4 && notas <= 4.9)
  {
    if (faltas <= 20)
    {
      printf("Conceito D");
    }
    printf("Conceito E");
  }
  else if (notas >= 0 && notas <= 3.9)
  {
    if (faltas <= 20)
    {
      printf("Conceito E");
    }
    printf("Conceito E");
  }
  return 0;
}
