//Programa para calcular o sal�rio l�quido atrav�s do sal�rio bruto e das horas trabalhadas
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float sliq;
    float sb;
    float hrs;
    printf("Digite o sal�rio bruto:", setlocale(LC_ALL,""));
    scanf("%f", &sb);
    printf("Digite o valor das horas trabalhadas:", setlocale(LC_ALL,""));
    scanf("%f", &hrs);

    sliq = sb + hrs - (sb*8/100);
    printf("Sal�rio l�quido = R$ %f", sliq, setlocale(LC_ALL,""));
    return 0;
}
