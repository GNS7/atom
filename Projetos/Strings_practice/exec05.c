#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[5][100], temp[100];
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("Digite uma string: ");
		gets(str[i]);
	}
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%s \n", str[i]);
	// }

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("Strings em ordem alfabetica: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%s \n", str[i]);
	}
	return 0;
}
