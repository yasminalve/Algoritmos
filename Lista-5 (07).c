//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia os valores reais para preencher uma matriz 3x4, some os elementos de cada linha da matriz e mostre em qual linha a
soma apresentou o maior valor.*/

int i,j;
float matriz[3][4], soma[3], maior;

int main()
{ setlocale(LC_ALL, "Portuguese");
    for(i=0, maior=0;i<3;i++) {
        for(j=0, soma[i]=0;j<4;j++) {
            printf("Digite %d° elemento da %d° linha da matriz: ", j+1, i+1);
            scanf("%d", &matriz[i][j]);
            soma[i] = soma[i] + matriz[i][j];
        }
        if (soma[i]>maior) {
            maior=i;
        } else {
            maior=maior;
        }
    }
    printf("A %.f° linha tem a soma maior", maior+1);

    return 0;
}
