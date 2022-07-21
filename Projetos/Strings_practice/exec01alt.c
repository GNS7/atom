#include <stdio.h>
#include <string.h>

int main()
{

	char str1[20], str2[20];
	int n;

	printf("Digite a primeira string: ");
	gets(str1);


	printf("Digite a segunda string: ");
	gets(str2);

	printf("Digite o numero a ser comparado: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(str1[i] == str2[j]) {

				printf("\nstr1[%d] e str2[%d] = 0", i, j);

			}else printf("\nstr1[%d] e str2[%d] = -1", i, j);

		}
	}
	return 0;
}
