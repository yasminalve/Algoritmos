//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*. Escreva um programa que leia o número de andares de um prédio e, a seguir, para cada andar do
prédio, leia o número de pessoas que entraram e saíram do elevador.
Considere que o elevador está vazio e está subindo, os dados se referem a apenas uma subida do
elevador e que o número de pessoas dentro do elevador será sempre maior ou igual a zero.
Se o número de pessoas, após a entrada e saída, for maior que 15, deve ser mostrada a mensagem
"Excesso de passageiros. Devem sair X", sendo X o número de pessoas que devem sair do elevador,
de modo que seja obedecido o limite de 15 passageiros.
Após a entrada e saída no último andar, o programa deve mostrar quantas pessoas permaneceram no
elevador para descer*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i = 0, andares, nPE,nPS, elevador, total=0, excesso, termino;
  printf("Digite o numero de andares: ");
  scanf("%d", &andares);
  do {

    printf("\nnúmero de pessoas que entraram: ");
    scanf("%d", &nPE);
    printf("número de pessoas que sairam: ");
    scanf("%d", &nPS);
    i++;
    total = nPE - nPS;
    excesso = total - 15;
    if (total>15) {
      printf("Excesso de passageiros. Devem sair %d", excesso);
    }
    termino = termino + nPE - nPS;
  } while (i<andares);
  printf("Pessoas que permaneceram no elevador para descer é %d", termino);



  
  return 0;
}