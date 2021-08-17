#include <stdio.h>
#include <locale.h>

int main(){

    int camilaLado1, camilaLado2, camilaLado3;
    setlocale(LC_ALL, "Portuguese");

    printf("Classificando triangulos:");
    printf("\n--------------------------");

    printf("\nDigite o valor de um lado do tri�ngulo: ");
    scanf("%d", &camilaLado1);

    printf("\nDigite o valor de outro lado do tri�ngulo: ");
    scanf("%d", &camilaLado2);

    printf("\nDigite o valor do ultimo lado do tri�ngulo: ");
    scanf("%d", &camilaLado3);

    if((camilaLado1==0) || (camilaLado2==0) || (camilaLado3==0)){

        printf("\nOs lados do tri�ngulo nao podem receber o valor zero\n\n");

    }else if(camilaLado1==camilaLado2 && camilaLado1==camilaLado3){

        printf("\nO tri�ngulo de lado %d, %d e %d �: EQUIL�TERO\n\n", camilaLado1, camilaLado2, camilaLado3);

    }else if((camilaLado1==camilaLado2 && camilaLado1!=camilaLado3) || (camilaLado1!=camilaLado2 && camilaLado1==camilaLado3) || (camilaLado1!=camilaLado2 && camilaLado2==camilaLado3)){

        printf("\nO tri�ngulo de lado %d, %d e %d �: IS�CELES\n\n", camilaLado1, camilaLado2, camilaLado3);

    }else{

        printf("\nO tri�ngulo de lado %d, %d e %d �: ESCALENO\n\n", camilaLado1, camilaLado2, camilaLado3);
    }

    return 0;
}
