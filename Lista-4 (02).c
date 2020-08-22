//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva  um  programa que  crie  um  vetor  com  10  posições,  leia  um  número  inteiro  fornecido  pelo usuário e preencha o vetor com esse número e seus múltiplos. Por exemplo, caso o usuário digite o número 5, o vetor deverá ser preenchido com 5, 10, 15, 20...*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int vetor[10];
  int i=0, j=1, valor, multiplo, k=0;
  
  printf("Digite o valor: ");
  scanf("%d", &valor);
  
  do {
    multiplo = valor*j;
    vetor[i]=multiplo;
    i++;
    j++;
  } while(i<10);
  while (k<10) {
    printf("%d ", vetor[k]);
    k++;
  }

  
  return 0;
}