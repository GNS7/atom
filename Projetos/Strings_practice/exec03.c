#include <stdio.h>

int main() {
	char str[100], str1[100];
	int n, status = 0;
	printf("Digite uma palavra/frase: ");
	gets(str);
	printf("\n");
	fflush(stdin);
	printf("Digite uma palavra/frase: ");
	fgets(str1, 100, stdin);
	printf("digite o valor de n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (str[i] == str1[i])
		{
			status = 1;
		}
		else
		{
			status = 0;
		}
	}
	switch (status)
	{
		case 0:
		printf("-1");
		break;
		case 1:
		printf("0");
		break;
	}
	return 0;
}
