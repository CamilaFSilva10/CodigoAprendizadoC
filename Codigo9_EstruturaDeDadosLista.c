#include <stdio.h>
#include <stdlib.h>

struct no
{
    struct no *ant;
    int dado;
    struct no *prox;
};

typedef struct
{
    struct no *inicio;
    struct no *fim;
} listacircularde;

void cria(listacircularde *q);
int  insere(listacircularde *q, int d);
void mostra(listacircularde q, int sentido);
int  estaVazia(listacircularde q);

int  retira(listacircularde *q, int d);
int  insereOrdenado(listacircularde *q, int d);

main()
{
    listacircularde lista;

    cria(&lista);

    insere(&lista,10);
    insere(&lista,6);
    insere(&lista,20);
    insere(&lista,15);
    insere(&lista,45);
    insere(&lista,89);
    insere(&lista,5);
    if (!estaVazia(lista))
    {
        mostra(lista,0);
        printf("\n");
        mostra(lista,1);
        printf("\n");
    }
    else
        printf("Lista vazia...\n\n");
}

void cria(listacircularde *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

int  insere(listacircularde *q, int d)
{
    struct no *aux;
    aux = (struct no*) malloc(sizeof(struct no));
    if (aux == NULL)
        return 0;
    if (q->inicio == NULL)
    {
        aux->dado = d;
        q->inicio = aux;
        q->fim = aux;
        aux->prox = q->inicio;
        aux->ant = q->fim;
        return 1;
    }
    aux->dado = d;
    aux->ant = q->fim;
    q->fim->prox = aux;
    aux->prox = q->inicio;
    q->inicio->ant = aux;
    q->fim = aux;
    return 1;
}

void mostra(listacircularde q, int sentido)
{
    struct no *aux;
    if (q.inicio == NULL)
        printf("Lista vazia...\n\n");
    else
    {
        if (sentido == 0)
        {
            aux = q.inicio;
            do
            {
                printf("%d-%d ", aux->dado, aux->prox->dado);
                aux = aux->prox;
            } while (aux != q.inicio);
        }
        else
        {
            aux = q.fim;
            do
            {
                printf("%d-%d ", aux->dado, aux->ant->dado);
                aux = aux->ant;
            } while (aux != q.fim);
        }
    }
}

int  estaVazia(listacircularde q)
{
    if (q.inicio == NULL)
        return 1;
    return 0;
}

int  retira(listacircularde *q, int d)
{

}

int  insereOrdenado(listacircularde *q, int d)
{

}

