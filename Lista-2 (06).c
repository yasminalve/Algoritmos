//Programa para calcular a possibilidade do usu�rio viajar considerando o dinheiro atual e os gastos com passagem, hospedagem e alimenta��o
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
  float passagem, hospedagem, alimentacao;

  printf("Gastos com passagem:");
  scanf("%f", &passagem);
  printf("Gastos com hospedagem:");
  scanf("%f", &hospedagem);
  printf("Gastos com alimentacao:");
  scanf("%f", &alimentacao);

  if ((passagem+hospedagem+alimentacao)<=8000) {
    printf("� poss�vel realizar essa viagem!");
  }
  else {
    printf("N�o � poss�vel realizar essa viagem!");
  }

  return 0;
}