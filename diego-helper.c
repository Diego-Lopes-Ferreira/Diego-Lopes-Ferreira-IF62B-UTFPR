#include <stdio.h>

int main() {
  int nDeHabitantes = 10;  // troca no numero aqui
  int nDeFilhos[nDeHabitantes], maiorNDeFilhos = 0;
  int codigos[nDeHabitantes], maisFilhosCodigo = 0;
  int i = 0;

  while (i < nDeHabitantes) {
    // Coleta os dados
    printf(">>> ");
    scanf("%d", &nDeFilhos[i]);

    // Coloca o identificador do habitante
    // 0, 1, 2, 3, ...
    codigos[i] = i;

    // Compara pra ver se essa pessoa e a q tem mais
    if (nDeFilhos[i] > maiorNDeFilhos) {
      maiorNDeFilhos = nDeFilhos[i];
      maisFilhosCodigo = i;
    }

    // Incrementa 1 no contador "i"
    i++;
  }

  // Resultado final na tela
  printf("O cidadao %d tem %d filhos \n", maisFilhosCodigo, maiorNDeFilhos);

  return 0;
}