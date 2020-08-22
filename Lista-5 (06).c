//Yasmin Alves
//11.12.2019

#include <stdio.h>
#include <locale.h>

/*escreva um programa que preencha uma matriz quadrada com valores fornecidos pelo usuário, 
determine e mostre se a mesma é uma matriz de permutação.*/

int matriz[3][3], i, j, linha=0, coluna=0;

int main()
{
  setlocale(LC_ALL, "Portuguese");
    printf("Digite sua matriz: \n");
    for (i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Digite o elemento %d da linha %d:", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<3;i++) {
      coluna=linha=0;
      for(j=0;j<3;j++) {
        coluna = coluna + matriz[i][j];
        linha = linha + matriz[j][i];
      }
      if ((coluna!=1)||(linha!=1)) {
        coluna=linha=10;
      }
    }
    if((coluna!=1)&&(linha!=1)) {
                printf("Matriz não é uma matriz de permutação!");
            } else { 
              printf("Matriz é uma matriz de permutação!");
            };

    return 0;
}
