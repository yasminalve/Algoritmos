//Programa para retornar o dobro de um valor
//Yasmin Alves
//20.09.2019
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
    {
    int numero;
        printf("Digite o n�mero:", setlocale(LC_ALL,""));
        scanf("%d",&numero);
    int dobro;
        dobro = numero*2;
        printf("O dobro desse n�mero � = %d", dobro);

    return 0;
    }
