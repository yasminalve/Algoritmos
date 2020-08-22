//Programa para calcular a possibilidade do usuário viajar considerando o dinheiro atual e os gastos com passagem, hospedagem e alimentação
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
    printf("É possível realizar essa viagem!");
  }
  else {
    printf("Não é possível realizar essa viagem!");
  }

  return 0;
}