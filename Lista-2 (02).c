//Programa para dizer a relação entre um número e zero
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {

  float num1;
  printf("Digite um número:\n");
  scanf("%f", &num1);
  
  if (num1 > 0) {
    printf ("Número maior que zero");
    }
    else {
      if (0 > num1) {
        printf("Número menor que zero");
        }
        else {
          if(num1==0) {
            printf("O número é igual a 0");
          }
        }
      }

  return 0;
}