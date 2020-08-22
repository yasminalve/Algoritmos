//Programa que lê  um  número  N,  soma  todos  os  números  inteiros  de  1  a  N,  e  mostra  o resultado obtido
//Yasmin Alves
//04.10.2019

#include <stdio.h>

int main(void) {
  int i, N, soma;
    printf("Digite o numero N:");
    scanf("%d", &N);
  for (i=1, soma=0; i<=N; i++) {
    soma = soma + i;
  }
  printf("Soma igual a %d", soma);
  return 0;
}