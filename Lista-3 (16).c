//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*16. Fa�a um programa que leia a altura de um grupo de 20 pessoas, calcule e exiba:
� a maior altura do grupo;
� a altura m�dia;
� o n�mero de pessoas com altura superior a 2 metros*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i=0, num=0;
  float altura, maior=altura, soma=0;

  do {
    printf("Altura: ");
    scanf("%f", &altura);
    i++;
    if (maior <= altura) {
      maior = altura;
    } 
    soma=soma+altura;
    if (altura > 2) {
      num++;
    }
    }   while(i < 20);
  printf(" A maior altura do grupo � %.2f", maior);
  printf("\n A altura m�dia � %.2f", soma/i); 
  printf("\n O n�mero de pessoas com altura superior a 2 metros � %d", num); 
  
  return 0;
}