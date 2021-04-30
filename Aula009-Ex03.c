/*
  Diego Lopes Ferreira
  RA: 2267241

  Crie um programa que possua uma estrutura chamada estudante:
  O identificador do estudante (int)
  nome (char[50])
  idade (int)

  crie um vetor de tamanho 4 do tipo "estudante"
  inclua os dados dos 4 estudantes com valores digitados pelo usuário.
  imprima na tela os dados dos 4 estudantes
*/

#include <stdio.h>

struct estudante {
  char nome[50];
  int ra;
  int idade;
};

int main() {
  int size = 4, i;
  struct estudante estudantes[size];

  for (i = 0; i < size; i++) {
    printf("\nCadastro estudante \n");
    printf("Digite o RA do estudante \n>>> ");
    scanf("%d", &estudantes[i].ra);

    printf("Digite o nome do estudante \n>>> ");
    fflush(stdin);
    gets(estudantes[i].nome);

    printf("Digite a idade do estudante \n>>> ");
    scanf("%d", &estudantes[i].idade);
  }

  for (i = 0; i < size; i++) {
    printf("%d | ", estudantes[i].ra);
    printf("%02d | ", estudantes[i].idade);
    printf("%s \n", estudantes[i].nome);
  }

  return 0;
}
