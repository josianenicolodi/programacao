/* 12. Elabore um programa que leia 3 n�meros inteiros, e os exiba na tela no seguinte
padr�o:
|| n�mero 1 || n�mero 2 || n�mero 3 || */


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
