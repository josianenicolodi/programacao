/* 2. Fa�a um programa em C que l� a idade de uma pessoa (entre 0 e 100 anos)
e classifique a mesma na faixa et�ria de acordo com a tabela a seguir:


Faixa Et�ria	Idade
1�	At� 15 anos
2�	De 16 a 30 anos
3�	De 31 a 45 anos
4�	De 46 a 60 anos
5�	Acima de 60 anos
OBS.: N�o esque�a de garantir que o programa receba dados consistentes! */

#include <stdio.h>

main ()

{
    int idade;

    printf ( "Digite idade:\n");
    scanf ("%d", &idade);

    if (idade <=0 && idade >100) {
        printf( "Idade invalida! Fim.");
        } else

            if ( idade >= 15) {
            printf (" Faixa etaria 15 anos ");
            } else {
                if ( idade >=16 && idade <=30 ) {
                printf ( "Faixa etaria at� 30 anos");
               }     else {
                        if ( idade >=31 && idade <=45 ) {
                        printf ( "Faixa etaria at� 45 anos");
                            } else {
                                if ( idade >=46 && idade <=60 ) {
                                    printf ( "Faixa etaria at� 60 anos");
                                        } else {
                                            if ( idade >=60 ) {
                                                printf ( "Faixa etaria acima anos");
                                            }
                                        }

                            }
                    }
                }
        }

