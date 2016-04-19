    /*. Elabore um programa que leia um número e escreva na tela: o número lido, seu
antecessor e seu sucessor. */

#include <stdio.h>

main ()
{
    int n1;

    printf("Digite um numero:\n");
    scanf("%d",&n1);
    printf("antecessor: %d\n",n1-1);
    printf("sucessor: %d",n1+1);
}
