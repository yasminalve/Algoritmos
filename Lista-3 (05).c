//Programa que retorna o maior n�mero
//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
	int num, i, j, maior;
	
	for (i=0; i<100; i++) {
		
		printf("\nDigite o valor: ");
		scanf("%d", &num);
			
			if (i==0 || j <= num) {
				maior = num;
			} else {
				maior = maior;
			}
			j = maior;
		
	} 
	
		printf ("\n\nO maior n�mero � %d",maior);
		
  	return 0;
}
    