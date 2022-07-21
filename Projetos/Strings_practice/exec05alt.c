#include <stdio.h>

int main() {
	char str[100], str1[100], str2[100], str3[100], order[4];
	printf("Digite uma palavra/frase: ");
	gets(str);
	printf("\n");
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	gets(str1);
	printf("Digite uma palavra/frase: ");
	gets(str2);
	printf("\n");
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	gets(str3);
	printf("\n");
	// for (int i = 0; i < 4; i++)
	// {
	//   if (strcmp(str, str1) > 0 && strcmp(str, str2) > 0 && strcmp(str, str3) > 0)
	//   {
	//     order[i] = 4;
	//   }
	// }
	if (strcmp(str, str1) > 0 && strcmp(str, str2) > 0 && strcmp(str, str3) > 0) //compara a primeira string com o resto, se ela for a "maior" //str
	{
		order[0] = 4;
		if (strcmp(str1, str2) > 0 && strcmp(str1, str3) > 0) //compara qual a segunda "maior" //str1
		{
      order[1] = 3;
      if (strcmp(str2, str3) > 0) //compara qual a terceira "maior"
      {
        order[2] = 2;
        order[3] = 1;
      }
      if (strcmp(str2, str3) < 0) //compara qual a terceira "maior"
      {
        order[2] = 1;
        order[3] = 2;
      }
		}
    if (strcmp(str2, str1) > 0 && strcmp(str2, str3) > 0) //compara qual a segunda "maior" //str2
    {
      order[2] = 3;
      if (strcmp(str1, str3) > 0) //compara qual a terceira "maior"
      {
        order[1] = 2;
        order[3] = 1;
      }
      if (strcmp(str1, str3) < 0) //compara qual a terceira "maior"
      {
        order[1] = 1;
        order[3] = 2;
      }
    }
    if (strcmp(str3, str1) > 0 && strcmp(str3, str2) > 0) //compara qual a segunda "maior" //str3
    {
      order[3] = 3;
      if (strcmp(str1, str2) > 0) //compara qual a terceira "maior"
      {
        order[1] = 2;
        order[2] = 1;
      }
      if (strcmp(str1, str2) < 0) //compara qual a terceira "maior"
      {
        order[1] = 1;
        order[2] = 2;
      }
    }
	}
	if (strcmp(str1, str) > 0 && strcmp(str1, str2) > 0 && strcmp(str1, str3) > 0)
	{
		order[1] = 4;
    if (strcmp(str, str2) > 0 && strcmp(str, str3) > 0)
		{
      order[0] = 3;
      if (strcmp(str2, str3) > 0)
      {
        order[2] = 2;
        order[3] = 1;
      }
		}
	}
	if (strcmp(str2, str) > 0 && strcmp(str2, str1) > 0 && strcmp(str2, str3) > 0)
	{
		order[2] = 4;
	}
	if (strcmp(str3, str) > 0 && strcmp(str3, str1) > 0 && strcmp(str3, str2) > 0)
	{
		order[3] = 4;
	}
	return 0;
}
