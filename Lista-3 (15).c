//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*15. Faça um programa que leia dois valores inteiros (X e Y) e mostre todos os números primos entre X e Y.*/

int main(void) {
  int X, Y, resto, i, num, cont=0, primo;
  printf("Digite X: ");
  scanf("%d", &X);
  printf("Digite Y: ");
  scanf("%d", &Y);

  for (num = X;num >=X && num <= Y; num++) {
    for (i = 2;i < num; i++) {

      primo = num%i;
      if (primo == 0) {
        cont++;
        break;
        
      } else {
        cont=0;
      }
      
    
    }
    if (cont==0) {
        printf("%d ", num);
      }
    
  } 

  
  return 0;
}