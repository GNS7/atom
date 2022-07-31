#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct alunos
{
	int num_aluno;
	char nome_aluno[100];
	float notas[3];
	float media;
} alunos;

void print_arr (alunos *arr, int size); //imprime o vetor
void open_file (FILE **f); //abre o arquivo e conta quantas linhas ele tem
void read_file (FILE **f, alunos *cadastro, int size); //le o arquivo
void print_names (alunos *arr, int size); //imprime os nomes dos alunos
void order (alunos *arr, int size); //Ordena o vetor com base no numero da matricula
void count_lines (FILE **f, int *count); //Contar o numero de linhas no arquivo
void media (alunos *arr, int size); //fazer a media das notas
void print_nome_media (alunos *arr, int size); //imprime a media e o nome
void search (alunos *arr, int size, int *num_busca); //Funcao para busca usando o numero de matricula
void print_struct (alunos *arr, int size, int position); //imprime uma struct especifica
void change_notes (alunos *arr, int size, int num_busca); //muda a valor das notas, usa o resultado da funcao search para saber de qual aluno mudar
int search_maior_nota (alunos *arr, int size); //acha a maior nota e retorna o numero do aluno
int search_menor_nota (alunos *arr, int size); //acha a maior nota e retorna o numero do aluno
void aprovados (alunos *arr, int size, int *aprovados, int *reprovados); //Compara a media dos alunos com 6 para determinar se o aluno foi aprovado ou reprovado
float media_geral (alunos *arr, int size); // Faz a media de todas as medias
void new_file (alunos *arr, int size); //cria um novo arquivo dps do switch

int main()
{
	int opcao, num_matricula, soma_medias, alunos_aprovados, alunos_reprovados, count = 0, num_busca;

	FILE *fp;
	open_file (&fp);
	char c;


	while ((c = fgetc(fp))!= EOF)
	{
		if (c == '\n')
		{
			count++;
		}
	}
	fclose (fp);
	open_file (&fp);

	alunos *cadastro = (alunos*) malloc (count * sizeof(alunos)); //alocacao dinamica de memoria para 116 structs
	read_file (&fp, cadastro, count);
	media (cadastro, count);

	while (1)
	{
		printf
		(
			"1.  Imprimir todos os elementos do arranjo; \n"
			"2.  Imprimir apenas os nomes dos alunos; \n"
			"3.  Imprimir o nome dos alunos e sua respectiva nota final; \n"
			"4.  Buscar os dados de um aluno usando a busca sequencial; \n"
			"5.  Imprimir os alunos ordenados de acordo com sua matricula; \n"
			"6.  Editar as notas de um aluno, para isso e necessario que se busque os dados do aluno. \n"
			"7.  Imprimir a matricula, nome e nota final do aluno que obteve a maior nota de todas; \n"
			"8.  Imprimir  a  matricula,  nome  e  nota  final  do  aluno  que  obteve  a menor nota de todas; \n"
			"9.  Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados,  imprima  ainda  a  media  geral.  Os  alunos  aprovados serao aqueles que obtiverem media maior ou igual a 6.0; \n"
			"0.  Sair do programa; \n"
		);
		scanf("%d", &opcao);


		switch (opcao)
		{
		case 0:
			return 0;
			break;
		case 1:
			print_arr (cadastro, count);
			break;
		case 2:
			print_names (cadastro, count);
			break;
		case 3:
			print_nome_media (cadastro, count);
			break;
		case 4:
			search (cadastro, count, &num_busca);
			break;
		case 5:
			order (cadastro, count);
			print_arr (cadastro, count);
			break;
		case 6:
			search (cadastro, count, &num_busca);
			//printf("\n Numero de busca: %d\n", num_busca);
			change_notes (cadastro, count, num_busca); //muda as notas
			media (cadastro, count); //refaz a media
			print_struct (cadastro, count, num_busca);
			break;
		case 7:
			print_struct (cadastro, count, search_maior_nota (cadastro, count)); //a funcao search maior nota retorna um valor de matricula e a print struct recebe esse valor de matricula e usa ele pra imprimir as informacoes
			break;
		case 8:
			print_struct (cadastro, count, search_menor_nota (cadastro, count)); //a funcao search menor nota retorna um valor de matricula e a print struct recebe esse valor de matricula e usa ele pra imprimir as informacoes
			break;
		case 9:
			aprovados (cadastro, count, &alunos_aprovados, &alunos_reprovados);
			printf("\n %d alunos aprovados e %d alunos reprovados", alunos_aprovados, alunos_reprovados);
			printf("\nMedia geral: %f\n", media_geral(cadastro, count));
		}
		printf("\n");
	}
	order (cadastro, count); //ordena o vetor
	new_file (cadastro, count); //cria um novo arquivo baseado vetor modificado e ordenado

	return 0;
}

