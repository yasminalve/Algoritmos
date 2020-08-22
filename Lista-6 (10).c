//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escrever  um  programa  que  leia  um  nome  e  informe  a  quantidade  de  vogais  existentes nele. 
O programa deverá imprimir o numero total de caracteres do nome e a porcentagem das vogais em relação ao total de caracteres. */

int main() { 
char frase [40]; int v=0, n, tam, tam2; float perc;

    printf("Digite a frase: ");
    fgets(frase, 40, stdin);

    tam = strlen(frase);
    tam2= tam;

    for (n = 0;n < tam; n ++) {
        if ((frase[n]=='A')||(frase[n]=='a')||(frase[n]=='E')||(frase[n]=='e')||(frase[n]=='I')||(frase[n]=='i')||(frase[n]=='O')||(frase[n]=='o')||(frase[n]=='U')||(frase[n]=='u')) {
            v++;
        } else if(isspace(frase[n])) {
            tam2 = tam2 - 1;
        }

    }

    perc = (float)100*v/tam2;
    printf("\nTotal de caracteres: %d\nPorcentagem das vogais: %.f%%", tam2, perc);

    return 0;
}
