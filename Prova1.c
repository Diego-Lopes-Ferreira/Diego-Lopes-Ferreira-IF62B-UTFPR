#include <stdio.h>

void values() {
  int val, cont, max = 10000;
  for (cont = 0; cont < 15; cont++) {
    printf("%d >>> ", cont + 1);
    scanf("%d", &val);
    if (val > max) {
      max = val;
    }
  }
  printf("Valor Maximo = %d \n", max);
}

void sla() {
  float diego;
  scanf("%d", &diego);
  printf("diego = %d \n", diego);
}
int main() {
  // int mat[3][2], line, column;

  // for (line = 0; line < 3; line++) {
  //   for (column = 0; column < 2; column++) {
  //     printf("%d %d - ", line, column);
  //     scanf("%d", &mat[line][column]);
  //   }
  // }

  // printf("O valor am... = %d \n", mat[2][1]);

  sla();

  return 0;
}