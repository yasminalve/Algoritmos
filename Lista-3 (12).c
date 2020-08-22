//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*12. Faça um programa que leia a idade de várias pessoas até ser informada a idade igual a -99. Após ler as
idades, o programa deve exibir:
° Total de pessoas com menos de 21 anos;
° Total de pessoas com mais de 50 anos.
*/

int main(void) {
  int idade, i, pm21=0, pM50=0;
  for (i=0, idade=0; idade!=-99;i++) {
      printf("Digite a idade: ");
      scanf("%d", &idade);

      if(idade < 21 && idade > 0) {
        pm21 = pm21 +1;
      } else {
        if (idade > 50) {
          pM50 = pM50 +1;
        }
      }

  }
  printf("Total de pessoas com menos de 21 anos: %d", pm21);
  printf("\nTotal de pessoas com mais de 50 anos: %d", pM50);
  
  return 0;
}