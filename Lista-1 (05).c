//Programa para calcular �rea de um tri�ngulo
//Yasmin Alves
//20.09.2019
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("Digite a base e altura de um tri�ngulo, respectivamente:\n", setlocale(LC_ALL,""));
    scanf("%d%d", &base, &altura);
    area = (base*altura)/2;

    printf("A �rea da base � igual a %d", area, setlocale(LC_ALL,""));
    return 0;

}
