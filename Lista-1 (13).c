//Programa para retornar o salário final através da quantidade de carros vendidos e das vendas realizadas pelo vendedor
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int nC;
    float Sf, VTv;

    printf("Quantidade de carros vendidos:");
    scanf("%d", &nC);
    printf("Valor Total das vendas do vendedor:");
    scanf("%f", &VTv);

    Sf = 622 + (30*nC) + (VTv*5/100);

    printf("O Salário final é igual a R$ %f", Sf, setlocale(LC_ALL,""));

    return 0;
}
