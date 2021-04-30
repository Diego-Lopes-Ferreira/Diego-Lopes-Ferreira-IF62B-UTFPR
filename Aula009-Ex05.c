/*
  Diego Lopes Ferreira
  RA: 2267241

  abra um arquivo no modo escrita (que sobrescreva um arquivo com o mesmo nome
  caso exista "w+"), verifique se o arquivo abriu corretamente, escreva no
  arquivo a frase "escrevendo no arquivo" e feche o arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  FILE *file;

  file = fopen("./hallo.txt", "w+");

  if (file == NULL) {
    printf("Houve um erro na abertura do arquivo \n");
  }

  fprintf(file, "escrevendo no arquivo");
  fclose(file);

  return 0;
}
