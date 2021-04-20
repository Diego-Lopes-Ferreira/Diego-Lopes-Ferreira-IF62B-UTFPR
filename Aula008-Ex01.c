/* 
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>
#include <math.h>

void calcula_cubo(int *a) {
  // Podia fazer essa coisa feia...
  // *a = (*a) * (*a) * (*a);
  // mas vou usar o math.h
  *a = pow(*a, 3);
  return;
}

int main() {
  int n=0;
  printf("Digite um valor \n>>> ");
  scanf("%d", &n);

  calcula_cubo(&n);

  printf("Valor final: %d \n", n);
  return 0;
}
