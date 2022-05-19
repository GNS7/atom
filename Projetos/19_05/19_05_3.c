#include <stdio.h>

int main() {
  int nmr;
  int nmr_de_vezes;
    printf("Digite o primeiro numero:\n");
    scanf("%i", &nmr);
  if (nmr % 2 == 0) { //verificar se o numero é par, se nmr % 2 == 0, quer dizer que o resto da divisao do numero por 2 e igual a 0, logo o numero e par
    printf("Numero par.\n");
    ++nmr_de_vezes; //isso é importante para determinar quantos dos numeros sao pares, logo tambem e possivel descobrir quantos sao impares
  }
  else { //se nmr % 2 != 0, o numero e impar
    printf("Numero impar.\n");
  }
    printf("Digite o segundo numero:\n");
    scanf("%i", &nmr);
  if (nmr % 2 == 0) { //verificar se o numero é par, se nmr % 2 == 0, quer dizer que o resto da divisao do numero por 2 e igual a 0, logo o numero e par
    printf("Numero par.\n");
    ++nmr_de_vezes;
  }
  else {
    printf("Numero impar.\n");
  }
    printf("Digite o terceiro numero:\n");
    scanf("%i", &nmr);
  if (nmr % 2 == 0) {//verificar se o numero é par, se nmr % 2 == 0, quer dizer que o resto da divisao do numero por 2 e igual a 0, logo o numero e par
    printf("Numero par.\n");
    ++nmr_de_vezes;
  }
  else {
    printf("Numero impar.\n");
  }
    printf("Digite o quarto numero:\n");
    scanf("%i", &nmr);
  if (nmr % 2 == 0) {//verificar se o numero é par, se nmr % 2 == 0, quer dizer que o resto da divisao do numero por 2 e igual a 0, logo o numero e par
    printf("Numero par.\n");
    ++nmr_de_vezes;
  }
  else {
    printf("Numero impar.\n");
  }
    printf("Digite o quinto numero:\n");
    scanf("%i", &nmr);
  if (nmr % 2 == 0) {//verificar se o numero é par, se nmr % 2 == 0, quer dizer que o resto da divisao do numero por 2 e igual a 0, logo o numero e par
    printf("Numero par.\n");
    ++nmr_de_vezes;
  }
  else {
    printf("Numero impar.\n");
  }
  printf("Voce digitou %i numeros pares e %i numeros impares.", nmr_de_vezes, 5-nmr_de_vezes); //5-nmr_de_vezes é como se descobre a quantidade de numeros impares, ja que nmr_de_vezes é igual a quantidade de pares e foram dados 5 valores, portanto dos 5 valores 5-nmr_de_vezes sao impares
  return 0;
}
