//Yasmin Alves
//22.08.2020

#include <stdio.h>

/*Escreva  um  programa para  ler  a  matrícula  de  10  funcionários.  A  matrícula  possuiuma máscara (ddmmaaaacc) onde, “cc” é a idade do funcionário no momento da contratação. No final, após a leitura das 10 matrículas, exiba a(s) matrícula(s) do(s) funcionário(s) que foi(ram) contratado(s)com idade superior a 18 anos*/

int main(void) {

  char matricula[10][10];
  int temp1, temp2;

  for (int i = 0; i < 10; i++) {

    printf("Digite a matrícula: ");

      for (int j = 0; j < 11; j++) {

        scanf("%c", &matricula[i][j]);

      }
    }

  for (int i = 0; i < 10; i++) {

    temp1 = matricula[i][8] - 48;
    temp2 = matricula[i][9] - 48;

    if ((temp1*10 + temp2) > 18) {
        for (int j = 0; j < 10; j++) {

          printf("%c", matricula[i][j]);

        }
        printf("\n");
      
    } else {  }
  }

  
  return 0;
}