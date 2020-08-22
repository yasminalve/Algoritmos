//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Os mosquitos do g�nero Aedes causam dengue, chikungunya e a zika. Foi realizado um levantamento
da incid�ncia dessas doen�as em 20 bairros. Para cada bairro, 100 resid�ncias foram visitadas.
Escreva um programa que:
� Para cada uma das resid�ncias nos 20 bairros, leia:
� a quantidade de pessoas que tiveram Zika;
� a quantidade de pessoas que tiveram Dengue;
� a quantidade de pessoas que tiveram Chikungunya.
� Ap�s ler os dados de cada bairro o programa dever� exibir:
� Total de casos de Zika, Dengue e Chikungunya;
� Ap�s a leitura dos dados em todas as resid�ncias de todos os bairros, o programa dever�
exibir:
� O bairro com maior n�mero de casos de Chikungunya e o n�mero de casos
relacionados (por exemplo, �bairro 5 � com 50 casos de Chicungunya�);
� Percentual de resid�ncias sem incid�ncias de doen�as em rela��o ao n�mero de
resid�ncias visitadas. */

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int i, j, zika, dengue, chiku, maior=0, livre=0, bairro,Z=0, D=0, C=0;
  float perc;
  for (i=1; i<21; i++) {//bairros
    printf("\n\nBairro %d\n\n", i);
    for (j=1; j<101; j++) {//casas
      printf("\n\nCasa %d\n", j);
      printf("quantidade de pessoas que tiveram Zika: ");
      scanf("%d", &zika);
      printf("a quantidade de pessoas que tiveram Dengue: ");
      scanf("%d", &dengue);
      printf("a quantidade de pessoas que tiveram Chikungunya:");
      scanf("%d", &chiku);
      Z=Z+zika;
      D=D+dengue;
      C=C+chiku;

      
      if (maior<chiku) {
        maior = chiku;
        bairro = i;
      } else {
        maior = maior;
      }
      if (zika == 0 && chiku==0 && dengue==0){
        livre = livre + 1;
        }

    }
  }
  perc = 100.0*livre/2000;//residencia total
  printf("\n\nMaior n�mero de casos de Chikungunya � o bairro %d com %d casos", bairro, maior);
  printf("\nPercentual de resid�ncias sem incid�ncias de doen�as em rela��o ao n�mero de resid�ncias visitadas � %.f%%", perc);
  return 0;
}