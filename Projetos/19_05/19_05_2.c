#include <stdio.h>

int main () {
  int a;
  int b;
  printf ("Digite o numero de usuario.\n");
  scanf ("%i", &a);
  printf ("Digite a senha de usuario.\n");
  scanf ("%i", &b);
  if (a == 675483 && b == 67453) { //verificar se o numero de usuario corresponde com a senha
    printf ("Usuario valido.");
  }
  else if (a == 145627  && b == 89234) { //verificar se o numero de usuario corresponde com a senha
    printf ("Usuario valido.");
  }
  else if (a == 98782 && b == 89132) { //verificar se o numero de usuario corresponde com a senha
    printf ("Usuario valido.");
  }
  else { //se nenhum for compativel o usuario nao existe ou a senha esta errada, por isso o usuario esta invalido
    printf ("Usuario invalido.")
  }
  return 0;
}
