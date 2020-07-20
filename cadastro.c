#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    char* nome, email, senha [100];
    int celular;

    printf("\nBem vindo!");

    printf("\nDigite seu nome:");
    scanf("%s", &nome);

    printf("\nDigite seu email:");
    scanf("%s", &email);

    printf("\nDigite seu telefone:");
    scanf("%d", &celular);

    printf("\nCrie uma senha:");
    scanf("%s", &senha);

    printf("\nSeu cadastro foi efetudo com sucesso");
}
