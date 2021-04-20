/*
  Diego Lopes Ferreira
  RA: 2267241

  Escreva um programa que tenha uma função chamada "troca", que recebe as
  referências de duas variáveis inteiras e inverte os valores das duas variáveis
  (a primeira recebe o valor da segunda e a segunda recebe o valor da primeira).
  Não use variáveis globais.
*/

#include <stdio.h>

void troca(int *x, int *y) {
  int store;
  store = *y;
  *y = *x;
  *x = store;
  return;
}

int main() {
  int a = 0, b = 0;

  printf("Digite um valor    \n>>> ");
  scanf("%d", &a);
  printf("Digite outro valor \n>>> ");
  scanf("%d", &b);

  printf("antes:   %d | %d \n", a, b);

  troca(&a, &b);

  printf("depois:  %d | %d \n", a, b);
  return 0;
}
