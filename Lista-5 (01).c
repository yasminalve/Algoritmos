//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que preencha uma matriz 3x3 com valores reais fornecidos pelo usuário. O programa deverá exibir: 
a)A soma dos elementos da primeira linha da matriz 
b)A soma dos elementos da terceira coluna da matriz 
c)A soma dos elementos da diagonal principal da matriz*/

int i, j;
float V[3][3], soma;

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  for (i=0;i<3;i++) {
    for (j=0;j<3;j++) {
      printf("Digite o valor da %d° linha na %d° coluna: ", i+1,j+1);
      scanf("%f", &V[i][j]);
    }
  }
  printf("Soma dos elementos da primeira linha da matriz: %.2f", V[0][0] + V[0][1] + V[0][2] );
  printf("\nSoma dos elementos da terceira coluna da matriz: %.2f", V[0][2]+V[1][2]+V[2][2]);
  printf("\nSoma dos elementos da diagonal principal da matriz: %.2f", V[0][0] + V[1][1] + V[2][2]);
  
  return 0;
}