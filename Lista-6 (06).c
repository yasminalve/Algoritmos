//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Ler um nome e imprimir esse nome tantas vezes quantos forem seus caracteres*/

int main()
{
    char frase[40]; int i, tam;

    printf("Informe a frase: ");
    gets(frase);
    tam = strlen(frase);
    for (i = 0;i < tam; i ++) {

        printf("\n%s", frase);

    }

    return 0;
}
