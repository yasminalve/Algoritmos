//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>

/*Escreva  um  programa  para  ler  uma  frase  do  usuário.  Calcular  e  exibir  a  quantidade  de palavras que formamessa frase*/

int main() { 
char frase[100]; int c, i=0, tam;

    printf("digite a frase: ");
    fgets(frase, 100, stdin);

    tam = strlen(frase);

    for (c = 0;c < tam; c++) {
        if (frase[c] == 32) {
            i++;
    	}
    }

    printf("Tem %d palavras", i+1);

    return 0;
}
