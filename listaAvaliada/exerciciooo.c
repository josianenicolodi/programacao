#include <stdio.h>
#include <stdlib.h>

 main () {

 int idade;



 printf("Digite sua idade:\n\n");
 scanf("%d",&idade);
 if (idade > 0 && idade <= 100){

 if(idade <= 15 ){
 printf("Adolescente!\n");
 }else if (idade >= 16 & idade <=30){
 printf("Adulto.\n");
 }else if (idade>=31 & idade<=45){
 printf("Adulto B.\n");
 }else if (idade>=46 & idade<=60) {
 printf ("Pleno.\n");
 }else if (idade>60){
 printf("Idoso\n");
 }

 } else{
 printf("Idade invalida!!\n\a");
 }
 }
