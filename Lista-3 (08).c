//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*8. Escreva um programa que leia um conjunto de n�meros inteiros at� ser informado o valor zero (0). No
final, o programa deve exibir o maior n�mero lido.
*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, num, maior;
	
  for(i = 0, maior = 0; num != 0; i++) {
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    if (num > maior) {
      maior = num;
    } else {
      maior = maior;
    }
  }
  printf("O maior n�mero � %d", maior);
	return 0;
}