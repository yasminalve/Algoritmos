//Programa para retornar o valor de venda de um produto
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float Cfab, Cfin;
    printf("Digite o valor do custo de fabricação: R$ ", setlocale(LC_ALL,""));
    scanf("%f", &Cfab);
    Cfin = Cfab + (Cfab*28/100) + (Cfab*45/100);
    printf("O valor de custo ao consumidor é: R$ %f.", Cfin, setlocale(LC_ALL,""));
    return 0;
}
