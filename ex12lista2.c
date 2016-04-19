/* 12. Elabore um programa que leia 3 números inteiros, e os exiba na tela no seguinte
padrão:
|| número 1 || número 2 || número 3 || */


#include <stdio.h>
#include <stdlib.h>
main()
{
    int n1,n2,n3;


    printf ("Numero1:\n");
    scanf ("%d",&n1);

    printf ("Numero2:\n");
    scanf ("%d",&n2);

    printf("Numero3:\n");
    scanf ("%d",&n3);

   printf("|| %d || %d || %d ||",n1,n2,n3);
}
