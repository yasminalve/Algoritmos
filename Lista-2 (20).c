//Programa para dizer se um produto pode ser comercializado
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {

	int dia, mes, ano, validadeDias, hoje;


	printf("Digite a data de validade:");
 
	scanf("%d/%d/%d", &dia, &mes,&ano);
 
 
	validadeDias = dia + mes*(365.25/12) + ano*(365.25);

 
 	hoje = 737042.625;
 
 

	if (validadeDias > hoje && (validadeDias - hoje) != 1) {
 	
		printf("\nProduto pode ser comercializado");
 
	} else {
 
		if(validadeDias == hoje) {
 
			printf("\nDeve ser feita uma promoção");
 
		} else {
 	
			if(validadeDias < hoje) {
 
				printf("\nProduto deve ser descartado");
 	
			} else {
 	
				if((validadeDias - hoje) == 1) {
 	
					printf("\nProduto altamente perecível");
 	
				}
 
            }
        }
	}
 
  	return 0;
}
      