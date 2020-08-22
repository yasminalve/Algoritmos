//Programa para calcular a conta de um hóspede
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {

char tipo;
int ape, diarias;
float consumo, valorCinterno, valorTdiarias, subtotal, valorTaxa, totalGeral, valorDiaria;

  printf("Numero do apartamento do hospede:");
  scanf("%d", &ape);
  printf("Tipo de apartamento utilizado:");
  scanf(" %c", &tipo);
  printf("Numero de diarias:");
  scanf("%d", &diarias);
  printf("Valor do consumo interno do hospede:");
  scanf("%f", &valorCinterno);

  switch (tipo) {
    case 'A': valorDiaria = 150;
    case 'B': valorDiaria = 100;
    case 'C': valorDiaria = 75;
    case 'D': valorDiaria = 50;
  }
  
  valorTdiarias = diarias*valorDiaria;
  subtotal = valorTdiarias + valorCinterno;
  valorTaxa = subtotal*0.1;
  totalGeral = subtotal+valorTaxa;

  printf("Numero do apartamento do hospede: %d", ape);
  printf("\nTipo de apartamento utilizado: %c", tipo);
  printf("\nNumero de diarias: %d", diarias);
  printf("\nO valor unitario da diaria: R$%.2f;", valorDiaria);
  printf("\nO valor total das diarias: R$%.2f", valorTdiarias);
  printf("\nValor do consumo interno: R$%.2f", valorCinterno);
  printf("\nSubtotal: R$%.2f", subtotal);
  printf("\nValor da taxa de serviço: R$%.2f", valorTaxa);
  printf("\nTotal Geral: R$%.2f", totalGeral);

  return 0;
}