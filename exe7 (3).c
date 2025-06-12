#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *recebido = getenv("QUERY_STRING");

    printf("Content-Type: text/html\n\n");
    printf("%s\n", recebido);
   
  return 0;
}
