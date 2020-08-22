//Programa para recolher a opinião sobre a reforma da previdência
//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

int zona[100], i, favor=0, contra=0, zon1, j;
float Título[100];
char voto[100];

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<100;i++) {
    printf("Digite a zona: ");
    scanf("%d", &zona[i]);
    if(zona[i]==0) {break;}
    else {
      printf("Digite o título: ");
      scanf("%f", &Título[i]);
      printf("Digite seu voto: ");
      scanf(" %c", &voto[i]);
      if (voto[i]=='S') {
        favor=favor +1;
      } else if (voto[i]=='N') {
        contra=contra+1;
      } else {
        printf("Inválido! Digite seu voto: ");
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
  printf("Títulos da zona informada que votaram a favor da reforma: ");
  for(j=0; j<100;j++) {
    if ((zona[j]==zon1)&&voto[j]=='S') {
      printf("\nTítulo: %.f", Título[j]);
    }
  }
  return 0;
}