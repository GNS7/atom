#include <stdio.h>
#include <math.h>

int main()
{
  int n_habitantes, valor_KwH, cada_consumo_mes;
  int cada_cod ,cod1[n_habitantes], cod2[n_habitantes], cod3[n_habitantes], i1 = 0, i2 = 0, i3 = 0;
  int maior1 = cod1[0], maior2 = cod2[0], maior3 = cod3[0];
  int menor1 = cod1[0], menor2 = cod2[0], menor3 = cod3[0];
  int soma1, soma2, soma3, soma_total;
  int consumo1, consumo2, consumo3, consumo_total;
  int menor_consumo, maior_consumo, media;
  printf("Numero de habitantes: ");
  scanf("%d", &n_habitantes);
  printf("Valor do Kw/h: ");
  scanf("%d", &valor_KwH);
  for (int i = 0; i < n_habitantes; i++)
  {
    printf("Consumo mes do i%° habitante:");
    scanf("%d", &cada_consumo_mes);
    printf("Codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
    scanf("%d", &cada_cod);


    switch (cada_cod)
    {
      case 1:
       cod1[i1] = cada_consumo_mes;
       i1++;
       break;
      case 2:
       cod2[i2] = cada_consumo_mes;
       i2++;
       break;
      case 3:
       cod3[i3] = cada_consumo_mes;
       i3++;
       break;
    }


    for (int i = 0; i < i1; i++)
    {
      if (cod1[i] > maior1)
      {
        maior1 = cod1[i];
      }
    }
    for (int i = 0; i < i1; i++)
    {
      if (cod1[i] < menor1)
      {
        menor1 = cod1[i];
      }
    }
    for (int i = 0; i < i2; i++)
    {
      if (cod2[i] > maior2)
      {
        maior2 = cod2[i];
      }
    }
    for (int i = 0; i < i2; i++)
    {
      if (cod2[i] < menor2)
      {
        menor2 = cod2[i];
      }
    }
    for (int i = 0; i < i3; i++)
    {
      if (cod3[i] > maior3)
      {
        maior3 = cod3[i];
      }
    }
    for (int i = 0; i < i3; i++)
    {
      if (cod3[i] < menor3)
      {
        menor3 = cod3[i];
      }
    }


    for (int i = 0; i < i1; i++)
    {
      soma1 += cod1[i];
    }
    for (int i = 0; i < i2; i++)
    {
      soma2 += cod2[i];
    }
    for (int i = 0; i < i3; i++)
    {
      soma3 += cod3[i];
    }


    consumo1 = soma1 * valor_KwH;
    consumo2 = soma2 * valor_KwH;
    consumo3 = soma3 * valor_KwH;


    if (consumo1 < consumo2 && consumo1 < consumo3)
    {
      menor_consumo = consumo1;
    }
    else if (consumo2 < consumo3 && consumo2 < consumo1)
    {
      menor_consumo = consumo2;
    }
    else if (consumo3 < consumo1 && consumo3 < consumo2)
    {
      menor_consumo = consumo3;
    }

    if (consumo1 > consumo2 && consumo1 > consumo3)
    {
      maior_consumo = consumo1;
    }
    else if (consumo2 > consumo3 && consumo2 > consumo1)
    {
      maior_consumo = consumo2;
    }
    else if (consumo3 > consumo1 && consumo3 > consumo2)
    {
      maior_consumo = consumo3;
    }


    consumo_total = soma_total * valor_KwH;
    media = consumo_total / n_habitantes;


  }
  printf("O maior consumo foi: %d \nO menor consumo foi: %d \nA media do consumo: %d\n", maior_consumo, menor_consumo, media);
  printf("Consumo Residencial: %d \nConsumo Comercial: %d \nConsumo industrial: %d", consumo1, consumo2, consumo3);
  return 0;
}
