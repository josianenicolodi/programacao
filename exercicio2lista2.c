#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Elabore um programa que leia um número inteiro e depois o imprima acompanhado
da mensagem “foi lido com sucesso!”.
*/

void main(void)
{
    int var1; //reserva de pedaço de memória
    int var2=7;

    char letra='j';

    printf("Informe um numero inteiro:\n");
    scanf("%d",&var1);
    printf("%d,%d,%c foi lido com sucesso!!\n",var1,letra);

}




