/*Programa para converter o valor da temperatura em Celsius para Fahrenheit*/
//Yasmin Alves
//20.09.2019
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah;
    float cel;

    printf("Digite o valor em Fahrenheit = ",fah);
    scanf("%f", &fah);
    cel = (fah - 32)*5.0/9.0;
    printf("Escala em Celsius = %f °C", cel);
    return  0;
}
