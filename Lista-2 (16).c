//Programa para dizer se um funciionário terá aumento
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
	float salario, reajustado, aumento;

 	printf("Salario atual do funcionario:");
	 scanf("%f", &salario);
	 
	 if (salario>0 && salario <=1000) {
 		aumento = 20;
     reajustado = salario*(1 + aumento/100);
 		printf("Aumento e igual a %.f%% e o salario reajustado e igual a R$%.2f", aumento, reajustado);
 	}
 	else {
 		if(salario>1000 && salario<=5000) {
       aumento = 10;
       reajustado = salario*(1 + aumento/100);
 			printf("Aumento e igual a %.f%% e o salario reajustado e igual a R$%.2f", aumento, reajustado);
 		} 
 		else {
 			printf("Funcionario nao tera aumento");
 		}
 	}
  	return 0;
}
    