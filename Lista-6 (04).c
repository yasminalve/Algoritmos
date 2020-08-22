//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>

/*Digite um nome, calcule e mostre quantas letras tem. */

int main() {
    char nome[20];
    int tam;

    printf("Digite o nome: ");
    gets(nome);

    tam = strlen(nome);

    printf("Tamanho: %d", tam);

    return 0;
}
