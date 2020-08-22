//Programa para calcular a distância percorrida e a quantidade em litros de combustível gastos na viagem
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
	float autonomia, minutos, Vmed, distancia, litros;

 printf("Autonomia do carro em Km/litro:");
 scanf("%f",&autonomia);
 printf("Tempo em minutos gasto em uma viagem:");
 scanf("%f", &minutos);
 printf("Velocidade media durante a viagem em Km/h:");
 scanf("%f", &Vmed);
 
 distancia = Vmed*(minutos/60);
 litros = distancia/autonomia;
 
 printf("Distancia e igual a %f\n", distancia);
 printf("Quantidade de litros de combustivel gastos na viagem e igual a %f", litros);
 
  	return 0;
}
