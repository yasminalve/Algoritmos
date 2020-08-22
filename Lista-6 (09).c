//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Ler  uma  frase  com  no  máximo  40  letras.  
Se o  tamanho  for  maior  que  40,  dar  uma mensagem  de  entrada  inválida  (com  um  som  de  beep)  e  solicitar  novamente.  
Se  a mensagem for válida, imprimir a frase na vertical*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char frase [100]; int i, tam;

    printf("Digite a frase: ");
    fgets(frase, 100, stdin);

    tam = strlen(frase);

    if (tam > 40) {

        printf("Mensagem inválida! \n" );
        printf("%c", 7);

    } else {

        for (i = 0;i < tam; i ++) {

            printf("%c\n", frase[i]);

        }
    }

    return 0;
}
