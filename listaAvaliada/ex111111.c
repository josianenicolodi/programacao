/* 12. Elabore um programa que leia 3 números inteiros, e os exiba na tela no seguinte
padrão:
|| número 1 || número 2 || número 3 || */

#include <stdio.h>

main ()

{
    int n1, n2, n3;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    printf("|| %d || %d|| %d ||",n1,n2,n3);
    }
