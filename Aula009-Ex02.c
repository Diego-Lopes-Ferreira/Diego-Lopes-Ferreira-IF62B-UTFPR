/*
  Diego Lopes Ferreira
  RA: 2267241

  Faça um programa que contenha uma estrutura para armazenar dados de um veículo
  Deve armazenar:
  - O número da placa do carro (string)
  - O ano de fabricação (int)
  - A quilometragem (int)
  - Valor estimado em reais (float)

  Cadastre dois carros:
    faça com que o usuário digite os valores
  Imprima esses valores na tela
    o printf deve estar dentro da função main()
*/

#include <stdio.h>

struct vehicle {
  // Segundo o padrao Mercosul: "AAAAAAA"
  char id[8];
  int year;
  int km;
  float value;
};

// void showCar(struct vehicle car) {
//   printf("Veiculo placa: %s | Ano: %d \n", car.id, car.year);
//   printf("%d km rodados | Valor R$ %.2f \n", car.km, car.value);
// }

void createCar(struct vehicle *car) {
  printf("Cadastro de Carro 1 \n");
  printf("Digite a placa \n>>> ");
  fflush(stdin);
  gets(car->id);

  printf("Digite o ano de fabricacao \n>>> ");
  scanf("%d", &car->year);

  printf("Digite a kilometragem \n>>> ");
  scanf("%d", &car->km);

  printf("Digite o valor aproximado \n>>> ");
  scanf("%f", &car->value);
}

int main() {
  struct vehicle car1, car2, *pCar1, *pCar2;
  pCar1 = &car1;
  pCar2 = &car2;

  createCar(pCar1);
  createCar(pCar2);

  printf("Veiculo placa: %s | Ano: %d \n", car1.id, car1.year);
  printf("%d km rodados | Valor R$ %.2f \n", car1.km, car1.value);

  printf("Veiculo placa: %s | Ano: %d \n", car2.id, car2.year);
  printf("%d km rodados | Valor R$ %.2f \n", car2.km, car2.value);

  return 0;
}
