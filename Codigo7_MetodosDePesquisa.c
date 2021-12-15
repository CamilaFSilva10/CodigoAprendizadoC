//principais metodos de pesquisa:
//sequencial: consiste em percorrer um conjunto de dados (que nao necessita de pre ordenação), sequencial, a partir do primeiro elemento; vai de elemento por elemento do vetor "olhando" se o dado esta naquela posição;
//binaria: utiliza-se a tecnica de pivotação para dividir o conjunto de dados, obrigatoriamente ordenado, em duas partes; essa divisão ocorre, recursivament, até que se localize um determinado dado;

#include <stdio.h>
#include <stdlib.h>

//int pesquisaSequencial(int vet[],int tam; int dado);
int pesquisaBinaria(int vet[], int dado, int inicio, int fim);
void bubbleSort(int vet[], int tam);

int main()
{
    int v[10]={17,3,50,21,5,11,5,45,9,34},c;
    bubbleSort(v,10);
    c = pesquisaBinaria(v,21,0,9);

    if(c == -1)
        printf("Dado não encontrado...\n\n");
    else
        printf("Dado encontrado na posicao %d\n\n", c);

}

int pesquisaBinaria(int vet[], int dado, int inicio, int fim)
{//precisa da ordenação pois vai depender se o dado pesquisado é maior ou menor que o pivo(um numero do meio);

    int meio = (inicio + fim) / 2;
    //se o dado que estiver no meio for igual ao dado procurado, ja volta o meio
    if(vet[meio] == dado)
        return(meio);
    //se o inicio for maior que o fim, significa que não tem como dividir mais o vetor, então encerra o prog. e retorna -1.
    if(inicio >= fim)
        return -1;
    //se o dado pesquisado for menor que o dado que estiver no meio do vetor, diminui 1 posição do meio (que na hr da pesquisa irá ter outro valor no vet[meio]) e chama de novo a função.
    if(dado < vet[meio])
        pesquisaBinaria(vet,dado,inicio,meio-1);
    //senão for antes que o valor vet[meio], adiciona 1 no meio que na hr de dividir irá ter outro valor para fazer a comparação;
    else
        pesquisaBinaria(vet,dado,meio+1,fim);
}

void bubbleSort(int vet[], int tam)
{
    int i,j,aux;

    for(i=0; i<tam-1 ;i++){
        for(j=tam-1; j>i; j--){
            if(vet[j] < vet[j-1]){
                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1]=aux;
            }
        }
    }
}

//int pesquisaSequencial(int vet[],int tam; int dado)
//{//não precisa estar ordenado...
//int i;

//    for(i = 0; i < tam; i++){
//        if(vet[i] == dado)
//            return i;
//    }
//    return -1;
//}
