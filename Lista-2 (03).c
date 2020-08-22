//Programa para dizer se um número é par ou ímpar
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {

  int num, resto;
  printf("Digite um número:\n");
  scanf("%d", &num);

  resto = num%2;
  
  if (resto == 0) {
    printf ("O número %d é par", num);
  }
    else {
        printf("O número %d é ímpar", num);
    }
  return 0;
}