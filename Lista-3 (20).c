//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*20. O Botafogo Futebol Clube deseja aumentar o sal�rio de seus 22 jogadores. O reajuste deve obedecer a
seguinte tabela:
SAL�RIO ATUAL (R$) AUMENTO
0,00 a 1.000,00 20%
1.000,01 a 5.000,00 10%
acima de 5.000,00 0%
Escrever um programa que:
� leia o sal�rio atual de cada jogador;
� exiba o sal�rio atual e o sal�rio reajustado de cada jogador;
Ao final, ap�s ler e exibir o sal�rio reajustado de cada jogador, o programa deve:
� exiba o total da folha de sal�rios do clube, antes do reajuste.
� exiba o total da folha de sal�rios do clube, ap�s o reajuste.
� exiba o percentual de reajuste sobre o total da folha de sal�rios.
*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  float salarioA, salarioR, totalA, totalR, percT, i=0, aumento;

  do {
    printf("sal�rio atual: ");
    scanf("%f", &salarioA);

    if (salarioA >= 0 && salarioA <=1000){
      aumento = 0.2;
    } else {
          if (salarioA > 1000 && salarioA <=5000) {
            aumento = 0.1;
          } else if (salarioA>5000) {
            aumento = 0;
            }
          }
    
    salarioR = salarioA + salarioA*aumento;

    printf("Sal�rio atual do jogador � R$%.2f \nSal�rio atual do jogador � R$%.2f \n\n", salarioA, salarioR);

    totalA = totalA + salarioA;
    totalR = totalR + salarioR;
  
    i++;
  } while(i<22);
   
  printf("Folha de pagamentos total antes do rejuste R$%.2f \nFolha de pagamentos total depois do rejuste R$%.2f", totalA, totalR);
  percT = (totalR/totalA*100)-100;
  printf("\nPercentual total em cima da folha de pagamento � %f%%", percT);
  
  return 0;
}