//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que preencha duas matrizes 2x3 com valores inteiros fornecidos pelo usuário. 
O programa deverá somar as duas matrizes, armazenando o resultado em uma terceira matriz, que deverá ser exibida. */

int i, j, k, l, V[2][3], V2[2][3], V3[2][3];

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<2; i++) {
    for (j=0;j<3;j++) {
      printf("Digite o valor da %d° linha na %d° coluna: ", i+1, j+1 ); scanf("%d", &V[i][j]);
    }
  }
  for (i=0; i<2; i++) {
    for (j=0;j<3;j++) {
      printf("Digite o valor da %d° linha na %d° coluna: ", i+1, j+1 ); scanf("%d", &V2[i][j]);
    }
  }
  for (i=0; i<2; i++) {
    for (j=0;j<3;j++) {
      V3[i][j] = V2[i][j] + V[i][j];
    }
  }
  printf("V final é: \n");
  for (i=0; i<2; i++) {
    for (j=0;j<3;j++) {
      printf("%d ", V3[i][j]);
    }
    printf("\n");
  }
  return 0;
}