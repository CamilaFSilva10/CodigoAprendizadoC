#include <stdio.h>

int main(){

    int i = 0, nota = 0, soma = 0, total = 0;

    while (i < 4){

        printf("\nDigite sua nota: ");
        scanf("%d", &nota);

        soma = soma + nota;
        total = soma;

        i = i + 1;
    }
    printf("\ntotal: %d", total);
    return 0;
}
