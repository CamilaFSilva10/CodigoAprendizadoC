#include <stdio.h>
#include <stdlib.h>


main()
{
    char candidatos[5][10]={"Jose","Maria","Ana","Joaquim","Beatriz"};
    int votos[6]={0,0,0,0,0};
    int i, vencedor,v;


    printf("Gerando os votos para cada candidato...\n");
    printf("=======================================\n");
    //gerando numeros aleatorios
    srand(clock());

    for (i=0; i < 5; i++)
    {
    votos[i] = rand() % 100;
    }



    printf("Apresentando o total de votos para cada candidato...\n");
    printf("====================================================\n");
    for (i=0; i < 5; i++)
    {
    printf("O(a) candidato(a) %s teve %d votos\n",
    candidatos[i], votos[i]);
    }

    printf("Identificando o vencedor da eleicao...\n");
    v = candidatos[0];
    for (i=1; i < 5; i++)
        {
            if (candidatos[i] > v)
            v = candidatos[i];
        }
    printf("o vencedor foi = %s\n\n", v);

}
