//stack -> pilha
//Estrutura de dados pilha:
//1 - Pilha - uma pilha é uma estrutura de dados que pode ser construida em memoria principal atravez da alocação dinamica de seus nós.
//2 - Lifo (last in first out) - a pilha deve ser construida observando a politica last in first out, onde um ponteiro observador controla as inserções de nós SEMPRE no topo da pilha
//3 - Topo - todo o controle da pilha é feita no topo. O topo é um ponteiro do topo da pilha deve armazenar o endereço nulo, quando a pilha tiver vazia, ou o endereço do nó mais recente que foi empilhado.

//operações na estrutura de dados pilha: 1- função para criar a pilha
                                        //2- função para empilhar
                                        //3- função para desempilhar
                                        //4- função para exibir a pilha
                                        //5- funcao para ver se a pilha esta vazia
                                        //6- funcão para retornar o valor do topo da pilha.

//OBS.: toda vez qye uma funcao modificar a estrutura de daos ela sera passada por referencia, se nao modifica a estrutura será passa por valor.

#include <stdio.h>
#include <stdlib.h>

struct no
{
    int        dado; // offset 0 (zero)
    struct no *prox; // offset 2 (dois)
};

typedef struct
{
    struct no *topo;
} pilha;

void cria(pilha *s);
int  empilha(pilha *s, int d);
int  desempilha(pilha *s, int *d);
int  estaVazia(pilha s);
void mostra(pilha s);
int  topo(pilha s);
int  contaNos(pilha s);

main()
{
    pilha p;
    int n, i;

    cria(&p);

    srand(time(NULL));
    printf("Gerando dados e armazenando na pilha...\n");
    for (i=0; i < 3; i++)
    {
         n = rand() % 50;
         printf("Numero gerado = %d\n", n);
         empilha(&p,n);
    }
    printf("\nApresentando os dados dos nos da pilha...\n");
    mostra(p);

    printf("\nRemovendo o no do topo da pilha...\n");

    if (!estaVazia(p))
    {
        i = desempilha(&p,&n);
        if (i != 0)
            printf("Dado do no que foi desempilhado = %d\n", n);
        else
            printf("Falha ao desempilhar...\n");
    }

    if (!estaVazia(p))
    {
        i = desempilha(&p,&n);
        if (i != 0)
            printf("Dado do no que foi desempilhado = %d\n", n);
        else
            printf("Falha ao desempilhar...\n");
    }

    if (!estaVazia(p))
    {
        i = desempilha(&p,&n);
        if (i != 0)
            printf("Dado do no que foi desempilhado = %d\n", n);
        else
            printf("Falha ao desempilhar...\n");
    }

    printf("\nApresentando os dados dos nos da pilha...\n");
    mostra(p);
    printf("\nTotal de nos na pilha = %d\n\n", contaNos(p));

    empilha(&p,30);
    empilha(&p,40);
    empilha(&p,50);
    empilha(&p,60);
    empilha(&p,70);

    printf("\nApresentando os dados dos nos da pilha...\n");
    mostra(p);

    printf("\nTotal de nos na pilha = %d\n\n", contaNos(p));

    if (!estaVazia(p))
    {
        n = topo(p);
        printf("Dado que esta no topo da pilha = %d\n\n", n);
    }
}

void cria(pilha *s)
{
    s->topo = NULL;
}

int  empilha(pilha *s, int d)
{
    struct no *aux;

    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;

    aux->dado = d;
    aux->prox = s->topo;
    s->topo = aux;
    return 1;
}

void mostra(pilha s)
{
    struct no *aux;

    aux = s.topo;
    if (aux == NULL)
        printf("\nPilha vazia...\n\n");
    else
    {
        while (aux != NULL)
        {
            printf("Dado = %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

int  desempilha(pilha *s, int *d)
{
    struct no *aux;

    if (s->topo == NULL)
    {
        printf("\nPilha vazia! Remocao nao efetuada!\n\n");
        return 0;
    }

    aux = s->topo;
    *d = aux->dado;
    s->topo = s->topo->prox;
    aux->dado = 0;    // Garbagge Collection
    aux->prox = NULL; // Garbagge Collection
    free(aux);
    return 1;
}

int  estaVazia(pilha s)
{
    if (s.topo == NULL)
        return 1;
    return 0;
}

int  topo(pilha s)
{
    return s.topo->dado;
}

int contaNos(pilha s)
{
    struct no *aux;
    int contador = 0;

    if (s.topo == NULL)
        return 0;

    aux = s.topo;
    while (aux != NULL)
    {
        contador++;
        aux = aux->prox;
    }
    return contador;
}



