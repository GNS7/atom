#include <stdio.h>

int main() {
	//int arr[10], temp, count = 1;

	printf("Digite um valor: ");
	scanf("%d", &arr[0]);

	for (int i = 0; i < 10; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &temp);
		printf("\ntemp: %d \n", temp);
		for (int j = 0; j < i; j++)
		{
			if (temp == arr[j])
			{
				printf("Numero repetido, %d e %d \n", temp, arr[j]);
			}
			else
			{
				printf("\ncount: %d\n", count);
				arr[count] = temp;
				count++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d: %d \n", i, arr[i]);
	}
	return 0;
}
