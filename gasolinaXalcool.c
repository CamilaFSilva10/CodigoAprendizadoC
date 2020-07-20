#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    float valorA, valorG, divisao;

    printf("\nBem vindo!");

    printf("\nDigite o valor da gasolina: ");
    scanf("%f", &valorG);

    printf("\nDigite o valor do álcool: ");
    scanf("%f", &valorA);

    divisao = valorA / valorG;

    if(divisao > 0.7){
        printf("\nO abastecimento com a gasolina irá compensar mais");
    }else{
        printf("\nO abastecimento com o álcool irá compensar mais");
    }

}
