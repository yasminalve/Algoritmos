//Programa para retornar o grau de obesidade de uma pessoa
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) { 
	float peso, altura, IMC;

 printf("Peso em kg:");
 scanf("%f",&peso);
 printf("Altura em metros:");
 scanf("%f", &altura);
 
 IMC = peso /(altura*altura);
 if (IMC <26) { //exemplo peso = 70, altura = 1.71
 	printf("normal");
 } else {
 	if(IMC >=26 && IMC <30) { //exemplo peso = 80, altura = 1.71
 		printf("obeso");
 	} else { //exemplo peso = 90, altura = 1.71
 		printf ("obeso morbido");
 	}
 }
  	return 0;
}
