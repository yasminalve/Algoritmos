//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Faça um programa para dizer o vencedor de uma partida de ping-pongue entre o jogador 1 e o jogador
2. Para cada ponto disputado, o usuário deve informar 1 ou 2 para dizer qual o jogador venceu aquele
ponto. A partida chega ao final quando um dos jogadores tiver 21 pontos (ou mais) e a diferença de
pontos entre os jogadores for maior ou igual a dois.
*/ 


int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int jogador, jog1=0, jog2=0, i=0;
  do {
    printf("Jogador que venceu: ");
    scanf("%d",&jogador);
    if (jogador==1){
      jog1 = jog1+1;
    } else if (jogador==2){
      jog2= jog2+1;
    } else {
      printf("Jogador não existe");
    }
    i++;
    if (jog1>=21 && (jog1-jog2 > 1)) {
      break;
    } else if (jog2>=21 && (jog2-jog1 > 1)) {
      break;
    }
  } while (i<1000); 
  if(jog2>jog1)  {
      printf("Jogador 2 venceu!");
    } else if (jog1>jog2) {
      printf("Jogador 1 venceu!");
    } 
  
  return 0;
}
