//Programa para calcular a taxa a ser paga com base no KW consumido
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
  float valor, kW;

 printf("Quantidade em KW consumido pelo cliente:");
 scanf("%f", &kW);
 
 valor = kW*5;
 
 if (valor>=40) {
 	printf("Valor a ser pago e igual a %.2f", valor);
 } else {
 	printf("Valor a ser pago e igual a 40.00");
 }
  	return 0;
}
