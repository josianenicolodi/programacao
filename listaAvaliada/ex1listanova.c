
 #include <stdio.h>

main ()
{
    int n1,n2,n3,maior,menor;

    printf("Digite um numero:\n");
    scanf("%d",&n1);
    printf("Digite outro numero:\n");
    scanf("%d",&n2);
    printf("Digite outro numero:\n");
    scanf("%d",&n3);

    if(n1>n2) {
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
            }
      if (maior < n3){
            maior = n3;
        }

      if( menor>n3 ){
        menor=n3;
      }

    printf (" Maior é %d:\n",maior);
    printf ("Menor é %d\n",menor);

    if (n1 = n2 = n3); {
        printf("%d , %d, %d iguais",n1,n2,n3);
    }   else {
        if (n1=n2);{
            printf(" %d e %d iguais"n1,n2);
            } else {
            if (n2=n3);{
                printf(" %d e %d são iguais",n2,n3);
            } else printf( " %d e %d iguais",n1,n3)

            }
        }
    }


