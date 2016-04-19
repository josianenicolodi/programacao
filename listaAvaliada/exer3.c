/*
    3. Faça um programa em C que leia três notas de um aluno, entre 0 e 10 com casas decimais, e se o aluno realizou todos os exercícios de aula. A partir desses dados:

- calcule e informe a média

- encontre e informe a maior nota

- encontre e informe a menor nota

- calcule e informe a média sem a maior nota

- calcule e informe a média com 1,0 ponto a mais, caso ele tenha feito todos os exercícios. Neste caso, se o valor ultrapassar 10, a média deve ficar em 10,0.


*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    float n1,n2,n3,maior,menor,media,mediasem;
    int realizou;
    //Ler 3 notas
    printf("Digite a nota 1:\n");
    scanf("%f",&n1);

    printf("Digite a nota 2:\n");
    scanf("%f",&n2);

    printf("Digite a nota 3:\n");
    scanf("%f",&n3);
    //ler se realizou todos exercicios
    printf("Digite 1 se realizou todos exercicios\n");
    scanf("%d",&realizou);

    //calcule e informe a média
    printf("A media: %f\n", (n1+n2+n3)/3);

    //encontre e informe a maior nota

    if (n1 > n2){
        maior = n1;
        menor = n2;

    }else{
        maior = n2;
        menor = n1;
    }
    if(maior < n3){
        maior = n3;
    }
    if (menor > n3){
        menor = n3;
    }

    printf("Maior nota %f\n",maior);

    //encontre e informe a menor nota
    printf("Menor nota %f\n",menor);

    //calcule e informe a média sem a maior nota
    mediasem = ( (n1+n2+n3)-maior )/2;
    printf("Media sem a mior nota: %f\n",mediasem);

    //calcule e informe a média com 1,0 ponto a mais, caso ele tenha feito todos os exercícios.
    //Neste caso, se o valor ultrapassar 10, a média deve ficar em 10,0.

    if(realizou == 1){
        media = ((n1+n2+n3)/3);
        media = media + 1;

        if(media > 10){
            media = 10;
        }
        printf("Media %f, com 1 ponto pelos exercicios\n",media);
    }else{
        printf("Nao realizou todos exercicioa");
    }


}
