//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que leia um número N que representa a quantidade de números a serem lidos.
Em seguida, leia os N números. Após ler todos os números, informe o maior número lido. */

int main(void) {
  setlocale (LC_ALL, "Portuguese");
	int N, i=0, j, maior=0, num;
	
	printf("Digite a quantidade de números: ");
	scanf("%d", &N);
		
	do {
    printf("Digite o número: ");
    scanf("%d", &num);
    if (num > maior) {
      maior = num;
    } else if (num==maior) {
      maior = num;
    } else if (num<maior) {
      maior=maior;
    }
    i++;
  } while (i<N);
  printf("O maior número é %d", maior);
  	return 0;
}
    