/* Elabore um programa que pe�a ao usu�rio que digite 2 n�meros, obtenha esses
n�meros e exiba a soma, o produto, e a diferen�a. */


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
    printf("diferen�a: %d",n1-n2);
}


