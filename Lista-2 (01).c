//Programa para dizer a rela��o entre dois n�meros
//Yasmin Alves
//10.10.2019

#include <stdio.h>

int main(void) {

  float num1, num2;
  printf("Digite dois n�meros:\n");
  scanf("%f", &num1);
  scanf("%f", &num2);

  if (num1 > num2) {
    printf ("O maior n�mero � igual a %f", num1);
    }
    else {
      if (num2 > num1) {
        printf("O maior n�mero � igual a %f", num2);
        }
        else {
          if(num1==num2) {
            printf("Os n�meros s�o iguais a %f", num2);
          }
        }
      }

  return 0;
}