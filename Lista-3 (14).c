//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*14. Um número é, por definição, primo se ele não tem divisores, exceto 1 e ele próprio. Escreva um
programa que leia um número e determine se ele é ou não primo.*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int N, i, rest, cont=0;
    printf("Digite o número: ");
    scanf("%d", &N);
  for(i = (N-1); i > 1; i--) {
      rest = N%i;
      if (rest==0) { 
        cont ++;
        printf("Número não é primo!");
        break;
      }
  }
    if (cont==0) {
      printf("Número é primo!");
    }
  
 
  return 0;
}