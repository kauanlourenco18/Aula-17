#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *posicao = NULL;
  char *recebido = getenv("QUERY_STRING");

  char letra = '=';

  posicao = strchr(recebido, letra);

  char *valor_recebido = posicao+1;

  int numero = atoi(valor_recebido);

  numero = 2025 - numero;

  printf("Tempo Passado: %d", numero);

  return 0;
}