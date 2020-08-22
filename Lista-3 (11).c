//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*11. Num frigorífico existem 90 bois. Faça um programa que escreva o peso do boi mais gordo e do boi mais
magro (supondo que não haja empates).*/

int main(void) {
  int i;
  float gordo, magro = 10^6, peso;

  for (i = 0, gordo = 0; i < 90; i++) {
    printf("Peso do boi em kg: ");
    scanf("%f", &peso);

    if (peso > gordo) {
      gordo = peso;
    } else {
     if (peso < magro) {
      magro = peso;
      }
    }
  }
  
  printf("Peso do boi mais gordo: %.3f kg", gordo);
  printf("\nPeso do boi mais magro: %.3f kg", magro);
  
  return 0;
}