//Programa para converter dolar em real
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#define COTACAO 3.18
#include <locale.h>

int main()
{
    float dolar;
    float real;
    printf("Valor em dolar: ");
    scanf("%f", &dolar);
    real = dolar*COTACAO;
    printf("Valor em reais é igual a R$ %f.", real, setlocale(LC_ALL,""));
    return 0;
}
