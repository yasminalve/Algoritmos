//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*Escreva  um  programa  quepreencha  dois  vetores  A  e  B  (cada  um  com  tamanho  50)  com  valoresreais fornecidos pelo usuário. Em seguida o programa deverá preencher automaticamente um vetordenominado C com a soma dos elementos, em cada posição, de A com B.*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[50], B[50], C[50], i=0, j=0, k=0, valora, valorb, valorc;
  do {
    printf("Vetor A, posição %d:", i);
    scanf("%d", &valora);
    A[i]=valora;
    printf("Vetor B, posição %d:", i);
    scanf("%d", &valorb);
    B[i]=valorb;
    i++;
  } while (i<50);
  while (j<50) {
    C[j] = A[j]+B[j];
    j++;
  }
  printf("C: {");
  while (k<50) {
    printf("%d", C[k]);
    if (k!=49) {
      printf(",");
    }
    k++;
  }
  printf("}");
  return 0;
}