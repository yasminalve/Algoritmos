//Programa para retornar o tempo de duração de um jogo
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
  int horasI, horasF, horasT;

  printf("Hora inicial do jogo:");
  scanf("%d", &horasI);
  printf("Hora final do jogo:");
  scanf("%d", &horasF);

  horasT = horasF - horasI;

  if (horasT <=24 && horasT>=1) {
    printf("O jogo durou %d horas", horasT);
  }
  else {
    if (horasT < 0) {
      horasT = (horasF+24) - horasI;
      printf("O jogo durou %d horas", horasT);
    }
  }
  return 0;
}