/* Faça um programa que receba dois números, e mostre o maior e o menor. Caso tenha números iguais, informe que são iguais.*/


#include <stdio.h>


main ()

{
 int n1 , n2;

    printf("digite um numero:\n");
    scanf("%d",&n1);
    printf("digite outro numero:");
    scanf("%d",&n2);

    if (n1!=n2) {

       if (n1 > n2){
            printf(" o maior eh %d\n",n1);
            printf(" O menor eh %d\n",n2);
       }else {
            printf(" o maior eh %d\n",n2);
            printf(" O menor eh %d\n",n1);
             }
    } else {
        printf(" São iguais");
    }

}
