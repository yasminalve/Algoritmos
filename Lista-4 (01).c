//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva  um  programa  que  leia  um  n�mero  fornecido  pelo  usu�rio  e  preencha  um  vetor  de  10posi��es com esse n�mero;*/

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  int vetor[9];
  int i=0, valor, j=0;
  do {
    printf("Digite o n�mero da %d� posi��o: ", i+1);
    scanf("%d", &valor);
    vetor[i] = valor;
    i++;
  } while(i<10);
  while (j<10) {
    printf("%d, ", vetor[j]);
    j++;
  }
  
  return 0;
}