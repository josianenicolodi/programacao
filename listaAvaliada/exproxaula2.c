/* 2. Um comerciante cobra 10% de acréscimo para cada prestação em atraso e depois dá 10% de desconto sobre esse valor. Assim,

2.1.    Faça um programa que solicite o valor da prestação em atraso e apresente o valor final a pagar.

2.2.    Preencha o quadro abaixo com a saída da execução do seu programa, de acordo os valores informados para prestação:

Valor da Prestação

Saída

R$ 875,50 ; valor :756.95



R$ 5.000,00 valor :4450,00



R$ 100,00 valor 89,00



2.3.    Essa política de valor da prestação em atraso traz lucro ou prejuízo ao comerciante? Por quê?
Traz prejuizo. Pois como o valor o valor aumenta com o juros, o valor de desconto aumenta, diminuindo o valor final.

*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
    float valor,valorComJuros,valorFinal;

    //Declarar Variavel para Guardar o Valor com o Juros
// 2.1.    Faça um programa que solicite o valor da prestação em atraso e apresente o valor final a pagar.
        printf("Digite o valor da prestação:\n");
        scanf("%f",&valor);

        //Calcular o Juros e guardar o valor + juros

        valorComJuros = (valor*10/100)+valor;
        valorFinal = valor - (valorComJuros*10/100);

        printf("O valor da parcela : %.2f\n",valor);
        printf("Valor com juros: %.2f\n",valorComJuros);
        // %.2f para limitar numero de casas decimais
        printf("Valor final: %.2f\n",valorFinal);


}
