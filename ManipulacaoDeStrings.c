#include <stdio.h>
#include <string.h>

int main(){
    char nome[50]="", palavra[20]="",
        palavra1[20]="preto", palavra2[20]="odeio",
        palavra3[20]="negrinho";
    int i, brancos=0, contadorPalavras;

    printf("Manipulando strings...\n");
    printf("======================\n");

    printf("Digite um nome com ate 20 caracteres = ");
    gets(nome);
    printf("Valor da string = %s\n", nome);
    printf("Tamanho da string = %d\n\n", strlen(nome));

    printf("Primeiro caractere da string = %c\n", nome[0]);
    printf("Ultimo caractere da string = %c\n\n", nome[strlen(nome)-1]);

    for (i=0; i < strlen(nome); i++)    {
        nome[i] = toupper(nome[i]);
        if (nome[i] == ' ')
            brancos++;
    }

    contadorPalavras = brancos + 1;
    printf("Espacos em branco = %d\n", brancos);
    printf("Total de palavras = %d\n", contadorPalavras);
    printf("Valor da string = %s\n\n", nome);


}
