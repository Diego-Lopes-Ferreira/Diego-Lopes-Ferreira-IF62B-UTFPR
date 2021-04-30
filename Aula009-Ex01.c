/*
  Diego Lopes Ferreira
  RA: 2267241

  Escreva um programa que contenha uma estrutura de 3 membros do tipo inteiro,
  chamados hora, min e seg. Atribua os valores e faça com que o programa imprima
  o horário 11 horas, 35 minutos e 50 segundos.
*/

#include <stdio.h>

struct TimeHMS {
  int h;
  int m;
  int s;
};

void showTime(struct TimeHMS time) {
  printf(" %d:%d:%d ", time.h, time.m, time.s);
}

int main() {
  struct TimeHMS current;
  current.h = 11;
  current.m = 35;
  current.s = 50;
  printf("Horario ");
  showTime(current);
  return 0;
}
