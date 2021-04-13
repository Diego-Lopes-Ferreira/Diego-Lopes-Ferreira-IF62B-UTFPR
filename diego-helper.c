#include <stdio.h>
int main() {
  int ALUNOS, x, SOMA = 0, IDADE;
  printf("Qual a quantidade maxima de alunos de uma turma?\n");
  scanf("%i", &ALUNOS);

  for (x = 0; x <= ALUNOS; x = x + 1) {
    printf("Qual a idade do aluno %d?", x = x + 1);
    scanf("%i", &IDADE);
    if (IDADE % 2 == 0) {
      SOMA = SOMA + IDADE;
    }
  }
  printf("A soma dos numeros pares da: %i", SOMA);
  return 0;
}
