#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    //declara��o de vari�vel
    int n1;

    printf("Aula 2\n");
    printf("Atividades ... \n");
    printf("Valor de n1 sem inicializar: %d\n",n1);
    n1 = 0;
    printf("Valor de n1 com atribuicao: %d\n",n1);
    printf("Digite um numero inteiro:");
    scanf("%d",&n1);
    printf("Valor de n1 apos leitura: %d\n",n1);
    getch();
}