void open_file (FILE **f) //abre o arquivo
{
	*f = fopen ("alunos.txt", "r+");
	if (*f == NULL)
	{
		printf("ERROR \n");
		system("pause");
	}
}

void count_lines (FILE **f, int *count) //Contar o numero de linhas no arquivo
{
	char c;
	do
	{
		c = fgetc (*f);
		if (c == '\n')
		{
			++*count;
		}
	} while (c != EOF);
}

void read_file (FILE **f, alunos *cadastro, int size) //le o arquivo
{
	for (int i = 0; i < size; i++)
	{
		fscanf (*f, "%i", &cadastro[i].num_aluno);
		fscanf (*f, "%s", &cadastro[i].nome_aluno);
		fscanf (*f, "%f", &cadastro[i].notas[0]);
		fscanf (*f, "%f", &cadastro[i].notas[1]);
		fscanf (*f, "%f", &cadastro[i].notas[2]);
	}
}

void new_file (alunos *arr, int size) //cria um novo arquivo dps do switch
{
	FILE *fw = fopen ("new_alunos.txt", "w");
	for (int i = 0; i < size; i++)
	{
		fprintf (fw, "%i ", arr[i].num_aluno);
		fprintf (fw, "%s ", arr[i].nome_aluno);
		fprintf (fw, "%.1f ", arr[i].notas[0]);
		fprintf (fw, "%.1f ", arr[i].notas[1]);
		fprintf (fw, "%.1f ", arr[i].notas[2]);
		fprintf (fw, "%.1f ", arr[i].media);
		fprintf (fw, "\n");
	}
}

void media (alunos *arr, int size)
{
	float media = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			media += arr[i].notas[j];
		}
		arr[i].media = media / 3.0;
		media = 0;
	}
}

float media_geral (alunos *arr, int size) // Faz a media de todas as medias
{
	float media = 0;
	for (int i; i < size; i++)
	{
		media += arr[i].media;
	}
	return media / 116.0;
}
void print_arr (alunos *arr, int size) //imprime o vetor
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i].num_aluno);
		printf("%s ", arr[i].nome_aluno);
		printf("%.2f ", arr[i].notas[0]);
		printf("%.2f ", arr[i].notas[1]);
		printf("%.2f ", arr[i].notas[2]);
		printf("media: %.2f \n", arr[i].media);
	}
}

void print_struct (alunos *arr, int size, int position) //imprime uma struct especifica
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].num_aluno == position)
		{
			printf("%d ", arr[i].num_aluno);
			printf("%s ", arr[i].nome_aluno);
			printf("%.2f ", arr[i].notas[0]);
			printf("%.2f ", arr[i].notas[1]);
			printf("%.2f ", arr[i].notas[2]);
			printf("media: %.2f \n", arr[i].media);
		}
	}
}

void print_names (alunos *arr, int size) //imprime os nomes dos alunos
{
	for (int i = 0; i < size; i++)
	{
		printf("%s \n", arr[i].nome_aluno);
	}
}

void print_nome_media (alunos *arr, int size) //imprime a media e o nome
{
	for (int i = 0; i < size; i++)
	{
		printf("%s ", arr[i].nome_aluno);
		printf("%.2f \n", arr[i].media);
	}
}

