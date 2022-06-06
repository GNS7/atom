#include <stdio.h>

int main() {
  int a = 1;
  int b = 2;
  int c;
  if (a != b) {
    c = b; // c agora armazena o mesmo valor que b
    b = a;
    a = c; //agora eu posso usar o valor de b que eu guardei em c para mudar a
  }
  printf("%i, %i", a, b); // a é b, b é a
  return 0;
}
