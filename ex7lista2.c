/*7. Elabore um programa que leia um n�mero e escreva na tela: o n�mero lido, seu
antecessor e seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
    int n1;

    scanf("%d",&n1);
    printf("Numero lido:%d\n",n1); // imprime o numero lido substitui o %d pelo valor de n1
    printf ("Antecessor:%d\n",n1-1); // executa subtra�ao usando variavel com sinal de menos, necessario %d
    printf ("Sucessor:%d",n1+1); //

}
