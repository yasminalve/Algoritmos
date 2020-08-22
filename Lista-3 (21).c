//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*21. Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo
produto lançado no mercado. Para isto, forneceu o sexo do entrevistado (M-masculino ou F-feminino) e
sua resposta (S-sim ou N-não). Após ler os dados (sexo e resposta) dos 2000 entrevistadas, o
programa deve calcular e exibir:
° número de pessoas que responderam sim (S);
° número de pessoas que responderam não (N);
° a porcentagem de pessoas do sexo feminino (F);
° a porcentagem de pessoas do sexo masculino (M);
° a porcentagem de pessoas do sexo feminino (F) que responderam sim (S);
° a porcentagem de pessoas do sexo masculino (M) que responderam não (N)*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int i=0, F=0, M=0, S=0, N=0, pessoas, FS=0, MN=0;
  float pF, pM, pFS,pMN;
  char sexo, resposta;
  
  do {
    printf("sexo do entrevistado F para feminino ou M para masculino: ");
    scanf(" %c", &sexo);
    printf("resposta do entrevistado S para sim e N para não: ");
    scanf(" %c", &resposta);

    if (sexo == 'F') {
      F++;
      if (resposta == 'S') {
        FS++;
      }
      pessoas++;
    } else if (sexo=='M') {
      M++;
      if (resposta == 'N') {
        MN++;
      }
      pessoas++;
    } else {
      printf("sexo inválido. Digite o sexo novamente: ");
    scanf(" %c", &sexo);
    }
    if (resposta == 'S') {
      S++;
    } else if (resposta=='N') {
      N++;
    } else {
      printf("resposta inválida. Digite a resposta novamente: ");
    scanf(" %c", &resposta);
    }

    i++;

  } while (i<2000);

  printf("pessoas F %d\n\n", F);
  printf("pessoas  %d\n\n", pessoas);

    printf("número de pessoas que responderam sim é %d", S);
    printf("\nnúmero de pessoas que responderam não é %d", N);
    pF = (float)F/pessoas*100;
    printf("\na porcentagem de pessoas do sexo feminino é %.f%%", pF);
    pM = (float)M/pessoas*100;
    printf("\na porcentagem de pessoas do sexo masculino é %.f%%", pM);
    pFS = (float)FS/F*100;
    printf("\na porcentagem de pessoas do sexo feminino que disseram sim é %.f%%", pFS);
    pMN = (float)MN/M*100;
    printf("\na porcentagem de pessoas do sexo masculino que disseram N é %.f%%", pMN);
    
  
  return 0;
}