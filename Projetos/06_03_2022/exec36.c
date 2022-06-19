#include <stdio.h>
#include <math.h>

int main()
{
  int n, m, soma_quadratica = 1, quadrado_soma = 1; //declaração de variáveis
  for (int i = 2; i <= 10; i++) //comeca do dois pois a variavel ja tem valor = 1
  {
    n = pow(i, 2);
    //printf("n: %d\n", n);
    soma_quadratica += n; //soma dos numeros elevados a 2
    //printf("soma: %d\n", soma_quadratica);
  }
  for (int i = 2; i <= 10; i++) //comeca do dois pois a variavel ja tem valor = 1
  {
    m = i;
    quadrado_soma += m;
    //printf("soma: %d\n", quadrado_soma);
  }
  quadrado_soma = pow(quadrado_soma, 2); //quadrado da soma
  printf("Soma dos quadrados: %d\n", soma_quadratica);
  printf("Quadrado das somas: %d\n", quadrado_soma);
  int diferenca = soma_quadratica - quadrado_soma;
  if (diferenca < 0)
  diferenca = -diferenca;
  printf("A diferenca do soma dos quadrados dos 10 primeiros numeros: %d, e o quadrado da soma desses: %d, e igual a: %d", soma_quadratica, quadrado_soma, diferenca);
  return 0;
}
