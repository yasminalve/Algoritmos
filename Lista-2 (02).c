//Programa para dizer a rela��o entre um n�mero e zero
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {

  float num1;
  printf("Digite um n�mero:\n");
  scanf("%f", &num1);
  
  if (num1 > 0) {
    printf ("N�mero maior que zero");
    }
    else {
      if (0 > num1) {
        printf("N�mero menor que zero");
        }
        else {
          if(num1==0) {
            printf("O n�mero � igual a 0");
          }
        }
      }

  return 0;
}