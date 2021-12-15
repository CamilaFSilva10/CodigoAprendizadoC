//uma estrutura dedados pode ser armazenado tanto estaticamente(vetor, matriz, ...), quanto de forma dinamica (pilhas, filas, arvores ...); acontece com o c�digo ja em execu��o;
//n� = tipo uma struct, � um bloco alocado dinamicamente na area de heap
//fun��o malloc = responsavel por alocar um bloco de dados na area de heap... Ex.: p = malloc(n�mero de bytes); (dentro da biblioteca stdlib)
//fun��o free = libera os bytes alocados para um n� de memoria, devolvendo-os ao controle do S.O.(dentro da biblioteca stdlib)

//n�, guarda um dado de um tipo qualquer, nesse exemplo, o typedef struct nao consegue entrar...
//struct acontece na area de globais, ja typedef � area 'normal';
struct no //n�
{
    int dado; //offset 0 Bytes
    //ponteiro de liga��o para apontar para outro n�, tipo uma fun�ao recursiva, aponta para outra parte da mem�ria que tenha outro n�
    struct no *ligacao; //offset 2 Bytes
};

#include <stdio.h>
#include <stdlib.h>

main()
{
    struct no *p1,*p2;
    int soma;

    printf("Alocando o primeiro no na area de heap...\n");

    //malloc = aloca um lugar na area de heap do tamanho da struct n� (do tamanho do n�)
    //cast  (struct no*)   = for�a o malloc a arrumar a struct n�;
    //chama S.O., aloca, organiza e devolve o endere�o para o ponteiro p1;
    p1 = (struct no*) malloc(sizeof(struct no));
    //se voltar null � pq nao tinha memoria, m� aloca��o;
    if(p1 == NULL){
        printf("Nao ha memoria suficiente...\n");
        exit(1);
    }
    printf("Endere�o para onde o ponteiro P1 aponta na area de heap: %d\n", p1);

    //alocando n� dnv...
    p2 = (struct no*) malloc(sizeof(struct no));
    if(p2 == NULL){
        printf("Nao ha memoria suficiente...\n");
        exit(1);
    }
    printf("Endere�o para onde o ponteiro P2 aponta na area de heap: %d\n\n", p2);

    //se nao � ponteiro(se for variavel normal) � ponto para chegar aos dados da struct, se � ponteiro usa -> (aponta)...
    p1->dado = 10;
    p1->ligacao = NULL;
    p2->dado = 20;
    p2->ligacao = NULL;

    printf("\nENDERECO PARA ONDE O CAMPO DE LIGACAO DO NO, APONTADO POR PELO\n");
    printf("Ponteiro P1: %d\n",p1->ligacao);
    printf("Ponteiro P2: %d\n\n",p2->ligacao);

    p1->ligacao = p2;
    p2->ligacao = p1;

    printf("\nENDERECO PARA ONDE O CAMPO DE LIGACAO DO NO, APONTADO POR PELO\n");
    printf("Ponteiro P1: %d\n",p1->ligacao);
    printf("Ponteiro P2: %d\n\n",p2->ligacao);

    soma = p1->dado + p1->ligacao->dado; //p1->ligacao->dado � mesma coisa de p2->dado;
    printf("Soma de P1 e P2: %d\n\n", soma);

    //devolvendo as aloca��es para o S.O., ap�s isso n�o teremos mais acesso ao que esta nelas...
    free(p1);
    free(p2);
    p1 = NULL;
    p2 = NULL;
}
