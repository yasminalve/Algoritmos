//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Um grupo de amigos combinou de enviar c�digos secretos (n�meros inteiros) para
acesso aos sistemas dentro de mensagens (strings) que s�o trocadas entre eles. Escreva
um programa para ler 10 mensagens. No final, ap�s a leitura das 10 mensagens, exiba:
? A quantidade de c�digos (n�meros inteiros) digitados dentro das mensagens;*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char mensagem[10]; int i=0; long codigo[10], tam[10];

    do {
        printf("Digite o c�digo: ");
        gets(mensagem);

        codigo[i] = mensagem;
        tam[i] = strlen(mensagem);
        i++;

    } while (i<10);
    
i=0;

    do {

      printf("\nQuantidade do codigo %d: %ld", i+1, tam[i]);
      i++;

    } while(i<10);

    return 0;
}
