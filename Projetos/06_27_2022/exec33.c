#include <stdio.h>

int main() {
	int arr[15], position = 1, count = 0;
	for (int i = 0; i < 15; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 15; i++) //loop para a primeira array
	{
		if (arr[i] == 0) //se valor de array em i == 0
		{
			arr[i] = arr[i+1];
			for (int j = i + 1; j < 15; j++) //array i == i + 1
			{
				//for (position; position < 15 - j; position++)
				//{
				arr[j] = arr[j + 1]; //array j == j + 1
				//arr[j] = arr[k];
				//}
			}
			count++; // numero de elementos retirados
		}
	}
	for(int i = 0; i < 15 - count; i++)
	{
		printf("%d: %d\n", i, arr[i]);
	}
	return 0;
}
