#include <stdio.h>
#include <math.h>

int main()
{
  int arr[2];
  int baixa_soma;
  int alta_soma;
  int n = 0;
  int count = 0;
  int resultados[n];
  int soma;
  int quadrado_soma;
  int i = 1052;
  for (int i = 1000; i <= 9999; i++)
  {
    arr[0] = (i / 100);
    //arr[1] = (i / 100) % 10; //divide o valor por 100 e depois pega o resto da divisao por 10
    //arr[2] = (i / 10) % 10; //divide o valor por 10 e depois pega o resto da divisao por 100
    arr[1] = i % 100;
    baixa_soma = arr[1];
    alta_soma = arr[0];
    soma = alta_soma + baixa_soma;
    quadrado_soma = pow(soma, 2);
    //printf("i: %d, arr[0]: %d, arr[1]: %d, baixa_soma: %d, alta_soma: %d, soma: %d, quadrado_soma: %d.\n", i, arr[0], arr[1], baixa_soma, alta_soma, soma, quadrado_soma);
    if (quadrado_soma == i)
    {
      ++n;
      resultados[count] = i;
      ++count;
      for (int i = 0; i < n; ++i)
      {
        //printf("\nresultados[%d] = %d, n: %d\n", i, resultados[i], n);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("resultados[%d] = %d\n", i, resultados[i]);
  }
  //printf("soma: %d", baixa_soma);
  return 0;
}
