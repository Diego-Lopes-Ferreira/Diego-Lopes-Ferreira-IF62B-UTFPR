/*
  Diego Lopes Ferreira
  RA: 2267241
*/
#include <stdio.h>

int sumOdd();
int sumEven();
int calcDiffEvenOdd();

int main() {
  int n = 9;
  printf("Digite o Limite \n>>> ");
  scanf("%d", &n);

  printf("Soma dos pares ate %02d         = %03d \n", n, sumEven(n));
  printf("Soma dos impares ate %02d       = %03d \n", n, sumOdd(n));
  printf("Diferenca entre as somas      = %03d \n", calcDiffEvenOdd(n));
  return 0;
}

int sumOdd(int lim) {
  int i = 1;
  int sum = 0;
  while (i <= lim) {
    sum += i;
    i += 2;
  }
  return sum;
}

int sumEven(int lim) {
  int i = 2;
  int sum = 0;
  while (i <= lim) {
    sum += i;
    i += 2;
  }
  return sum;
}

int calcDiffEvenOdd(int lim) {
  int diff;
  diff = sumEven(lim) - sumOdd(lim);
  if (diff < 0) {
    return diff * -1;
  }
  return diff;
}
