#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    //declaração de variável
    char letra;

    printf("Valor de letra sem inicializar: %c\n",letra);
    letra = 'e';
    printf("Valor de letra com atribuicao: %c\n",letra);
    printf("Digite um caractere:");
    scanf("%c",&letra);
    printf("Valor de letra apos leitura: %c\n",letra);
    getch();
}
