//Yasmin Alves
//17.12.2020

#include <stdio.h>
#include <stdlib.h>

/*Ler um nome e imprimir os caracteres que estão emposição impar*/

int main() {   

    int i=0, tam;
    char nome[15];

    printf("Nome: ");
    scanf("%s", &nome);

    tam = strlen(nome);

    for (i=0; i<tam; i++) {

        if (i%2!=0) {

            printf(" %c", nome[i]);

        } else {}
    }
    return 0;
}
