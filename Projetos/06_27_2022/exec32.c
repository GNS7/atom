#include <stdio.h>



int main()
{
  int x[5], y[5], soma[5], produto[5], dif[5], intersec[5], intersec_count = 0, uniao[5];
  for(int i=0; i<5; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &x[i]);
  }
  printf("\n");
  for(int i=0; i<5; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &y[i]);
  }
  //1 opcao soma de x[i] + y[i]
  for(int i=0; i<5; i++)
  {
    soma[i] = x[i] + y[i];
    printf("Soma: %d \n", soma[i]);
  }
  printf("\n");
  //2 opcao produto x[i] * y[i]
  for(int i=0; i<5; i++)
  {
    produto[i] = x[i] * y[i];
    printf("Produto: %d \n", produto[i]);
  }
  printf("\n");
  //3 opcao diferenca x[i] - y[i]
  for(int i=0; i<5; i++)
  {
    dif[i] = x[i] - y[i];
    printf("Diferenca: %d \n", dif[i]);
  }
  printf("\n");
  //4 opcao intersecao x[i] e y[i]
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      if (x[i] == y[j])
      {
        intersec[intersec_count] = x[i];
        intersec_count++;
      }
    }
  }
  for(int i=0; i<intersec_count; i++)
  {
    printf("Intersec: %d \n", intersec[i]);
  }
  printf("\n");
  //5 opcao uniao x[i] e y[i]
  for(int i = 0; i<5; i++)
  {
    uniao[i] = x[i];
  }
  for (int i = 5; i <10; i++)
  {
    uniao[i] = y[i - 5];
  }
  for (int i = 0; i < 10; i++)
  {
    printf("Uniao: %d \n", uniao[i]);
  }
  return 0;
}
