#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(void)
{
    int var1; //reserva de peda�o de mem�ria
    var1 = 5; //atribuindo

    printf("Exemplo com leitura de dados...\n");
    printf("Valor de var1: %d\n",var1);
    printf("Informe um numero inteiro:");
    scanf("%d",&var1);
    printf("Valor de var1 atualizado:%d\n",var1);

}

