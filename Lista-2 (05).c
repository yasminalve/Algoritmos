//Programa para simular uma calculadora
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) { 
  char operacao;
  float num1, num2, resultado;

  printf("Digite a operação:");
  scanf("%f %c %f", &num1, &operacao, &num2);

  if (operacao == '+') {
    resultado = num1 + num2;
    printf("%.1f", resultado);
  } 
  else if (operacao == '-') {
    resultado = num1 - num2;
    printf("%.1f", resultado);
  }
  else if (operacao == '*') {
    resultado = num1 * num2;
    printf("%.1f", resultado);
  }
  else if (operacao == '/') {
    resultado = num1 / num2;
    printf("%.1f", resultado);
  }
    
  return 0;
}
