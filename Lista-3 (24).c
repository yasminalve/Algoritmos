//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*24. O cardápio de uma casa de lanches, especializada em sanduíches, é dado abaixo. Escreva um
programa que leia o código e a quantidade de cada item comprado por um freguês, calcule e exiba o
total a pagar. Obs: A leitura do código 'X' indica o fim da leitura dos itens.
CÓDIGO PRODUTO PREÇO (R$)
H Hamburger 1,50
C Cheeseburger 1,80
M Misto Quente 1,20
A Americano 2,00
Q Queijo Prato 1,00*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  char codigo;
  int qtdH=0, qtdC=0, qtdM=0, qtdA=0, qtdQ=0, qtd=0;
  float H, C, M, A, Q;
  do {
    printf("código e a quantidade de cada item: ");
    scanf(" %c %d", &codigo, &qtd);
    switch (codigo) {
      case 'H': qtdH = qtdH + qtd; break;
      case 'C': qtdC = qtdC + qtd; break;
      case 'A': qtdA = qtdA + qtd; break;
      case 'Q': qtdQ = qtdQ + qtd; break;
      case 'M': qtdM = qtdM + qtd; break;
      default : printf("Inválido. Tente novamente\ncódigo e a quantidade de cada item: ");
    scanf(" %c %d", &codigo, &qtd); break;
    }
  
  } while (codigo != 'X');

      H = 1.5*qtdH;
      M = 1.2*qtdM;
      Q = 1.0*qtdQ;
      A = 2.0*qtdA;
      C = 1.8*qtdC;

  printf("Hamburguer\t%.2f\nCheeseburger\t%.2f\nMisto quente\t%.2f\nAmericano\t%.2f\nQueijo Prato\t%.2f", H, C, M, A, Q);
  return 0;
}
