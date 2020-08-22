//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*20. O Botafogo Futebol Clube deseja aumentar o salário de seus 22 jogadores. O reajuste deve obedecer a
seguinte tabela:
SALÁRIO ATUAL (R$) AUMENTO
0,00 a 1.000,00 20%
1.000,01 a 5.000,00 10%
acima de 5.000,00 0%
Escrever um programa que:
° leia o salário atual de cada jogador;
° exiba o salário atual e o salário reajustado de cada jogador;
Ao final, após ler e exibir o salário reajustado de cada jogador, o programa deve:
° exiba o total da folha de salários do clube, antes do reajuste.
° exiba o total da folha de salários do clube, após o reajuste.
° exiba o percentual de reajuste sobre o total da folha de salários.
*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  float salarioA, salarioR, totalA, totalR, percT, i=0, aumento;

  do {
    printf("salário atual: ");
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

    printf("Salário atual do jogador é R$%.2f \nSalário atual do jogador é R$%.2f \n\n", salarioA, salarioR);

    totalA = totalA + salarioA;
    totalR = totalR + salarioR;
  
    i++;
  } while(i<22);
   
  printf("Folha de pagamentos total antes do rejuste R$%.2f \nFolha de pagamentos total depois do rejuste R$%.2f", totalA, totalR);
  percT = (totalR/totalA*100)-100;
  printf("\nPercentual total em cima da folha de pagamento é %f%%", percT);
  
  return 0;
}