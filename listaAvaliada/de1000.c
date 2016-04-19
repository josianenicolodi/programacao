#include <stdio.h>

main()
{
    int num;
    int centena ;
    int dezena ;
    int unidade ;

    printf("Escreva um numero de 0 ate 999:\n");
    scanf("%d",&num);

    if(num < 1000 && num > 0)
    {
        if(num > 99){
            centena = num / 100;
            dezena = (num - (centena * 100)) /10 ;
            unidade = num - ( (dezena * 10) + (centena * 100) );

            printf("Centena: %d\n", centena);
            printf("Dezena: %d\n", dezena);
            printf("Unidade: %d\n", unidade);
        }else if (num > 9){
            dezena = num  / 10 ;
            unidade = num - (dezena * 10) ;

            printf("Dezena: %d\n", dezena);
            printf("Unidade: %d\n", unidade);
        }else{
             printf("Unidade: %d\n", num);
        }

    }else{
        printf("Numero digitado Invalido!!\a\n");
    }
}
