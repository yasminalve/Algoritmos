//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que dever� ler e armazenar em um vetor A os seis n�meros do �ltimo sorteio da  Mega-Sena.  Em  seguida,  o  programa  dever�  ler  e  armazenar  em  um  vetor  B  os  10  n�meros correspondente  a  uma  aposta.  Por  fim,  o  programa  dever�  exibir  quantos  n�meros  o  apostador acertou.*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[6], B[10], i=0, acerto=0, j=0, k=0;
  
  do {
    printf("Digite o %d� n�mero da mega-sena:", i+1);
    scanf("%d", &A[i]);
    i++;
  } while (i<6);
  do {
    printf("Digite o %d� n�mero apostado da mega-sena:", j+1);
    scanf("%d", &B[j]);
  for (k=0; k<6; k++) {
    if (B[j]==A[k]) {
      acerto = acerto + 1;
    }
  }
    j++;
  } while (j<10);
  printf("Acertos: %d", acerto);
  
  return 0;
}