/*
  Diego Lopes Ferreira
  RA: 2267241
  Faca um programa que verifique se existem valores repetidos entre tres valores
  do tipo char digitados pelo usuario

  - main() deve passar os três valores por parâmetro para repete()
  - main() deve exibir a resposta para o usuário

  - repete() deve retornar "true", se houver valores repetidos
  - e "false", caso não exista valores repetidos
*/
#include <stdio.h>
#include <string.h>

// 1 = true; 0 = false
int repete(char txt1[], char txt2[], char txt3[]) {
  int lenTxt1 = strlen(txt1);
  int lenTxt2 = strlen(txt2);
  int lenTxt3 = strlen(txt3);
  int i, j, k;

  for (i = 0; i < lenTxt1; i++) {
    for (j = 0; j < lenTxt2; j++) {
      if (txt1[i] == txt2[j]) {
        return 1;
      }
    }

    for (k = 0; k < lenTxt3; k++) {
      if (txt1[i] == txt3[k]) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  char text1[256];
  char text2[256];
  char text3[256];
  printf("Digite uma palavra \n");
  printf(">>> ");
  gets(text1);
  printf(">>> ");
  gets(text2);
  printf(">>> ");
  gets(text3);

  if (repete(text1, text2, text3)) {
    printf("Existem letras repetidas nas palavras \n");
  } else {
    printf("Nao existem letras repetidas nas palavras \n");
  }

  return 0;
}
