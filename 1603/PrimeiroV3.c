#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    //declaração de variável
    float n;

    printf("Valor de n sem inicializar: %f\n",n);
    n = 3.14;
    printf("Valor de n com atribuicao: %f\n",n);
    printf("Valor de n com atribuicao: %.2f\n",n);
    printf("Valor de n com atribuicao: %.1f\n",n);
    printf("Digite um numero real:");
    scanf("%f",&n);
    printf("Valor de n apos leitura: %.2f\n",n);
    getch();
}
