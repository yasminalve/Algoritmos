//Programa para calcular o percentual de participação da Paraíba na Câmara dos Deputados
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {

  int depF, depP;
  float x;

  printf("Deputado Federal:");
  scanf("%d", &depF);
  printf("Deputado Paraíba:");
  scanf("%d", &depP);

  x = 100.0*depP/depF;

  printf("participação da Paraíba na Câmara dos Deputados = %.1f %%", x);
  return 0;
}