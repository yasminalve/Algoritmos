//Yasmin Alves
//11.12.2019

#include <stdio.h> 
#include <locale.h>

int V[10], V2[9], i, j, k, l;

/*Escreva um programa que preencha um vetor com 10 elementos inteiros, fornecidos pelo usu�rio.
Em seguida, o programa dever� exibir os elementos armazenados no vetor e permitir que o usu�rio
selecione um desses elementos para ser removido. Quando isso ocorrer, o programa dever�
remover o valor e, no momento da remo��o, todos os elementos posteriores ao valor removido
dever�o ser reorganizados (movidos uma posi��o para esquerda) a fim de que o vetor resultante n�o
fique com um espa�o em branco entre elementos v�lidos. Por fim, o programa dever� mostrar o
novo vetor, agora com 9 elementos, apenas. */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<10; i++) {
    printf("Digite C na posi��o %d: ", i+1);
    scanf("%d", &V[i]);
  }
  printf("V = [");
  for (j=0; j<10; j++) {
    printf("%d ", V[j]);
  }
  printf("]");

  printf("\nSelecione o elemento a ser removido: ");
  scanf("%d", &l);
  printf("V2 = [");
  for (k=0; k<10;k++) {
    if (V[k]==l) {

    } else {
      printf("%d ", V[k]);
    }
  }
  printf("]");
    return 0;
}