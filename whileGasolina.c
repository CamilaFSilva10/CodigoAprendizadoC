#include <stdio.h>

int main(){

    int i = 0;
    float valor = 0, divisao = 0;

    printf("\nbem vindo!");

    while(i < 4){

        printf("\ndigite o valor: ");
        scanf("%f", valor);

        divisao = valor / valor;

        i = i + 1;
    }
    if (divisao < 0.7){
        printf("\nO abastecimento com a gasolina irá compensar mais");
    }else{
        printf("\nO abastecimento com o álcool irá compensar mais");
    }
    return 0;
}
