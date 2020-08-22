//Programa para dizer se os números são múltiplos
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
  int A, B;
  printf("Digite A:");
  scanf("%d",&A);
  printf("Digite B:");
  scanf("%d",&B);

  if (B%A == 0) {
    printf("Os números sao multiplos");
  }
  else {
    printf("Os números nao sao multiplos");
  }
  return 0;
}