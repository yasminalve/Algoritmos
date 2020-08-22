//Programa para calcular o imposto de renda
//Yasmin Alves
//09.10.2019
#include <stdio.h>

int main(void) { 

int CPF1, CPF2, CPF3, CPF4, dependentes;
float rendimento,imposto, Cprevidencia, Dmedicas, Tdeducoes, Bcalculo, Imposto, aliquota, parcela, diferenca;

 printf("Digite o CPF:");
 scanf("%d.%d.%d-%d", &CPF1, &CPF2, &CPF3, &CPF4);
 printf("Digite o rendimento anual:");
 scanf("%f", &rendimento);
 printf("Digite o imposto retido na fonte:");
 scanf("%f", &imposto);
 printf("Digite a Contribuicao previdenciaria:");
 scanf("%f", &Cprevidencia);
 printf("Digite as despesas medicas:");
 scanf("%f", &Dmedicas);
 printf("Digite o numero de dependentes:");
 scanf("%d", &dependentes);
 
 Tdeducoes = Cprevidencia+Dmedicas+(dependentes*1080);
 Bcalculo = rendimento - Tdeducoes;
 Imposto = (Bcalculo*aliquota)/100 - parcela;
 diferenca=Imposto-imposto;

 
 
   if(Bcalculo <= 10800) {
     aliquota = 0;
     parcela = 0;
     Imposto = (Bcalculo*aliquota)/100 - parcela;
      if((Imposto-imposto)>0) {
        printf("\nNao ha imposto para pagar");
      }
      else {
       printf("\nNao ha imposto a restituir");
     }
   } 
   else {
     if (Bcalculo>10800 && Bcalculo<=21600) {
       aliquota = 15;
       parcela = 1620;
       Imposto = (Bcalculo*aliquota)/100 - parcela;
       if ((Imposto-imposto)>0) {
         printf("\nImposto a pagar igual a %f", parcela);
          } else {
           printf("\nImposto a restituir igual a %f", parcela);
         }

     } else {
        if (Bcalculo > 21600) {
          aliquota = 25;
          parcela = 3780;
          Imposto = (Bcalculo*aliquota)/100 - parcela;
          if ((Imposto-imposto)>0) {
         printf("\nImposto a pagar igual a %f", parcela);
          } else {
           printf("\nImposto a restituir igual a %f", parcela);
         }
        }
     }
   }

 printf("\n\nCPF:%d.%d.%d-%d", CPF1, CPF2, CPF3, CPF4);
 printf("\nRendimento anual: R$%.2f", rendimento);
 printf("\nImposto retido na fonte: R$%.2f", imposto);
 printf("\nDespesas medicas: R$%.2f", Dmedicas);
 printf("\nContribuicao previdenciaria: R$%.2f", Cprevidencia);
 printf("\nDependentes: %d", dependentes);
 printf("\nCalculo do valor total das deduções: R$%.2f", Tdeducoes);
 printf("\nBase de Calculo: R$%.2f", Bcalculo);
 printf("\nCalculo do imposto devido: R$%.2f", Imposto);
 printf("\nAliquota: %.f%%", aliquota);
 printf("\nParcela a Deduzir: R$%.2f", parcela);
 diferenca=Imposto-imposto;
 printf("\nDiferença entre o imposto devido e o imposto retido: R$%.2f", diferenca);
 

 
  	return 0;
}
