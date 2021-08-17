#include <stdio.h>

main(){

    int n = 0, mult = 1;

    printf("Calculando a multiplicacao dos numeros pares entre 0 e o numero digitado...");
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    while(n > 0){
        if(n % 2 == 0){
           mult = mult * n;
        }
        n--;
    }

     printf("\nO produto dos numeros pares sao: %d\n\n",mult);
}
