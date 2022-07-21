#include <stdio.h>

int main() {
	char str[100], str1[100], str2[100], str3[100], order[4];
	printf("Digite uma palavra/frase: ");
	gets(str);
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	gets(str1);
	printf("Digite uma palavra/frase: ");
	gets(str2);
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	gets(str3);
	printf("\n");
	if (str[0] > str1[0] && str[0] > str2[0] && str[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str
	{
		if (str1[0] > str2[0] && str1[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
		{
      if (str2[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
  		{
        order[0] = 4;
        order[1] = 3;
        order[2] = 2;
        order[3] = 1;
      }
      if (str2[0] < str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
  		{
        order[0] = 4;
        order[1] = 3;
        order[2] = 1;
        order[3] = 2;
      }
    }
    if (str2[0] > str1[0] && str2[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
		{
      if (str1[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
  		{
        order[0] = 4;
        order[1] = 2;
        order[2] = 3;
        order[3] = 1;
      }
      if (str1[0] < str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
  		{
        order[0] = 4;
        order[1] = 1;
        order[2] = 3;
        order[3] = 2;
      }
    }
    if (str3[0] > str1[0] && str3[0] > str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
		{
      if (str1[0] > str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
  		{
        order[0] = 4;
        order[1] = 2;
        order[2] = 1;
        order[3] = 3;
      }
      if (str1[0] < str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
  		{
        order[0] = 4;
        order[1] = 1;
        order[2] = 2;
        order[3] = 3;
      }
    }
	}
	if (str1[0] > str[0] && str1[0] > str2[0] && str1[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
	{
    if (str[0] > str2[0] && str[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str
		{
      if (str2[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
  		{
        order[0] = 3;
        order[1] = 4;
        order[2] = 2;
        order[3] = 1;
      }
      if (str2[0] < str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
  		{
        order[0] = 3;
        order[1] = 4;
        order[2] = 1;
        order[3] = 2;
      }
    }
    if (str2[0] > str[0] && str2[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
		{
      if (str[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
  		{
        order[0] = ;
        order[1] = 4;
        order[2] = 3;
        order[3] = ;
      }
      if (str1[0] < str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
  		{
        order[0] = ;
        order[1] = 4;
        order[2] = 3;
        order[3] = ;
      }
    }
    if (str3[0] > str1[0] && str3[0] > str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
		{
      if (str1[0] > str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str1
  		{
        order[0] = ;
        order[1] = 4;
        order[2] = ;
        order[3] = ;
      }
      if (str1[0] < str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
  		{
        order[0] = ;
        order[1] = 4;
        order[2] = ;
        order[3] = ;
      }
    }
	}
	if (str2[0] > str[0] && str2[0] > str[0] && str2[0] > str3[0]) //compara a primeira string com o resto, se ela for a "maior" //str2
	{

	}
	if (str3[0] > str[0] && str3[0] > str1[0] && str3[0] > str2[0]) //compara a primeira string com o resto, se ela for a "maior" //str3
	{

	}
	return 0;
}
