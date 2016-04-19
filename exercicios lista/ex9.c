/* Elabore um programa que peça ao usuário que digite 2 números, obtenha esses
números e exiba a soma, o produto, e a diferença. */


#include <stdio.h>

main ()
{
    int n1, n2;

    printf("Digite um numero:\n");
    scanf("%d",&n1);
    printf("Digite outro numero:\n");
    scanf("%d",&n2);
    printf("soma: %d\n",n1+n2);
    printf("produto: %d\n",n1*n2);
    printf("diferença: %d",n1-n2);
}


