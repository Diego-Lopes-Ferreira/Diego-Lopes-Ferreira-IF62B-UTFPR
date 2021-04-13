/*
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>

float soma(float a, float b) {
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  return a + b;
}

float divisao(float a, float b) {
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  return a / b;
}

int main() {
  float a, b, total;

  total = soma(a, b);
  printf("Soma: %.2f \n", total);

  total = divisao(a, b);
  printf("Divisao: %.2f \n", total);

  return 0;
}
/* 
 * Professor, eu não entendi se era pra abstrair a leitura dos
 * dados tambem, por isso estou colocando uma segunda versao que
 * so le os valores uma vez

  #include <stdio.h>

  float soma(float a, float b) {
    return a + b;
  }

  float divisao(float a, float b) {
    return a / b;
  }

  int main() {
    float a, b, total;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    total = soma(a, b);
    printf("Soma: %.2f \n", total);

    total = divisao(a, b);
    printf("Divisao: %.2f \n", total);

    return 0;
  }
*/