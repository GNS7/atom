#include <stdio.h>

int main() {
  char str[100], char1;
  int count = 0;
	printf("Digite uma palavra/frase: ");
	gets(str);
  printf("Digite uma letra: ");
  scanf("%c", &char1);
	printf("\n");
  for (int i = 0; i < sizeof(str); i++)
  {
    if (char1 == str[i])
    {
      count++;
    }
  }
  printf("%c apareceu %d vezes em %s", char1, count, str);
	return 0;
}
