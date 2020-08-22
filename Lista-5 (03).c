//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que preencha uma matriz 4x3 com valores reais fornecidos pelo usuário e mostre  a  sua  transposta.  
Dada  uma  matriz  A  de  ordem  m  x  n,  a  matriz  transposta  dela  será representada por At de ordem “invertida” n x m.*/

int i, j, V[4][3], v[3][4];

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  for (i=0; i<4; i++) {
    for (j=0;j<3;j++) {
      printf("Digite o valor na %d° linha e na %d° coluna: ", i+1,j+1);
      scanf("%d", &V[i][j]);
    }
  }
  for (i=0; i<3; i++) {
    for (j=0;j<4;j++) {
      v[i][j] = V[j][i];
    }
  }
  printf("Matriz digitada: \n");
  for (i=0; i<4; i++) {
    for (j=0;j<3;j++) {
      printf("%d ",V[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz transposta: \n");
  for (i=0; i<3; i++) {
    for (j=0;j<4;j++) {
      printf("%d ",v[i][j]);
    }
    printf("\n");
  }

  return 0;
}