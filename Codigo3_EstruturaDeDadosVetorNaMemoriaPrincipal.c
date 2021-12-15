#include <stdio.h>
#include <stdlib.h>

main(){

    //int tem 2 bits de tamanho, o ponteiro tem 4
    int v[4]={0,0,0,0}, i, s, *p;

    printf("Somatorio dos elementos de um vetor percorrendo ele com um ponteiro");

    printf("\n\nAlimentando o vetor...\n");
    srand(clock());
    for(i=0;i<4;i++){
        v[i] = rand() % 10;
        //supondo que a memoria esteja no endereço 5352;
        //convertendo o v[i] na memoria principal: i = 2{ v[2](nao existe) = v(5352) + 4(o quatro é a soma dos bits da posicao do indice 2) = 5356
        printf(" %d", v[i]);
    }

    printf("\n\nPercorrendo o vetor com um ponteiro...\n");
    printf("Endereço do vetor v = %x %d",v,v);
    p = v;
    printf("\nEndereço para onde p aponta = %x %d",p,p);

    s = 0;
    s = s + (*p);
    p++;
    s = s + (*p);
    p++;
    s = s + (*p);
    p++;
    s = s + (*p);

    printf("\n\nO somatorio dos elementos do vetor e = %d", s);

    printf("\n\n");
}
