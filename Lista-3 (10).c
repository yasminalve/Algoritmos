//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*10. Fa�a um programa que leia uma lista de letras at� ser informada a letra Z. Ao final, o programa deve
mostrar a quantidade lida de cada vogal.*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int i, qtdA, qtdE, qtdI, qtdO, qtdU;
  char letra;
   for (i=0, qtdA=0, qtdE=0, qtdI=0, qtdO=0, qtdU=0; letra != 'Z'; i++) {
     printf("Digite a letra: ");
     scanf(" %c", &letra);
     if (letra == 'A'||letra == 'a') {
       qtdA = qtdA + 1;
     } else {
       if (letra == 'E'||letra == 'e') {
         qtdE = qtdE + 1;
       } else {
         if (letra == 'I'||letra == 'i') {
           qtdI = qtdI + 1;
         } else {
           if (letra == 'O'||letra == 'o') {
             qtdO = qtdO + 1;
           } else {
             if(letra == 'U'||letra == 'U') {
               qtdU = qtdU + 1;
             }
           }
         }
       }
     }
   }
  printf("\nQuantidade lida da vogal A � %d", qtdA);
  printf("\nQuantidade lida da vogal E � %d", qtdE);
  printf("\nQuantidade lida da vogal I � %d", qtdI);
  printf("\nQuantidade lida da vogal O � %d", qtdO);
  printf("\nQuantidade lida da vogal U � %d", qtdU);
  return 0;
}