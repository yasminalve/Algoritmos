//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  float peso, altura, IMC;

  printf("Digite o peso em kg: ");
  scanf("%f", &peso);
  printf("Digite a altura em metros: ");
  scanf("%f", &altura);

  IMC = peso/(altura*altura);

  if (IMC<16) {
    printf("Estado nutricional: Desnutrição");
  } else if (IMC>=16 && IMC<18.5){ 
    printf("Estado nutricional: Magreza");
  } else if (IMC>=18.5&&IMC<=25) {
    printf("Estado nutricional: Normalidade");
  } else if (IMC>25 &&IMC<30) {
    printf("Estado nutricional: Sobrepeso");
  } else if (IMC>=30 &&  IMC < 40) {
    printf("Estado nutricional: Obesidade");
  } else if (IMC>40) {
    printf("Estado nutricional: Obesidade Mórbida");
  } else {
    printf("ERROR");
  }

  return 0;
}