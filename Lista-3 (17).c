//Programa que calcula o fatorial de um número inteiro
//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

int main(void) {

float i, N, H=0, soma;

  printf("Digite N: ");
  scanf("%f", &N);

  for (i=1; i<=N; i++) {
    soma = 1/i;
    H = H + soma;
  }
  printf("H é %.2f", H);
  return 0;
}