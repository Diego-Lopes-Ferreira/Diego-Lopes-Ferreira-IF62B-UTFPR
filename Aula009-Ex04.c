/*
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  FILE *file;

  file = fopen("./hallo.txt", "w");

  if (file == NULL) {
    printf("Houve um erro na abertura do arquivo \n");
  }

  fprintf(file, "aprendendo a escrever em arquivos");
  fclose(file);

  return 0;
}
