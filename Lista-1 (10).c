//Programa para converter polegadas em cent�metros
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    float pol;
    float cm;
    printf("Valor em polegadas:");
    scanf("%f", &pol);
    cm = pol * 2.54;
    printf("Valor em cent�metros � igual a %f cm", cm, setlocale(LC_ALL,""));

    return 0;
}

