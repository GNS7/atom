#include <stdio.h>

int main() {
	//int count = 0, arr_A[5], arr_B[5], soma[count], temp_A, temp_B, i = 0;
  printf("Digite um valor positivo ate 10000: ");
  scanf("%d", &temp_A);
  printf("Digite outro valor positivo ate 10000: ");
  scanf("%d", &temp_B);
  if (temp_A > 10000 || temp_B > 10000)
  {
    printf("Erro");
    return 1;
  }
  do
  {
    arr_A[i] = temp_A % 10;
    arr_B[i] = temp_B % 10;
    printf("Arr_A: %d, Arr_B: %d, %d \n", arr_A[i], arr_B[i], i);
    ++i;
    temp_A = temp_A / 10;
    temp_B = temp_B / 10;
    printf("temp_A: %d e Temmp_B: %d \n", temp_A, temp_B);
    ++count;
    printf("count: %d\n", count);
  } while (temp_A != 0 && temp_B != 0);
  for(int j = 0; j < count; j++)
  {
    soma [j] = arr_A[j] + arr_B[j];
  }
  for(int i = 0; i < count; i++)
  {
    if (soma[i] >= 10)
    {
      soma[i] -= 10;
      soma[i + 1] += 1;
    }
    printf("Soma[%d] =  %d + %d = %d \n", i, arr_A[i], arr_B[i], soma[i]);
  }
 return 0;
}
