//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que leia um n�mero N que representa a quantidade de n�meros que ser�o lidos.   scanf(qtdN)
 Em seguida, leia N n�meros.   scanf(Num)
 Ap�s ler todos os N n�meros, exiba a soma deles. soma= soma + N;
 */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, qtdN;
  float Num, soma;

  printf("Digite a quantidade de n�meros que ser�o lidos:");
  scanf("%d", &qtdN);
    
  for (i=1; i <= qtdN; i++) {
    printf("Digite o numero N:");
    scanf("%f", &Num);
    soma = soma + Num;
  }
  printf("Soma igual a %.2f", soma);
  return 0;
}