//Programa para calcular o comprimento de um círculo
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float raio;
    printf("Digite o raio: \n");
    scanf("%f", &raio);
    float comprimento;
    comprimento = 2*M_PI*raio;
    printf("O comprimento do Círculo é = a %f", comprimento, setlocale(LC_ALL,""));

    return 0;
}
