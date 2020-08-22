//Yasmin Alves
//04.10.2019

#include <stdio.h>
#include <locale.h>

/*Foi feita uma pesquisa de audi�ncia de canal de TV em v�rias casas de uma certa cidade, num
determinado dia. Para cada casa visitada, � fornecido o n�mero do canal (5, 7, 10 ou 12) e o n�mero de
pessoas que o estavam assistindo naquela casa. Fazer um programa em C que:
� leia um n�mero indeterminado de dados, sendo que o flag corresponde ao n�mero de canal
igual a 0 (zero);
� calcule e escreva a porcentagem de audi�ncia de cada emissora.*/

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  int casas=1, canal, cinco=0, sete=0, dez=0, doze=0, n5=0, n7=0, n10=0, n12=0, audiencia=0;
  float audienciaC, audienciaS, audiencia10, audiencia12;

  do {
    printf("Casa %d\n Canal (Digite 99 pra mudar de casa) :", casas);
    scanf("%d", &canal);

    switch (canal) {
      case 5: printf("N�mero de pessoas :"); scanf("%d", &n5); cinco = cinco + n5; audiencia = audiencia + n5; break;
      case 7: printf("N�mero de pessoas :"); scanf("%d", &n7); sete = sete + n7; audiencia = audiencia+n7; break;
      case 10: printf("N�mero de pessoas :"); scanf("%d", &n10);dez = dez + n10; audiencia = audiencia+n10;  break;
      case 12:printf("N�mero de pessoas :"); scanf("%d", &n12); doze = doze + n12; audiencia = audiencia+n12; break;
      case 99: printf("\n\n"); casas = casas +1; break;
      case 0: break;
      default: printf("Canal inv�lido. Digite novamente!\nCasa %d\n Canal: ", casas); scanf("%d", &canal); break;
    }
    

  } while (canal != 0);
  audienciaC = 100.0*cinco/audiencia;
  audienciaS = 100.0*sete/audiencia;
  audiencia10 = 100.0*dez/audiencia;
  audiencia12 = 100.0*doze/audiencia;
  printf("\n Audiencia de 5 � %.f%%\n Audiencia de 7 � %.f%%\n Audiencia de 10 � %.f%%\n Audiencia de 12 � %.f%%", audienciaC, audienciaS, audiencia10, audiencia12);
  
  return 0;
}