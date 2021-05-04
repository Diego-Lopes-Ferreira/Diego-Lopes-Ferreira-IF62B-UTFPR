/*
  Diego Lopes Ferreira
  RA: 2267241

  Criar uma estrutura chamada "carro", que deve conter os itens "placa" (que
  deve ser uma string de 8 posições), o item quilometragem (um valor do tipo
  float) e o item "anos_de_uso" (um valor do tipo float)

  Criar uma variável do tipo "carro", dentro da função principal "main()"

  Atribua o valor AAA-0021 ao item "placa" da estrutura, o valor 110000 ao item
  "quilometragem" da estrutura e o valor 4 ao item "anos_de_uso" da estrutura;

  Crie uma função do tipo float que faça a divisão da "quilometragem" pelo
  "anos_de_uso" e retorne o resultado à função principal "main()". Use passagem
  de parâmetros por valor.

  imprima na tela o valor obtido (faça o printf dentro da função "main()")
*/

#include <stdio.h>
#include <string.h>/* strcpy() */

struct carro {
  char placa[8];
  float quilometragem;
  float anos_de_uso;
};

float km_per_year(struct carro car) {
  return car.quilometragem / car.anos_de_uso;
}

int main() {
  struct carro carro1;

  strcpy(carro1.placa, "AAA-0021");
  carro1.quilometragem = 110000;
  carro1.anos_de_uso = 4;

  printf("O carro de placa %s ", carro1.placa);
  printf("rodou %.1f kilometros por ano em media", km_per_year(carro1));

  return 0;
}
