/* Fa�a um programa que informa se um n�mero inteiro lido � positivo ou negativo. Caso ele seja igual a zero,
informe que ele n�o � positivo nem negativo. */


#include <stdio.h>

main ()
{
    int n1;
    printf("digite um numero:\n");
    scanf("%d",&n1);
    if (n1==0) {
        printf(" Numero n�o � positivo nem negativo");
    } else {
        if (n1 >0){
                printf(" Numero � positivo");
        }else{
            printf(" Numero � negativo");

        }

    }

}
