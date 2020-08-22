//Yasmin Alves
//17.12.2019

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ler nome, sexo („F? ou „M?) e idade. Se sexo for feminino („F?) e idade menor que 18,
imprimir o nome da pessoa e a palavra ACEITA. Caso contrário, imprimir NAO ACEITA. */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo[1], nome[15];
    int i, idade;

    printf("Digite o nome:");
    gets(nome);
    printf("Digite o sexo: ");
    gets(sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((idade < 18) && (sexo[0] == 'F')) {

        printf("Nome: %s\nSituação:ACEITA", nome);

    } else {

    	printf("NAO ACEITA");
    }

    return 0;
}
