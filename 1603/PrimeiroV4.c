#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    //declara��o de vari�vel
    char letra;

    printf("Valor de letra sem inicializar: %c\n",letra);
    letra = 'e';
    printf("Valor de letra com atribuicao: %c\n",letra);
    printf("Digite um caractere:");
    scanf("%c",&letra);
    printf("Valor de letra apos leitura: %c\n",letra);
    getch();
}
