//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que leia um n�mero N que representa a quantidade de n�meros a serem lidos.
Em seguida, leia os N n�meros. Ap�s ler todos os n�meros, informe o maior n�mero lido. */

int main(void) {
  setlocale (LC_ALL, "Portuguese");
	int N, i=0, j, maior=0, num;
	
	printf("Digite a quantidade de n�meros: ");
	scanf("%d", &N);
		
	do {
    printf("Digite o n�mero: ");
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
  printf("O maior n�mero � %d", maior);
  	return 0;
}
    