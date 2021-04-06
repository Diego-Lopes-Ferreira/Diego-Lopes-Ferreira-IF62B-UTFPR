/*
  Diego Lopes Ferreira
  RA: 2267241
*/
#include <stdbool.h>
#include <stdio.h>

bool isOdd(int num) {
  if (num % 2 == 1) {
    return true;
  }
  return false;
}

int main() {
  int num;
  printf("Digite um numero inteiro \n>>> ");
  scanf("%d", &num);

  if (isOdd(num)) {
    printf("O numero %d e impar \n", num);
  } else {
    printf("O numero %d e par \n", num);
  }
  return 0;
}
