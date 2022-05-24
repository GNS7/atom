#include <stdio.h>

int main() {
  int num;
  int par;
  printf("Digite o primeiro numero:\n");
  scanf("%d", &num);
  if (num % 2 == 0) {
      printf("Numero par\n");
      ++par;
  }
  printf("Sao %d numeros pares", par);
  return 0;
}
