//Programa para trocar o conteúdo de duas variáveis
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Digite a:");
    scanf("%d", &a);

    printf("Digite b:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("a=%d\n", a);
    printf("b=%d", b);

    return 0;
}
