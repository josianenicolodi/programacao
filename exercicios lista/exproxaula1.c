// 1. Fa�a um programa que receba tr�s n�meros, e mostre o maior e o menor.
//Caso tenha n�meros iguais, informe qual e quantas vezes ele ocorre.


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
                printf(" Numero � maior");
        }else{
            printf(" Numero � menor");
        }

        if (n2 >0){
                printf(" Numero � maior");
        }else{
            printf(" Numero � menor");
        }

            if (n3 >0){
                printf(" Numero � maior");
        }else{
            printf(" Numero � menor");
            }

    printf(" primeiro numero positivo %d\n",maior);
}
