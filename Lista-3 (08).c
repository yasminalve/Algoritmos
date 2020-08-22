//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*8. Escreva um programa que leia um conjunto de números inteiros até ser informado o valor zero (0). No
final, o programa deve exibir o maior número lido.
*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, num, maior;
	
  for(i = 0, maior = 0; num != 0; i++) {
    printf("Digite o número: ");
    scanf("%d", &num);
    if (num > maior) {
      maior = num;
    } else {
      maior = maior;
    }
  }
  printf("O maior número é %d", maior);
	return 0;
}