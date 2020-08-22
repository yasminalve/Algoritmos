//Programa para dizer qual tipo de triângulo é através dos lados
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {
int lado1, lado2, lado3, condicao1, condicao2, condicao3, condicao;

  printf("Digite os três lados de um triângulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  condicao1 = lado1 < (lado2 + lado3);
  condicao2 = lado2 < (lado1 + lado3);
  condicao3 = lado3 < (lado1 + lado2);
  condicao = condicao1 && condicao2 && condicao3;


  if (condicao) {

    if (lado1 == lado2 && lado2 == lado3) {
      printf("\nO triângulo de lados %d, %d e %d é equilátero", lado1, lado2, lado3);}
      else {
        if ((lado2 == lado1 && lado1!=lado3) || (lado1 == lado3 && lado1!=lado2) || (lado3 == lado2 &&  lado2!=lado1) ) {
          printf("\nO triângulo de lados %d, %d e %d é isósceles", lado1, lado2, lado3);
        }
        else {
          if ((lado1!=lado2) && (lado2!=lado3) && (lado1!=lado3)) { /*para testes usar os lados 2, 3 e 4*/
            printf("\nO triângulo de lados %d, %d e %d é escaleno", lado1, lado2, lado3);
          }
        }
      }
  }
  else {
    printf("Esse triângulo não é válido!");
  }


  return 0;
}