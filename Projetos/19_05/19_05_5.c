#include <stdio.h>

int main()
{
  int idade;
  printf("Qual a idade do atleta?\n");
  scanf("%d", &idade);
  if (idade >=5 && idade <= 7) //se a idade for maior que 5 e menor que 7
  {
    printf("Este atleta e da categoria infantil A.\n");
  }
  else if (idade >=8 && idade <= 10) //se a idade for maior que 8 e menor que 10
  {
    printf("Este atleta e da categoria infantil B.\n");
  }
  else if (idade >=11 && idade <= 13) //se a idade for maior que 11 e menor que 13
  {
    printf("Este atleta e da categoria juvenil A.\n");
  }
  else if (idade >=14 && idade <= 17) //se a idade for maior que 14 e menor que 17
  {
    printf("Este atleta e da categoria juvenil B.\n");
  }
  else if (idade >=18 && idade <= 25) //se a idade for maior que 18 e menor que 25
  {
    printf("Este atleta e da categoria senior.\n");
  }
  return 0;
}
