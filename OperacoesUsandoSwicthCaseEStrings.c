#include <stdio.h>
#include <string.h>
#include <locale.h>

main(){
    int opcao, i, digitou=0;
    char frase[40]="";
    setlocale(LC_ALL,"Portuguese");

    do
    {
        system("cls");
        printf("Menu de Opcoes\n");
        printf("=============================\n");

        printf("[1] Entrada de uma frase\n");
        printf("[2] Converter para maiusculas\n");
        printf("[3] Converter para minusculas\n");
        printf("[4] Contagem de caracteres\n");
        printf("[5] Sair\n\n");
        printf("Escolha a opcao = ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
            case  1: printf("Digite uma frase: ");
            gets(frase);
            printf("A frase digitada   = %s\n\n", frase);
            digitou = 1;
            break;

            case  2: printf("Convertendo para maiusculas...\n");
            if (digitou)                     {
                    for (i=0; i < strlen(frase); i++)
                    frase[i] = toupper(frase[i]);
                    printf("Frase convertida = %s\n\n", frase);
            }else
            printf("Frase n o digitada...\n\n");
            break;

            case  3: printf("Convertendo para minusculas...\n");
            if (digitou){
                    for (i=0; i < strlen(frase); i++)
                    frase[i] = tolower(frase[i]);
                    printf("Frase convertida = %s\n\n", frase);
            }else
            printf("Frase n o digitada...\n\n");
            break;

            case  4: printf("Contando os caracteres...\n");
            if (digitou)
                printf("Tamanho da frase   %d caracteres\n\n",
                       strlen(frase));
            else
                printf("Frase n o digitada...\n\n");
                break;

            case  5: printf("Terminando...\n\n");
            break;

            default: printf("Opcao inválida...\n");

        }
        system("pause");
    }
    while (opcao != 5);

}
