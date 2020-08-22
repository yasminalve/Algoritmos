//Programa para retornar o valor total de uma compra
//Yasmin Alves
//20.09.2019

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qC, qR, qM, qS;
    float Vc, Vr, Vm, Vs, VT;
    printf("Quantidade de cholotate:");
    scanf("%d", &qC);
    printf("Quantidade de Refrigerante:");
    scanf("%d", &qR);
    printf("Quantidade de Misto quente:");
    scanf("%d", &qM);
    printf("Quantidade de Sorvete:");
    scanf("%d", &qS);

    Vc = qC *1.5;
    Vr = qR *2;
    Vm = qM *2;
    Vs = qS *1.5;
    VT = Vc + Vr + Vm + Vs;

    printf("Valor Total da compra: R$ %f", VT);
    return 0;
}
