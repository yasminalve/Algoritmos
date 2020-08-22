//Yasmin Alves
//11.12.2019

#include <stdio.h>

/*Escreva um programa que preencha um vetor V1 com 50 elementos reais, fornecidos pelo usuário.
Em seguida, o programa deverá preencher automaticamente um vetor V2 com os elementos de V1
na ordem inversa das posições, ou seja o último elemento de V1 será o primeiro de V2 e assim por
diante. Por fim, o programa deverá exibir o vetor V2.
*/

int V1[50], V2[50], i=0, j=49, k=0;

int main(void) {
  do {
    printf("Digite V1[%d]: ", i);
    scanf("%d", &V1[i]);
    V2[j] = V1[i];
    i++;
    j--;
  } while (i<50);

  printf("V2 = {");
  while (k<50) {
    printf("%d ", V2[k]);
    k++;
  }
  printf("}");

  return 0;
}