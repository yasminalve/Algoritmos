//Yasmin Alves
//04.10.2019

#include <stdio.h> 
#include <locale.h>

/*19. Escreva um programa que calcule o fatorial de um número inteiro lido, sabendo-se que:
N ! = 1 x 2 x 3 x ... x N-1 x N
0 ! = 1*/

int main(void) {
  settlocale (LC_ALL, "Portuguese");
  int N, i;
  float fat=1, T=1;
  printf("Digite N: ");
  scanf("%d", &N);

  for (i = 1; i<=N; i++) {
    fat *= i;
    
  }
  printf("fatorial é %.f ", fat);


  return 0;
}