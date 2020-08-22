//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que armazene as notas de 40 alunos de uma turma. Calcule a média da turma e mostre a quantidade de alunos com notas acima da média, igual a média e abaixo da média. */

int i=0,j=0,k=0,soma=0, abaixo=0, maior=0, igual=0, nota[40], tamanho=40, notaM[40];
float media;

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  do {
    printf("nota %d: ", i+1);
    scanf("%d", &nota[i]);
    soma = soma + nota[i];
    i++;
  } while (i<tamanho);

   media = (float)soma/tamanho;

  while(j<tamanho) {
    notaM[j] = nota[k];
    if (notaM[j] < media) {
      abaixo = abaixo + 1;
    } else if (notaM[j] > media) {
      maior = maior +1; 
    } else if (notaM[j] == media) {
      igual = igual + 1;
    }

    j++; k++;
  }

  printf("media = %f\nQuantidade de alunos com notas acima da média: %d\nQuantidade de alunos com notas igual a média: %d\nQuantidade de alunos com notas abaixo da média: %d", media, maior,igual, abaixo);
  return 0;
}