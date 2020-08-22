//Programa para retornar a distância percorrida e os litros consumidos por um carro através da autonomia do carro, o tempo em minutos e a velocidade média
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float qpL, Tmin, Vmed, Dp, L;
    printf("Autonomia do carro:");
    scanf("%f", &qpL);
    printf("Tempo em minutos:");
    scanf("%f", &Tmin);
    printf("Velocidade média:", setlocale(LC_ALL,""));
    scanf("%f", &Vmed);

    Dp = Vmed * (Tmin/60);
    L = qpL * Dp;

    printf("Distância percorrida: %f km\n", Dp, setlocale(LC_ALL,""));
    printf("Litros consumidos: %f L", L, setlocale(LC_ALL,""));

    return 0;
}
