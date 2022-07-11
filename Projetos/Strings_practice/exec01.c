#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100], str1[100];
	printf("Digite uma palavra/frase: ");
	gets(str);
	printf("\n");
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	fgets(str1, 100, stdin);
	if (strcmp(str, str1) == 0)
	{
		printf("strings iguais");
	}
	else
	{
		if (sizeof(str) < sizeof(str1))
		{
      fputs(str1, stdout);
      printf("\n");
		}
    else
    {
      fputs(str, stdout);
      printf("\n");
    }
	}
  strcat(str, str1);
  fputs(str, stdout);
	return 0;
}
