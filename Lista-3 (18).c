//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*. Faça um programa que leia um número N, calcule e mostre os N primeiros termos da seqüência de
Fibonacci (0, 1, 1, 2, 3, 5, 8, 13, ...). O valor lido para N sempre será maior ou igual a 2.*/

int main(void) {
  int N, i, j, exe, k;
  printf("Digite N maior ou igual a 2: ");
  scanf("%d", &N);
  printf("0,1");
  for (i=0, j=1, exe=0; exe<(N-2); exe++) {
    
    printf(",%d",i+j);
    k=i;
    i=j;
    j=(j+k);   
    //printf("\ni= %d j= %d\n", i,j);
  }
  return 0;
}