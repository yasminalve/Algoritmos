//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>

/*Escreva  um programa  para  ler  uma  frase  do  usuário.  
O  programa  deverá  substituir  o caractere “espaço em branco” por “#”. Exiba a nova frase formada.*/

int main(){
    char frase[100]; int tam, c;

    printf("Digite a frase: ");
    fgets(frase, 100, stdin);

    tam = strlen(frase);

    for (c = 0;c < tam; c++) {

        if (frase[c]==32) {

            frase[c]='#';

        }
    }

    printf("%s", frase);

    return 0;
}
