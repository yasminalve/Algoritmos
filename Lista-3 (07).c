//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Faça um programa para solicitar um número entre 1 e 4. Se a pessoa digitar um número diferente,
mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o
número digitado.
 */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, qtdN, Num, soma;

  printf("Digite o número:");
  scanf("%d", &Num);
    
  if (1 <= Num && Num <= 4) {
    printf("Numero igual a %d", Num);
  } else {
    for (i=0; 1 > Num || Num > 4; i++) {
      printf("\nEntrada inválida \n");
      printf("Digite o número:");
      scanf("%d", &Num);
        if (1 <= Num && Num <= 4) {
          printf("\nNumero igual a %d", Num);
        }

    }
    
  }
  return 0;
}