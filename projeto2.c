#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, nota3, nota4, total, media;
    char* nome[10];

    printf("digite seu nome:");
    scanf("%s", &nome);

    printf("nota do primeiro bimestre:");
    scanf("%d", &nota1);

    printf("nota do segundo bimestre:");
    scanf("%d", &nota2);

     printf("nota do terceiro bimestre:");
    scanf("%d", &nota3);

     printf("nota do quarto bimestre:");
    scanf("%d", &nota4);

    total = nota1 + nota2 + nota3 + nota4;
    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf ("total = %d", total);
    printf("\nA sua media e: %d", media);

    if(total > 60){
        printf("\nvoce foi aprovado");
    }else{
        printf("\nvoce foi reprovado");
    }

    return 0;
}
