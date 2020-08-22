//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*. Escreva um programa que leia o n�mero de andares de um pr�dio e, a seguir, para cada andar do
pr�dio, leia o n�mero de pessoas que entraram e sa�ram do elevador.
Considere que o elevador est� vazio e est� subindo, os dados se referem a apenas uma subida do
elevador e que o n�mero de pessoas dentro do elevador ser� sempre maior ou igual a zero.
Se o n�mero de pessoas, ap�s a entrada e sa�da, for maior que 15, deve ser mostrada a mensagem
"Excesso de passageiros. Devem sair X", sendo X o n�mero de pessoas que devem sair do elevador,
de modo que seja obedecido o limite de 15 passageiros.
Ap�s a entrada e sa�da no �ltimo andar, o programa deve mostrar quantas pessoas permaneceram no
elevador para descer*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i = 0, andares, nPE,nPS, elevador, total=0, excesso, termino;
  printf("Digite o numero de andares: ");
  scanf("%d", &andares);
  do {

    printf("\nn�mero de pessoas que entraram: ");
    scanf("%d", &nPE);
    printf("n�mero de pessoas que sairam: ");
    scanf("%d", &nPS);
    i++;
    total = nPE - nPS;
    excesso = total - 15;
    if (total>15) {
      printf("Excesso de passageiros. Devem sair %d", excesso);
    }
    termino = termino + nPE - nPS;
  } while (i<andares);
  printf("Pessoas que permaneceram no elevador para descer � %d", termino);



  
  return 0;
}