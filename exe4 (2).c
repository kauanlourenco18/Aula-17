#include <stdio.h>

int aba(char *texto) {
  printf("     <title>%s</title>\n", texto);
  return 0; 
}

int main(void) {

  aba("Olá Mundo!");

  return 0;
}