void order (alunos *arr, int size) //Ordena o vetor com base no numero da matricula
{
	alunos temp;
	for (int i = 0; i < 3000; i++)
	{
		for (int j = 0; j < size - 1; j++) //size - 1 porque se estiver na ultima linha n tem como inverter com a proxima
		{
			if (arr[j].num_aluno > arr[j + 1].num_aluno) // se o valor da matricula da posicao j e maior que o da proxima posicao, inverte as posicoes
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void search (alunos *arr, int size, int *num_busca) //Funcao para busca usando o numero de matricula
{
	int status = 0;
	printf("Digite a matricula do aluno: ");
	scanf("%d", &*num_busca);
	for (int i = 0; i < size; i++)
	{
		if (arr[i].num_aluno == *num_busca)
		{
			printf("%d ", arr[i].num_aluno);
			printf("%s ", arr[i].nome_aluno);
			printf("%.2f ", arr[i].notas[0]);
			printf("%.2f ", arr[i].notas[1]);
			printf("%.2f ", arr[i].notas[2]);
			printf("media: %.2f \n", arr[i].media);
			status = 1;
		}
	}
	if (status == 0) //se nao encontrar alunos, imprime mensagem de erro
	{
		printf("Aluno nao encontrado \n");
		exit(1);
	}
}

int search_maior_nota (alunos *arr, int size) //acha a maior nota e retorna o numero do aluno
{
	float temp;
	int position;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i].notas[j] > temp)
			{
				temp = arr[i].notas[j];
				position = arr[i].num_aluno;
			}
		}
	}
	return position;
}

int search_menor_nota (alunos *arr, int size) //acha a menor nota e retorna o numero do aluno
{
	float temp = 10;
	int position;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i].notas[j] < temp)
			{
				temp = arr[i].notas[j];
				position = arr[i].num_aluno;
			}
		}
	}
	return position;
}

void change_notes (alunos *arr, int size, int num_busca) //muda a valor das notas, usa o resultado da funcao search para saber de qual aluno mudar
{
	int temp, temp_note;
	printf
	(
		"Qual nota voce quer mudar? \n"
		"1. Nota 1\n"
		"2. Nota 2\n"
		"3. Nota 3\n"
		"4. Todas as notas\n"
	);
	scanf("%d", &temp);
	switch (temp)
	{
	case 1:
		printf("Digite o valor da primeira nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[0]);
			}
		}
		break;
	case 2:
		printf("Digite o valor da segunda nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[1]);
			}
		}
		break;
	case 3:
		printf("Digite o valor da terceira nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[2]);
			}
		}
		break;
	case 4:
		printf("Digite o valor da primeira nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[0]);
			}
		}
		printf("Digite o valor da segunda nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[1]);
			}
		}
		printf("Digite o valor da terceira nota: ");
		for (int i = 0; i < size; i++)
		{
			if (arr[i].num_aluno == num_busca)
			{
				scanf("%f", &arr[i].notas[2]);
			}
		}
		break;
	}
}

void aprovados (alunos *arr, int size, int *aprovados, int *reprovados) //Compara a media dos alunos com 6 para determinar se o aluno foi aprovado ou reprovado
{
	*aprovados = 0;
	*reprovados = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].media >= 6.0)
		{
			++*aprovados;
		}
		else
		{
			++*reprovados;
		}
	}
}

/*void fill_arr (alunos *arr) //Preenche o vetor
   {
   for (int i = 0; i < sizeof(arr); i++)
   {
    arr[i].num_aluno = 100 - (10 + 5 - i);
    strcpy(arr[i].nome_aluno, "Gabriel");
    arr[i].notas[0] = i + 2;
    arr[i].notas[1] = i + 4;
    arr[i].notas[2] = i + 6;
    arr[i].media = (arr[i].notas[0] + arr[i].notas[1] + arr[i].notas[2]);
    if (i % 2 == 0)
    {
      arr[i].aprovado = 1;
    }
    else
    {
      arr[i].aprovado = 0;
    }
   }
 */
