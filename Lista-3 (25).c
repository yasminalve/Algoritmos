//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Faça um programa que, para um número indeterminado de pessoas:
° leia a idade de cada pessoa, sendo que a leitura da idade 0 (zero) indica o fim da leitura e não
deve ser considerada;
° calcule e escreva o número de pessoas;
° calcule e escreva a idade média do grupo;
° calcule e escreva a menor idade e a maior idade*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int N=0, idade, menor=9000, maior=0, Itotal=0;
  float media=0;
  do {
    printf("Idade: ");
    scanf("%d", &idade);
    N=N+1;
    
    Itotal = Itotal + idade;
    if (idade == 0) {
      break;
    }
    if (menor>idade) {
      menor=idade;
    } else if(menor == idade) {
      menor = idade;
    } else {
      menor = menor;
    }
    if (maior<idade) {
      maior=idade;
    } else if(maior == idade) {
      maior = idade;
    } else {
      maior = maior;
    }
    
    Itotal = Itotal + idade;
    
  } while (idade != 0);
  media = Itotal/N;
  printf("Número de pessoas: %d\nIdade média: %.2f\nMenor idade: %d\nMaior idade: %d", N, media, menor, maior);
  return 0;
}