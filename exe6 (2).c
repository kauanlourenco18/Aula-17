#include <stdio.h>

void inicio() {
  printf("<!DOCTYPE html>\n\n");
  printf("<html lang='pt-BR'>\n");
  printf(" <head>\n");
  printf("      <meta charset='UTF-8'>\n");
}

int aba(char *texto) {
  printf("     <title>%s</title>\n", texto);
  return 0; 
}

void meio() {
  printf("</head>\n");
  printf("<body>\n");
}

int titulo(char *texto) {

  printf("     <h1>%s</h1>\n", texto);
  return 0; 
}

void final() {
  printf("</body>\n");
  printf("</html>\n");
}

int main() {
  inicio();
  aba("Segunda página");
  meio();
  titulo("Usando argumentos");
  final();
  return 0;
}
