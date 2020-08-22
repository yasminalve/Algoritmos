//Yasmin Alves
//17.12.2020

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Ler um nome e imprimir as 4 primeiras letras do nome.*/

int main(void) {

  int i;
  char nome[10], frase;
  printf("Digite o nome: ");
  gets(nome);

  for (i=0;i<4;i++) {
    printf("%c", nome[i]);
  }

  return 0;
}
