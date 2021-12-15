#include <stdio.h>
#include <stdlib.h>

//Parametro por referencia, recebe faixa de valor e retorna por referencia, ponteiro;
//funcao void nao ocupa memoria na area de globais
void geraEvento(int faixa, int *n);

int main()
{
    int f, r;
    //primeira linha executavel;
    printf("Digite a faixa de valores = ");
    scanf("%d",&f);

    //1- troca de contexto: interromper a execução do modulo chamador;
    //2- alocar o modulo chamado na memória;
    //3- transferir o contexto do modulo chamador para o modulo chamado;
    //4- executar o modulo chamado;
    //5- desalocar da memoria o modulo chamado que acabou de ser executado;
    //6- devolver o contexto para o modulo chamador.
    geraEvento(f, &r);
    //OBS: chamada direta apenas quando a função for void ...
    printf("Numero gerado = %d\n\n", r);
}

void geraEvento(int faixa, int *n)
{
    srand(clock());
    *n = rand() % faixa;
}


//int = 2; float = 4;
