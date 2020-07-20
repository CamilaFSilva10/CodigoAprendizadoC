#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int i = 0, ataque1 = 0, ataque2 = 0;
    char* nome1 = 0, nome2 = 0, elemento [150];

    printf("\nBem vindo!");
    printf("\nCadastre seu pokemon para batalha");

    printf("\nDigite o nome do pokemon 1: ");
    scanf("%s", &nome1);

    printf("\nDigite o elemento do pokemon: ");
    scanf("%s", &elemento);

    printf("\nDigite a força de ataque do pokemon: ");
    scanf("%d", &ataque1);

    printf("\nDigite o nome do pokemon 2: ");
    scanf("%s", &nome2);

    printf("\nDigite o elemento do pokemon: ");
    scanf("%s", &elemento);

    printf("\nDigite a força de ataque do pokemon: ");
    scanf("%d", &ataque2);

    if (ataque1 > ataque2 ){
        printf("\nO %s é mais forte do que %s", nome1, nome2);
    }else{
        printf("\nO %s é mais forte do que %s", nome2, nome1);
    }
}
