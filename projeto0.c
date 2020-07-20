#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int idade;
    char* nome[10];

    printf("digite seu nome:");
    scanf("%s", &nome);

    printf("digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 17){

        printf("O nome armazenado foi: %s, idade: %d", nome, idade);

    }else{

        printf("%s, %d: voce e menor de idade", nome, idade);
    }

    return 0;
}
