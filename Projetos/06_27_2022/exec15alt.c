#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- B4
mentos repetidos.
*/

int main(){

	int vet[5], i,j, k=0;
  int aux[5]; //vetor auxiliar
	bool rept;  //variável auxiliar para indicar se existe número repetido


	for(i=0; i<5; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &vet[i]);
	}

	for(i=0; i<5; i++)
	{
	  rept = false;
		for(j = i+1; j<5; j++)
    {
			if(vet[i] == vet[j])
      {
				rept = true; //indica que o número está repetido
				break;
			}
		}
		if (rept == false) //apenas transfere para o novo vetor os números não repetidos
		{
		  aux[k] =vet[i];
		  k++;
		}
	}
	for(i=0; i<k; i++)
	{
		printf("%d ", aux[i]);
	}

	return 0;
}
