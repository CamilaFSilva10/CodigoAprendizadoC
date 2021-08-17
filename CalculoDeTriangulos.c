#include <stdio.h>
#include <locale.h>

int main(){

    int camilaLado1, camilaLado2, camilaLado3;
    setlocale(LC_ALL, "Portuguese");

    printf("Classificando triangulos:");
    printf("\n--------------------------");

    printf("\nDigite o valor de um lado do triângulo: ");
    scanf("%d", &camilaLado1);

    printf("\nDigite o valor de outro lado do triângulo: ");
    scanf("%d", &camilaLado2);

    printf("\nDigite o valor do ultimo lado do triângulo: ");
    scanf("%d", &camilaLado3);

    if((camilaLado1==0) || (camilaLado2==0) || (camilaLado3==0)){

        printf("\nOs lados do triângulo nao podem receber o valor zero\n\n");

    }else if(camilaLado1==camilaLado2 && camilaLado1==camilaLado3){

        printf("\nO triângulo de lado %d, %d e %d é: EQUILÁTERO\n\n", camilaLado1, camilaLado2, camilaLado3);

    }else if((camilaLado1==camilaLado2 && camilaLado1!=camilaLado3) || (camilaLado1!=camilaLado2 && camilaLado1==camilaLado3) || (camilaLado1!=camilaLado2 && camilaLado2==camilaLado3)){

        printf("\nO triângulo de lado %d, %d e %d é: ISÓCELES\n\n", camilaLado1, camilaLado2, camilaLado3);

    }else{

        printf("\nO triângulo de lado %d, %d e %d é: ESCALENO\n\n", camilaLado1, camilaLado2, camilaLado3);
    }

    return 0;
}
