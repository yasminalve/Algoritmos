//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*No m�s de junho o nordeste vira uma grande festa e Campina Grande � uma das capitais que
mais recebe turistas nessa �poca. Todos buscam muita divers�o e as comidas t�picas, por
exemplo: canjica e pamonha. A prefeitura de Campina Grande est� interessada em saber qual
� a comida t�pica mais procurada, para isso, contratou voc� para desenvolver um programa
que leia a prefer�ncia de 50 visitantes. O programa dever� ler de cada visitante: o c�digo do
produto (ver a lista de op��es, a seguir), a quantidade consumida e valor unit�rio.
1 - Canjica
2 - Pamonha
3 - Milho
4 - Bolo de Milho
 Ao final, o programa dever� exibir:
� Qual � a comida t�pica preferida (mais consumida, desconsidere empate);
� Porcentagem de canjinhas consumidas;
� Comida mais barata (desconsidere empate);
� Valor total apurado na festa com as comidas t�picas pesquisadas.*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int cod, qtd, i=0, c=0,p=0,m=0,b=0, maior, T=0;
  float vc, vT=0, vp, vm, vb, perc, barata;
  do {
    printf("C�digo do produto: ");
    scanf("%d", &cod);

    switch (cod) {
      case 1: printf("Quantidade consumida: "); scanf("%d", &qtd); printf("Valor Unit�rio: "); scanf("%f", &vc); vT = vT + vc*qtd; c=c + qtd;T = T + qtd; break;
      case 2:  printf("Quantidade consumida: "); scanf("%d", &qtd); printf("Valor Unit�rio: "); scanf("%f", &vp); vT = vT + vp*qtd;p=p+qtd;T=T+qtd; break;
      case 3: printf("Quantidade consumida: "); scanf("%d", &qtd); printf("Valor Unit�rio: "); scanf("%f", &vm); vT =vT + vm*qtd; m=m+qtd;T=T+qtd; break;
      case 4: printf("Quantidade consumida: "); scanf("%d", &qtd); printf("Valor Unit�rio: "); scanf("%f", &vb); vT =vT + vb*qtd; b=b+qtd; T=T+qtd; break;
    }
    printf("\nb = %d\nc = %d\nm = %d\np = %d\n", b, c, m, p);
    barata = vc;
    if (c>p && c>m &&c>b) {
      maior = 1;
    } else if (p>c && p>m && p>b){
      maior = 2;
    } else if (m>c&&m>p&&m>b) {
      maior = 3;
    } else if (b>m && b>p && b>c) {
      maior = 4;
    } else {
      maior = 0;
    }

    if ( vc < vp && vc < vm && vc < vb ) {
      barata = 1;
    } else if ( vp < vc && vp < vm && vp < vb ){
      barata = 2;
    } else if ( vm < vc && vm < vp && vm < vb ) {
      barata = 3;
    } else if ( vb < vm && vb < vp && vb < vc ) {
      barata = 4;
    }

    i++;
  } while(i<50);
  switch (maior) {
    case 1: printf("\nMais consumida � canjica"); break;
    case 2: printf("\nMais consumida � pamonha"); break;
    case 3: printf("\nMais consumida � milho"); break;
    case 4: printf("\nMais consumida � bolo de milho"); break;
    case 0: break;
  }
 
  perc = 100.0*c/T;
  printf("\nPorcentagem de canjicas consumidas � %.f%%", perc);
   if (barata==1){ 
     printf("\nMais barata � canjica");
     } else if (barata==2) {
     printf("\nMais barata � pamonha");
     } else if (barata==3) {
       printf("\nMais barata � milho");
     } else if (barata==4) {
       printf("\nMais barata � bolo de milho");
     } else {
       printf(""); 
     }
     printf("\nValor total apurado na festa com as comidas t�picas pesquisadas � %.2f", vT);
    
  
  return 0;
}