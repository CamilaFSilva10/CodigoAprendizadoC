//estrategia de programação que permite repetir um bloco de codigo sem o uso de estrutura de repetição

//ex: tipo identificador(parametros){
//      identificador(arumentos
//  }

#include <stdio.h>
#include <stdlib.h>

//todo identificador da funcao que nao é void vai pra memoria como uma variavel, ou seja, *int geraEvento;* -> vai 2 pra memoria.
int geraEvento (int faixa);
int fatorial (int n);

//pré alocação, area estática
main()
{
    int f, n, t;

    printf("Digite uma faixa de valores= ");
    scanf("%d", &f);
    n = geraEvento(f);
    printf("Numero par gerado = %d\n\n", n);
    t = fatorial(n);
    printf("O fatorial de %d = %d", n,t);

}

//alocação dinamica: area de heap -> usa e depois descarta, serve para
int geraEvento (int faixa)
{
    int r;
    srand(clock());
    r = rand() % faixa;
    printf("Executando a função com r = %d\n", r);

    if(r % 2 == 0)
        return r;
    return geraEvento(faixa);
}

int fatorial (int n)
{
    if(n == 0)
        return 1;
    return n*fatorial(n-1);
}
