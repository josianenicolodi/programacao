/* Faça um programa que informa se um número inteiro lido é positivo ou negativo. Caso ele seja igual a zero,
informe que ele não é positivo nem negativo. */


#include <stdio.h>

main ()
{
    int n1;
    printf("digite um numero:\n");
    scanf("%d",&n1);
    if (n1==0) {
        printf(" Numero não é positivo nem negativo");
    } else {
        if (n1 >0){
                printf(" Numero é positivo");
        }else{
            printf(" Numero é negativo");

        }

    }

}
