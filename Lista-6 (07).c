//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>

/*Ler  uma  mensagem  e  imprimir  quantas  letras  A,  E,  I,  O,  U  tem  esta  mensagem. Considerar minúscula e maiúscula*/

int main()
{
    char frase[20]; int a=0,e=0,i=0,o=0,u=0, n, tam;

    printf("Digite a frase: ");
    gets(frase);

    tam = strlen(frase);

    for(n=0; n<tam; n++) {
        if ((frase[n]=='A')||(frase[n]=='a')) {
            a++;
        } else if ((frase[n]=='E')||(frase[n]=='e')) {
            e++;
        } else if ((frase[n]=='I')||(frase[n]=='i')) {
            i++;
        } else if ((frase[n]=='O')||(frase[n]=='o')) {
            o++;
        } else if ((frase[n]=='U')||(frase[n]=='u')) {
            u++;
        } else {}
    }
    printf("Quantidade de A = %d\nQuantidade de E = %d\nQuantidade de I = %d\nQuantidade de O = %d\nQuantidade de U = %d\n",a,e,i,o,u);

    return 0;
}
