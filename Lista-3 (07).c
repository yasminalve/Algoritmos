//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Fa�a um programa para solicitar um n�mero entre 1 e 4. Se a pessoa digitar um n�mero diferente,
mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o
n�mero digitado.
 */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, qtdN, Num, soma;

  printf("Digite o n�mero:");
  scanf("%d", &Num);
    
  if (1 <= Num && Num <= 4) {
    printf("Numero igual a %d", Num);
  } else {
    for (i=0; 1 > Num || Num > 4; i++) {
      printf("\nEntrada inv�lida \n");
      printf("Digite o n�mero:");
      scanf("%d", &Num);
        if (1 <= Num && Num <= 4) {
          printf("\nNumero igual a %d", Num);
        }

    }
    
  }
  return 0;
}