#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    char caractere;

    printf("Informe um caractere:");
    scanf("%c",&caractere);

    if(caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u')
    {
    printf("letra eh uma vogal minuscola");
    }else{
        if (caractere=='A'||caractere=='E'||caractere=='I'||caractere=='O'||caractere=='U') {
            printf( "Letra é uma vogal maiscula");
        }else
        printf("letra eh diferente de vogal");
         }

}
