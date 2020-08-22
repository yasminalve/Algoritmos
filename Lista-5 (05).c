//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva um programa que: a)leia os dados da tabela e os armazene; 
b)determine e mostre o fabricante com maiores vendas em cada ano; 
c)determine e mostre o ano onde houve o maior volume de vendas; 
d)determine e mostre a média de vendas de cada fabricante no período apresentado na tabela.*/

int valores[4][6]= {{204, 223, 230, 257, 290, 322}, {195, 192, 198, 203, 208, 228}, {220, 222, 217, 231, 245, 280},{254, 262, 279, 284, 296, 330}}, maior[6], volume[6], mvolume=0, volume1=0, soma, i, j, Maior=0;
int vendedor; float media[4];

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0;i<6;i++) {
    for(j=0, Maior=0;j<4;j++) {
      if(valores[j][i]>Maior) {
        Maior = valores[j][i];
        switch(j) {
          case 0: vendedor=1;break;
          case 1: vendedor=2;break;
          case 2: vendedor=3;break;
          case 3: vendedor=4;break;
        }
     } else {
       Maior=Maior;
     }
    }
    Maior = maior[i];
    printf("\nVendedor com o maior número de vendas em %d é: %d", i+2011, vendedor);
  }
  Maior=0;
  for(j=0;j<6;j++) {
    mvolume=0;
    for(i=0;i<4;i++) {
      mvolume = mvolume + valores[i][j];
    }

    if(mvolume>volume1) {
        volume1 = mvolume;
        Maior=j;
     } else {
       volume1=volume1;;
     }
  }
  printf("\nAno com o maior volume de vendas foi: %d", Maior+2011);
  Maior=0;
  for(i=0, soma=0; i<4;i++) {
    soma=0;
    for(j=0;j<6;j++) {
      soma = soma + valores[i][j];
    }
    media[i]=1.0*soma/6;
    printf("\nMédia do Fabricante %d no período: %.2f",i+1, media[i]);
  }
  
  return 0;
}