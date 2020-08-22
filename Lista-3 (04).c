//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Faça um programa que leia um número N que representa a quantidade de números que serão lidos.   scanf(qtdN)
 Em seguida, leia N números.   scanf(Num)
 Após ler todos os N números, exiba a soma deles. soma= soma + N;
 */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, qtdN;
  float Num, soma;

  printf("Digite a quantidade de números que serão lidos:");
  scanf("%d", &qtdN);
    
  for (i=1; i <= qtdN; i++) {
    printf("Digite o numero N:");
    scanf("%f", &Num);
    soma = soma + Num;
  }
  printf("Soma igual a %.2f", soma);
  return 0;
}