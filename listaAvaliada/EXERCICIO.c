#include <stdio.h>

main()

{
    float valor, valorComJuros, valorFinal ;

    printf (" Digite valor da prestação:\n");
    scanf ("%f",&valor);

    valorComJuros = valor*1.1;
    printf ("Valor com juros: %f", valorComJuros);

    valorFinal= valorComJuros*0.1;
    printf ("Valor final : %f", valorFinal);


}
