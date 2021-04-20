/*
  Diego Lopes Ferreira
  RA: 2267241

  Escreva um programa que tenha uma função chamada "soma", que recebe as
  referências de duas variáveis inteiras, soma os valores das duas variáveis e
  retorna um valor inteiro para a função chamadora. Não use variáveis globais.
  (Pode ser utilizado passagem de parâmetros por valor, como visto na aula
  anterior)
*/

#include <stdio.h>

int soma(int x, int y) { return x + y; }

int main() {
  int res = 0, a = 0, b = 0;

  printf("Digite um valor    \n>>> ");
  scanf("%d", &a);
  printf("Digite outro valor \n>>> ");
  scanf("%d", &b);

  res = soma(a, b);

  printf("%d + %d = %d \n", a, b, res);
  return 0;
}
