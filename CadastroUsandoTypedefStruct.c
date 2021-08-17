#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao(int n), i, escolha, numeroCadastros = 0;
char nomes(char n), sn;


typedef struct{
   char nome[30];
   char endereco[50];
   int telefone;
   int nascimento;
} cadastro;

cadastro cliente[100];

main()
{
    int i=0, n, encontrou = 0, c;
    char nomes[100][10];

    setlocale(LC_ALL, "Portuguese");

    Menu();

    do{
        switch (escolha){
        case 1:
            criarCadastro();
            break;

        case 2:
            ConsultaGeral();
            break;

        case 3:
            printf("\nFinalizando!!!\n\n");
            return 0;
            break;
        }
    }while(escolha!=4);
}

int Menu(){

    printf("\nMenu: ");
    printf("\n1 - Fazer o cadastro: ");
    printf("\n2 - Ir para o relatório.");
    printf("\n3 - Sair.");

    printf("\n\nQual opção deseja? ");
    scanf("%d", &escolha);
    return escolha;
}

void criarCadastro()
{
    for(i=0;i<=100;i++){
                printf("\nQual seu nome: ");
                fflush(stdin);
                gets(cliente[i].nome);

                printf("Qual seu endereco: ");
                fflush(stdin);
                gets(cliente[i].endereco);

                printf("Qual seu telefone (favor digitar sem espaços EX.:123456789): ");
                fflush(stdin);
                scanf("%d",&cliente[i].telefone);

                printf("Qual sua data de nascimento (favor digitar sem espaços EX.:DDMMAA): ");
                fflush(stdin);
                scanf("%d",&cliente[i].nascimento);

                printf("\n\nCliente %d\n Nome: %s\n Endereço: %s\n Telefone: %i\n Nascimento: %i\n\n", i, cliente[i].nome, cliente[i].endereco, cliente[i].telefone, cliente[i].nascimento);

                numeroCadastros++;
                printf("\n\nDeseja continuar o cadastro? Digite s para sim e n para não: ");
                fflush(stdin);
                scanf("%c", &sn);

                if(sn == 'n'){
                    printf("\nok\n");
                    system("pause");
                    system("cls");
                    return Menu();
                }else
                {
                    system("pause");
                    system("cls");
                }

            }
}

void ConsultaGeral()
{

    for(i = 0; i < numeroCadastros; i++)
    {
        if(strcmp(cliente[i].nome, " ") == 0)
        {
            printf("Sem mais registros");
            system("pause");
        }else
        {
            printf("\n\nCliente %d\n Nome: %s\n Endereço: %s\n Telefone: %i\n Nascimento: %i\n\n", i, cliente[i].nome, cliente[i].endereco, cliente[i].telefone, cliente[i].nascimento);

        }
    }

    system("pause");
    system("cls");
    return Menu();
}
