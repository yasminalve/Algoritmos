//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*14. Um n�mero �, por defini��o, primo se ele n�o tem divisores, exceto 1 e ele pr�prio. Escreva um
programa que leia um n�mero e determine se ele � ou n�o primo.*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int N, i, rest, cont=0;
    printf("Digite o n�mero: ");
    scanf("%d", &N);
  for(i = (N-1); i > 1; i--) {
      rest = N%i;
      if (rest==0) { 
        cont ++;
        printf("N�mero n�o � primo!");
        break;
      }
  }
    if (cont==0) {
      printf("N�mero � primo!");
    }
  
 
  return 0;
}