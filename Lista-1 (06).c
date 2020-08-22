//Programa para retornar o resto de uma divisão
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int A;
    int B;
    int C;
        printf("Digite o dividendo:\n");
        scanf("%d", &A);
        printf("Digite o divisor:\n");
        scanf("%d", &B);
    C=A/B ;
        printf("O resultado da divisão de %d por %d é igual a %d", A, B, C, setlocale(LC_ALL,""));
        return 0;
}
