//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que preencha uma matriz com valores fornecidos pelo usuário, determine e mostre se a mesma é um quadrado mágico. */

int matriz[3][3], i, j, soma1=0, soma2=0, soma3=0, soma4=0, soma5=0, soma6=0, soma7=0, soma8=0, condição=0;

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      printf("Digite o %d° elemento da %d° linha da matriz: ", j+1, i+1);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(i=0; i<3;i++) {//linhas 
    soma1=soma1+matriz[0][i];
    soma2=soma2+matriz[1][i];
    soma3=soma3+matriz[2][i];
    soma4=soma4+matriz[i][0];
    soma5=soma5+matriz[i][1];
    soma6=soma6+matriz[i][2];
  } 
  for(i=0, j=2; i<3;i++, j--) {
    soma7=soma7+matriz[i][j];
    soma8=soma8+matriz[j][i];
  }
  if ((soma1==soma2)&&(soma1==soma3)&&(soma1==soma4)&&(soma1==soma5)&&(soma1==soma6)&&(soma1==soma7)&&(soma1==soma8)) {
    printf("\nMatriz é um quadrado mágico!");
  } else {
    printf("\nMatriz não é um quadrado mágico!");
  }

  return 0;
}