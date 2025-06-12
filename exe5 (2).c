#include <stdio.h>

int titulo(char *texto) {

  printf("<h1>%s</h1>\n", texto);
  return 0; 
}

int main(void) {

  titulo("Eu sou o kauan");
   
  return 0;
}
