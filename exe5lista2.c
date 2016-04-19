/* 6. Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano,
em inteiros, e, em seguida, imprima os valores separados por uma barra (/)*/


#include <stdio.h>
#include <stdlib.h>
main()
{
    int dia, mes, ano ;

    //Codigo que le um numero
    //e guarda em uma vairavel
    printf ("Digite o dia:\n");
    scanf ("%d",&dia);
    //======================

    printf ("Digite o mes:\n");
    scanf ("%d",&mes);

    printf ("Digite o ano:\n");
    scanf ("%d",&ano);

    printf("%d/%d/%d",dia,mes,ano);

}
