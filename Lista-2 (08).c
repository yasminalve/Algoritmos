//Programa para dizer se os n�meros s�o m�ltiplos
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
    printf("Os n�meros sao multiplos");
  }
  else {
    printf("Os n�meros nao sao multiplos");
  }
  return 0;
}