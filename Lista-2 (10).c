//Programa para calcular o percentual de participa��o da Para�ba na C�mara dos Deputados
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {

  int depF, depP;
  float x;

  printf("Deputado Federal:");
  scanf("%d", &depF);
  printf("Deputado Para�ba:");
  scanf("%d", &depP);

  x = 100.0*depP/depF;

  printf("participa��o da Para�ba na C�mara dos Deputados = %.1f %%", x);
  return 0;
}