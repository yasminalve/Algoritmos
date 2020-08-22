//Yasmin Alves
//11.12.2019

#include <stdio.h> 
#include <locale.h>

int V[10], V2[9], i, j, k, l;

/*Escreva um programa que preencha um vetor com 10 elementos inteiros, fornecidos pelo usuário.
Em seguida, o programa deverá exibir os elementos armazenados no vetor e permitir que o usuário
selecione um desses elementos para ser removido. Quando isso ocorrer, o programa deverá
remover o valor e, no momento da remoção, todos os elementos posteriores ao valor removido
deverão ser reorganizados (movidos uma posição para esquerda) a fim de que o vetor resultante não
fique com um espaço em branco entre elementos válidos. Por fim, o programa deverá mostrar o
novo vetor, agora com 9 elementos, apenas. */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  for (i=0; i<10; i++) {
    printf("Digite C na posição %d: ", i+1);
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