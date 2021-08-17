#include <stdio.h>

int main(){

    int aux=1, n, n2, mult=1, aux2=1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nNumeros entre 0 e o numero digitado...");
    while(aux < n){
        printf("\n%d", aux);

        aux++;
    }
    printf("\n==============================");

    printf("\n\nNumeros impares entre 0 e o numero digitado...");
    while(n!=0){
        if(n%2==1){
            printf("\n%d", n);
        }
        n--;
    }
    printf("\n==============================");


    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &n2);

    printf("\nTabuada do numero digitado...");
    while(aux2<=10){
        mult = n2 * aux2;
        printf("\n%d", mult);

        aux2++;
    }

}
