/* 2. Faça um programa em C que lê a idade de uma pessoa (entre 0 e 100 anos)
e classifique a mesma na faixa etária de acordo com a tabela a seguir:


Faixa Etária	Idade
1ª	Até 15 anos
2ª	De 16 a 30 anos
3ª	De 31 a 45 anos
4ª	De 46 a 60 anos
5ª	Acima de 60 anos
OBS.: Não esqueça de garantir que o programa receba dados consistentes! */

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
                printf ( "Faixa etaria até 30 anos");
               }     else {
                        if ( idade >=31 && idade <=45 ) {
                        printf ( "Faixa etaria até 45 anos");
                            } else {
                                if ( idade >=46 && idade <=60 ) {
                                    printf ( "Faixa etaria até 60 anos");
                                        } else {
                                            if ( idade >=60 ) {
                                                printf ( "Faixa etaria acima anos");
                                            }
                                        }

                            }
                    }
                }
        }

