//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*13. Faça um programa que leia 3 números inteiros (N, X, Y) e mostre todos os números múltiplos de N
entre X e Y;*/

int main(void) {
  int N, X, Y, i;
  printf("Digite N: ");
  scanf("%d", &N);
  printf("Digite X: ");
  scanf("%d", &X);
  printf("Digite Y: "); 
  scanf("%d", &Y);

  for (i=1; (i*N) <= Y; i++) {
    if ((N*i)>=X && (i*N) <= Y) {
      printf("%d ", N*i);
    }
  }
  
  return 0;
}