//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

int A[10], B[10], C[20], j, i, k=0, m=0, n=0,y=0; 

/*Escreva um programa que preencha dois vetores A e B com 10 elementos, cada um, intercale os
elementos desses dois vetores formando assim um novo vetor C com 20 elementos, em que nas
posições ímpares de C serão armazenados os elementos de A e nas posições pares, os elementos de
B. Por fim, o programa deverá mostrar o vetor C.
*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
 for (i=0; i<10;i++) {
   printf("Digite o elemento na posição %d de A:", i);
   scanf("%d",&A[i]);
 }
 for (j=0; j<10;j++) {
   printf("Digite o elemento na posição %d de B:", j);
   scanf("%d",&B[j]);
 } printf("C = {");
 for (k=0, i=0, j=0;k<20;k++) {
   if ((k%2)==0) {
     C[k]=A[i];
     i++;
   } else if (k%2!=0){
     C[k]=B[j];
     j++;
   }
  printf("%d ", C[k]);
 }
 printf("}");

  return 0;
}