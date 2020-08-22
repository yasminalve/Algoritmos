//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que: a)leia e armazene os seguintes dados de um conjunto de 100 alunos: 
matricula, 3 notas; 
b)calcule e armazene a m�dia de cada aluno; 
c)mostre um relat�rio em que cada linha dever� conter a matr�cula, a m�dia 
e a situa��o de cada aluno (Aprovado se m�dia igual ou superior a 70; Reprovado, se a m�dia for inferior a 70).  
d)mostre a quantidade de alunos aprovados. */

float notaAluno[100][4], media[100], Soma=0;
int i, j, alunos=100;

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<alunos; i++) {
    printf("Digite a matr�cula: ");
    scanf("%f", &notaAluno[i][0]);
    Soma=0;
    for (j=1;j<4;j++) {
      printf("Digite as notas: ");
      scanf("%f", &notaAluno[i][j]);
      Soma = Soma + notaAluno[i][j];
    }
    media[i] = Soma/3;
  }
  printf("Matr�cula\t1� Nota\t2� Nota\t3�Nota\tM�dia\tSitua��o\n");
  for(i=0; i<alunos; i++) {
    printf("%.f\t", notaAluno[i][0]);
    for(j=1;j<4;j++) {
      printf("\t%.f\t", notaAluno[i][j]);
    }
    printf("\t%.2f\t", media[i]);
    if (media[i]>=70) {
      printf("Aprovado!\n");
    } else {
      printf("Reprovado!\n");
    }
  }
  return 0;
}