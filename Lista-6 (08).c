//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>

/*Ler um nome e imprimir o nome somente se a primeira letra do nome for “a” (maiúscula ou minúscula)*/

int main() { 

char nome[30];
int i;
    printf("Digite o nome: ");
    gets(nome);

    if ((nome[0]=='A')||(nome[0]=='a')) {
        printf("%s", nome);
    }

    return 0;
}
