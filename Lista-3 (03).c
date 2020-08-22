//Programa que calcula média entre N números
//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, valores, media, soma;
    
  for (i=0, media=0; valores != 0; i++) {
    printf("Digite o numero N:");
    scanf("%d", &valores);
    soma = soma + valores;
  }
  printf("Media igual a %.2f", (float)soma/(--i));
  return 0;
}