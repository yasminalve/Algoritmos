//Programa para calcular o salário com base na quantidade de peças fabricadas
//Yasmin Alves
//09.10.2019#include <stdio.h>

int main(void) {
	int pecas;
	float salario;

 printf("Numero de pecas fabricadas:");
 scanf("%d", &pecas);
 salario = (pecas-30)*5 + 260;
 if (pecas <= 30) {
 	printf ("Classe A, salario igual a R$ %.2f", salario);
 }
 else {
 	printf("Classe B, salario igual a R$ %.2f", salario);
 }
  	return 0;
}
