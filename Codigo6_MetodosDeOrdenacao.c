//Principais métodos de ordenação...
//BubbleSort: compara o elemento n com o n-1 e os troca de posição, caso o n seja menor do que o n-1.(mais conhecido);
//QuickSort: baseia-se na escolha de um elemento pivô; a partir da posição 0, procura-se um elemento maior do que x;
//heapSort: procura um elemento chave e procura o lugar correto dele;
//inserção; utiliza o metodo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int vet[], int tam);
void bubbleSortComStrings(char vet[][10], int tam);

int main()
{
    int v[4]={31,8,21,15},c;
    char s[4][10]={"Maria", "Ana", "Jose", "Beatriz"};

    printf("Apresentando o vetor de inteiros nao ordenado: ");
    for(c=0;c<4;c++){
        printf("%4d", v[c]);
    }
    printf("\n\n");

    bubbleSort(v,4);

    printf("Apresentando o vetor de inteiros ordenado: ");
    for(c=0;c<4;c++){
        printf("%4d", v[c]);
    }
    printf("\n\n");

    printf("Apresentando o vetor de strings nao ordenado: ");
    for(c=0;c<4;c++){
        printf("%12s", s[c]);
    }
    printf("\n\n");

    bubbleSortComStrings(s,4);

    printf("Apresentando o vetor de strings ordenado: ");
    for(c=0;c<4;c++){
        printf("%12s", s[c]);
    }
    printf("\n\n");

}

void bubbleSort(int vet[], int tam)
{
    int i,j,aux;

    for(i=0; i<tam-1 ;i++){
        for(j=tam-1; j>i; j--){
            if(vet[j] < vet[j-1]){
                aux = vet[j]; vet[j] = vet[j-1]; vet[j-1]=aux;
            }
        }
    }
}

void bubbleSortComStrings(char vet[][10], int tam)
{
    int i,j;
    char aux;

    for(i=0; i<tam-1 ;i++){
        for(j=tam-1; j>i; j--){
            if(strcmp(vet[j],vet[j-1]) < 0){
                strcpy (aux , vet[j]);
                strcpy (vet[j], vet[j-1]);
                strcpy (vet[j-1], aux);
            }
        }
    }
}

