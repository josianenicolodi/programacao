/*

3. Faça um programa em C que classifica a qualidade de um time de futebol do Brasil, conforme a tabela a seguir,
a partir da leitura do número de vitórias, número de derrotas e número de empates ao longo de um ano.
Lembre que seu programa não deve aceitar valores negativos para esses dados



Caso o programa não encontre nenhuma das classificações da tabela, ele deve informar “Fora do padrao”.

*/


#include <stdio.h>
#include <stdlib.h>

main ()
{
    int vit, derr , emp = -1 ;

    printf( " Digite o numero de vitorias\n");
    scanf ( "%d",&vit);
    printf( "Digite o numero de derrotas\n");
    scanf ("%d",&derr);//varia não pode ficar entre aspas
    printf("Digite o numero de empates\n");
    scanf ("%d",&emp);

    if (vit < 0 || derr < 0 || emp < 0)
    {
        printf(" Valores não podem ser negativos!\n");
    }
    else
    {
        if (  (vit <= 10) & (derr > 40) & (emp > 20) ) {
            printf ( " Pessimo!! ") ;
        }else if ( (vit >=11 & vit<=20) & (derr >= 31 & derr <= 40) & (emp <=15 & emp >=20) ) {
            printf ( " Ruim!! ") ;
        } else if ( vit >=21 & vit<=30 & derr >=21 & derr <= 30 & emp >=10 & emp <=14 ) {
            printf ( " regular !! ") ;
        } else if ( vit >=31 & vit<=40 & derr >=11 & derr <=20 & emp >=5 & emp <= 9) {
            printf ( " Bom !! ") ;
        } else if ( vit >40 & derr >=0 & derr <=10 & emp >=0 & emp <=4 ) {
            printf ( " Ruim!! ") ;
        }else{
             printf( " Fora do padrao !!") ;
        }
    }
}
