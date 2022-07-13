#include <stdio.h>
  struct Bandas {
  char nome[100];
  char tipo_musica[100];
  int num_integrantes;
  int posicao_ranking;
};

int main() {
  struct Bandas B1;
  printf("O nome da banda: ");
  gets (B1.nome);
  printf("O estilo musical: ");
  gets (B1.tipo_musica);
  printf("Numero de integrantes: ");
  scanf ("%d", &B1.num_integrantes);
  printf("Posicao no seu top 5: ");
  scanf ("%d", &B1.posicao_ranking);

  printf("O nome da banda: %s\n" , B1.nome);
  printf("O estilo musical: %s\n" , B1.tipo_musica);
  printf("Numero de integrantes: %d\n", B1.num_integrantes);
  printf("Posicao no seu top 5: %d\n", B1.posicao_ranking);
  return 0;
}
