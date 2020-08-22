//Programa para retornar as horas e minutos e segundos através dos segundos totais
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg;
    int min;
    int hora;
    printf("Tempo em segundo:");
    scanf("%d", &seg);

    min = seg/60;
    hora = min/60;

    seg = seg - min*60;
    min = min - hora*60;

    printf("%2.d:%2.d:%2.d", hora, min, seg);

    min = seg/60;
    hora = seg/360;

    return 0;
}
