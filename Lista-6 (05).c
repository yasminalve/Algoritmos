//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Escreva um programa, em C, para ler uma frase do usuário. Calcule e exiba:
- Quantidade de vogais;
- Quantidade de consoantes;
- Quantidade de números;
- Quantidade de caracteres especiais.*/

int main()
{
    char frase[30];
    int numero, vogal=0, consoante=0, digito=0, especiais=0, i, tam;

    printf("Digite a frase: ");
    fgets(frase, 30, stdin);

    tam = strlen(frase);

    for (i = 0;i < tam; i ++) {
      numero = (int)frase[i];
        if( isdigit(frase[i]) ){
            digito = digito + 1;
        }

        else if ((numero > 32 && numero < 48)||(numero > 57 && numero < 65)||(numero > 90 && numero < 95)||(numero > 122 && numero < 127)) {
            especiais = especiais + 1;
        }
        else if ((isalpha(frase[i])) && (frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'||frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U')) {
                        vogal = vogal + 1;
        }  else if ((numero != 32) && !isspace(numero)){
        consoante = consoante + 1;
        }

    }

    printf("Frase: %s", frase);
    printf("\nVogais: %d", vogal);
    printf("\nDigito: %d", digito);
    printf("\nConsoante: %d", consoante);
    printf("\nEspeciais: %d", especiais);
    return 0;
}
