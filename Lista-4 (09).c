//Programa para recolher a opini�o sobre a reforma da previd�ncia
//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

int zona[100], i, favor=0, contra=0, zon1, j;
float T�tulo[100];
char voto[100];

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<100;i++) {
    printf("Digite a zona: ");
    scanf("%d", &zona[i]);
    if(zona[i]==0) {break;}
    else {
      printf("Digite o t�tulo: ");
      scanf("%f", &T�tulo[i]);
      printf("Digite seu voto: ");
      scanf(" %c", &voto[i]);
      if (voto[i]=='S') {
        favor=favor +1;
      } else if (voto[i]=='N') {
        contra=contra+1;
      } else {
        printf("Inv�lido! Digite seu voto: ");
        scanf(" %c", &voto[i]); 
          if (voto[i]=='S') {
            favor=favor +1;
          } else if (voto[i]=='N') {
            contra=contra+1;
        }
      }
    }
  }
  printf("Total de votos a favor: %d", favor);
  printf("\nTotal de votos contra: %d", contra);
  printf("\nDigite a zona:");
  scanf("%d", &zon1);
  printf("T�tulos da zona informada que votaram a favor da reforma: ");
  for(j=0; j<100;j++) {
    if ((zona[j]==zon1)&&voto[j]=='S') {
      printf("\nT�tulo: %.f", T�tulo[j]);
    }
  }
  return 0;
}