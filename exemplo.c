#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Meu primeiro c�digo

/* Turma: Programa��o I
   Hor�rio: Quarta - manh� */

void main(void)
{
   int n1; //declara��o de vari�vel inteira
   float n2; //declara��o de vari�vel real

   printf("Digite um numero inteiro: "); //Escreva("Digite um numero:")
   scanf("%d",&n1); //Leia(n1)
   n1 = n1 + n1;
   printf("\tO numero lido: %d\n\a",n1);

   printf("Digite um numero real: "); //Escreva("Digite um numero:")
   scanf("%f",&n2); //Leia(n2)
   printf("\tO numero lido: %.2f\n\a",n2);
   printf("\\\n\a");
   printf("\"\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
   getch();//fun��o para aguardar intera��o do usu�rio
}
