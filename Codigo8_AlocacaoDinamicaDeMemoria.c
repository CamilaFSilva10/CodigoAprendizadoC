//uma estrutura dedados pode ser armazenado tanto estaticamente(vetor, matriz, ...), quanto de forma dinamica (pilhas, filas, arvores ...); acontece com o código ja em execução;
//nó = tipo uma struct, é um bloco alocado dinamicamente na area de heap
//função malloc = responsavel por alocar um bloco de dados na area de heap... Ex.: p = malloc(número de bytes); (dentro da biblioteca stdlib)
//função free = libera os bytes alocados para um nó de memoria, devolvendo-os ao controle do S.O.(dentro da biblioteca stdlib)

//nó, guarda um dado de um tipo qualquer, nesse exemplo, o typedef struct nao consegue entrar...
//struct acontece na area de globais, ja typedef é area 'normal';
struct no //nó
{
    int dado; //offset 0 Bytes
    //ponteiro de ligação para apontar para outro nó, tipo uma funçao recursiva, aponta para outra parte da memória que tenha outro nó
    struct no *ligacao; //offset 2 Bytes
};

#include <stdio.h>
#include <stdlib.h>

main()
{
    struct no *p1,*p2;
    int soma;

    printf("Alocando o primeiro no na area de heap...\n");

    //malloc = aloca um lugar na area de heap do tamanho da struct nó (do tamanho do nó)
    //cast  (struct no*)   = força o malloc a arrumar a struct nó;
    //chama S.O., aloca, organiza e devolve o endereço para o ponteiro p1;
    p1 = (struct no*) malloc(sizeof(struct no));
    //se voltar null é pq nao tinha memoria, má alocação;
    if(p1 == NULL){
        printf("Nao ha memoria suficiente...\n");
        exit(1);
    }
    printf("Endereço para onde o ponteiro P1 aponta na area de heap: %d\n", p1);

    //alocando nó dnv...
    p2 = (struct no*) malloc(sizeof(struct no));
    if(p2 == NULL){
        printf("Nao ha memoria suficiente...\n");
        exit(1);
    }
    printf("Endereço para onde o ponteiro P2 aponta na area de heap: %d\n\n", p2);

    //se nao é ponteiro(se for variavel normal) é ponto para chegar aos dados da struct, se é ponteiro usa -> (aponta)...
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

    soma = p1->dado + p1->ligacao->dado; //p1->ligacao->dado é mesma coisa de p2->dado;
    printf("Soma de P1 e P2: %d\n\n", soma);

    //devolvendo as alocações para o S.O., após isso não teremos mais acesso ao que esta nelas...
    free(p1);
    free(p2);
    p1 = NULL;
    p2 = NULL;
}
