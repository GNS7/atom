#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100], str1[100];
	int n, status = 0;
	printf("Digite o nome: ");
	gets(str);
	printf("\n");
	fflush(stdin);
	printf("Digite o sobrenome: ");
	gets(str1);
  strcat(strcat(str, " "),str1);
  printf("\n");
  printf("%s, numero de caracteres: %d, primeira letra: %c, ultima letra: %c", str, strlen(str), str[0], str[strlen(str)-1]);
  return 0;
}
