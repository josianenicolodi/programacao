// 1. Faça um programa que receba três números, e mostre o maior e o menor.
//Caso tenha números iguais, informe qual e quantas vezes ele ocorre.


#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1,n2,n3,maior,menor;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero:\n");
    scanf("%d",&n2);

    printf("Digite o terceiro numero :\n");
    scanf("%d",&n3);

        if (n1 >0){
                printf(" Numero é maior");
        }else{
            printf(" Numero é menor");
        }

        if (n2 >0){
                printf(" Numero é maior");
        }else{
            printf(" Numero é menor");
        }

            if (n3 >0){
                printf(" Numero é maior");
        }else{
            printf(" Numero é menor");
            }

    printf(" primeiro numero positivo %d\n",maior);
}
