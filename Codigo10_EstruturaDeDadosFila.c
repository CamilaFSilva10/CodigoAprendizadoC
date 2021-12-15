#include <stdio.h>
#include <stdlib.h>

struct no
{
    int dado;
    struct no *prox;
};

typedef struct
{
    struct no *inicio;
    struct no *fim;
} fila;

void cria(fila *q);
int  insere(fila *q, int d);
int  retira(fila *q, int *d);
int  estaVazia(fila q);
void mostra(fila q);
int  inicio(fila q);
int  procura(fila q, int d);

main()
{
    fila f;
    int n, i;

    cria(&f);

    printf("Inserindo na fila...\n\n");

    insere(&f,2);
    insere(&f,29);
    insere(&f,9);
    insere(&f,20);

    printf("Mostrando os dados dos nos da fila...\n\n");
    mostra(f);
    printf("\n\n");

    i = procura(f,9);
    if (i == 0)
        printf("\nDado nao encontrado...\n\n");
    else
        printf("\nDado encontrado...\n\n");

    while (!estaVazia(f))
    {
        printf("Dado do no que esta no inicio da fila = %d\n\n",
               inicio(f));
        retira(&f,&n);
    }

    if (estaVazia(f))
        printf("A fila ficou vazia...\n\n");
}

void cria(fila *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

int  insere(fila *q, int d)
{
    struct no *aux;

    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;

    aux->dado = d;
    aux->prox = NULL; // Neste ponto do código...

    if (q->inicio == NULL)
    {
        q->inicio = aux;
        q->fim = aux;
        return 1;
    }

    q->fim->prox = aux;
    q->fim = aux;
    return 1;
}

int  retira(fila *q, int *d)
{
    struct no *aux;

    if (q->inicio == NULL)
        return 0;

    aux = q->inicio;
    *d = q->inicio->dado;
    //*d = aux->dado;
    q->inicio = q->inicio->prox;
    free(aux);

    if (q->inicio == NULL)
        q->fim = NULL;

    return 1;
}

int  estaVazia(fila q)
{
    if (q.inicio == NULL)
        return 1;
    return 0;
}

void mostra(fila q)
{
    struct no *aux;

    if (q.inicio == NULL)
        printf("\nFila vazia...\n\n");
    else
    {
        aux = q.inicio;
        while (aux != NULL)
        {
            printf("%d ", aux->dado);
            aux = aux->prox;
        }
    }
}

int  inicio(fila q)
{
    if (q.inicio != NULL)
        return q.inicio->dado;
    return -1;
}

int  procura(fila q, int d)
{
    struct no *aux;

    if (q.inicio == NULL)
        return 0;

    aux = q.inicio;
    while (aux != NULL)
    {
        if (aux->dado == d)
            return 1;
        aux = aux->prox;
    }

    return 0;
}
