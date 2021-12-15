#include <stdio.h>
#include <stdlib.h>

//typedef struct vai pro armazenamento do compilador
//struct vai pro armazenamento das globais
//questao de ocupação de memoria não ha diferença entre eles
typedef struct
{
    int codigo; // offset(deslocamento que se faz) = o primeiro campo é sempre igual a 0 bytes
    float medida; // offset = 2 bytes

}sensor;

main()
{
    sensor s[3], *p;
    float media;

    printf("Abastecento o vetor...\n");
    s[0].codigo = 1;
    s[0].medida = 18.5;
    s[1].codigo = 2;
    s[1].medida = 25.8;
    s[2].codigo = 3;
    s[2].medida = 30.7;

    p = s;
    printf("Endereço do vetor s = %d\n", s);
    printf("Endereço para onde p aponta = %d\n", p);

    // p->codigo = p apontado para codigo: (p é um ponteiro) endereço da memoria mais offset da variavel codigo
    printf("codigo = %d\n", p->codigo);
    printf("medida = %5.2f\n\n", p->medida);
    p++;
    printf("codigo = %d\n", p->codigo);
    printf("medida = %5.2f\n\n", p->medida);
    p++;
    printf("codigo = %d\n", p->codigo);
    printf("medida = %5.2f\n\n", p->medida);

}
