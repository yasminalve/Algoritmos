//Programa para calcular o salário
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
	float vendas, salario;

 printf("Numero total de vendas:");
 scanf("%f", &vendas);
 
 salario = (927.00 + vendas*5/100);
 
 printf("Salario total e igual a %f", salario);
  	return 0;
}
