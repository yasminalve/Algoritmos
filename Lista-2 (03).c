//Programa para dizer se um n�mero � par ou �mpar
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {

  int num, resto;
  printf("Digite um n�mero:\n");
  scanf("%d", &num);

  resto = num%2;
  
  if (resto == 0) {
    printf ("O n�mero %d � par", num);
  }
    else {
        printf("O n�mero %d � �mpar", num);
    }
  return 0;
}