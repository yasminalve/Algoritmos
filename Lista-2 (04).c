//Programa para dizer qual tipo de tri�ngulo � atrav�s dos lados
//Yasmin Alves
//10.10.2019#include <stdio.h>

int main(void) {
int lado1, lado2, lado3, condicao1, condicao2, condicao3, condicao;

  printf("Digite os tr�s lados de um tri�ngulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  condicao1 = lado1 < (lado2 + lado3);
  condicao2 = lado2 < (lado1 + lado3);
  condicao3 = lado3 < (lado1 + lado2);
  condicao = condicao1 && condicao2 && condicao3;


  if (condicao) {

    if (lado1 == lado2 && lado2 == lado3) {
      printf("\nO tri�ngulo de lados %d, %d e %d � equil�tero", lado1, lado2, lado3);}
      else {
        if ((lado2 == lado1 && lado1!=lado3) || (lado1 == lado3 && lado1!=lado2) || (lado3 == lado2 &&  lado2!=lado1) ) {
          printf("\nO tri�ngulo de lados %d, %d e %d � is�sceles", lado1, lado2, lado3);
        }
        else {
          if ((lado1!=lado2) && (lado2!=lado3) && (lado1!=lado3)) { /*para testes usar os lados 2, 3 e 4*/
            printf("\nO tri�ngulo de lados %d, %d e %d � escaleno", lado1, lado2, lado3);
          }
        }
      }
  }
  else {
    printf("Esse tri�ngulo n�o � v�lido!");
  }


  return 0;
}