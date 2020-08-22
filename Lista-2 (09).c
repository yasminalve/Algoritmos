//Programa para mostrar o nome do mês do valor inserido
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) {
  int mes;
  printf("Mês em número:");
  scanf("%d", &mes);

  switch (mes) {
    case 1: printf("Janeiro"); break;
    case 2: printf("Fevereiro"); break;
    case 3: printf("Marco"); break;
    case 4: printf("Abril"); break;
    case 5: printf("Maio"); break;
    case 6: printf("Junho"); break;
    case 7: printf("Julho"); break;
    case 8: printf("Agosto"); break;
    case 9: printf("Setembro"); break;
    case 10: printf("Outubro"); break;
    case 11: printf("Novembro"); break;
    case 12: printf("Dezembro"); break;
    default: printf("Mês não existe!");

  }
  return 0;
}