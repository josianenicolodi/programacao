/* Faça um programa que lê dois números inteiros, e classifique cada um deles em positivo, negativo ou zero. */


#include <stdio.h>

main (){

    int n1 , n2;

    printf("digite um numero:\n");
    scanf("%d",&n1);
    printf("digite outro numero:\n");
    scanf("%d",&n2);


    //inicio primeiro if
    if (n1==0) {
        printf(" Numero %d não é positivo nem negativo\n",n1);

    }else{

        if (n1 >0){
            printf(" Numero %d é positivo\n",n1);
        }else{
            printf(" Numero %d é negativo\n",n1);
        }
    } //final do primeiro if

    if (n2==0) { // inicio segundo if
        printf(" Numero %d não é positivo nem negativo\n",n2);

    }else{

        if (n2 >0){
            printf(" Numero %d é positivo\n",n2);
        }else{
            printf(" Numero %d é negativo\n",n2);
        }
    } // inicio segundo if

}
