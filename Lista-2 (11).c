//Programa para calcular a aprovação
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {

  float p1, p2, p3, med;
  printf("Notas da primeira etapa:");
  scanf("%f%f", &p1, &p2);
  printf("Notas da primeira etapa:");
  scanf("%f", &p3);

  med = (p1+p2)/2;
  if (med >= 7) {
    if (p3 >= 8) {
      printf("Ele foi aprovado");
    }
  }
  else {
    printf("Ele nao foi aprovado");
  }
  return 0;
}