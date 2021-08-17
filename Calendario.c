#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int mes, ano, dia, totalDias = 0, mesMax;
    setlocale(LC_ALL,"Portuguese");

    printf(" ================\n");
    printf("| CALENDARIO PUC |\n");
    printf(" ================\n");
    printf("\nDigite uma data (exemplo: dd/mm/aa): ");
    scanf("%d/ %d/ %d", &dia, &mes, &ano);

    mesMax = 12;

    if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
        totalDias = 31;

    }else if( (mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)){
        totalDias = 30;

    }else if(mes == 2){
        if((ano % 4 == 0) && (ano%100 != 0) && (ano % 400 != 0)){
            totalDias = 29;

        }else{
            totalDias= 28;
        }
    }else{
        printf("Esse mês não existe\n\n");
    }

    printf("\nTotal de dias do mês: %d\n", totalDias);

    if(dia < totalDias){
        dia++;

    }else{
        dia = 1;

        if(mes == 12){
            mes = 1;
            ano++;

        }else{
            mes++;
        }
    }
    printf("\nData seguinte: %d %d %d\n\n", dia, mes, ano);

}
