#include <stdio.h>
#include <stdlib.h>

//o tamanho do ponteiro é proporcional ao maior endereço da memoria -> S.O. de 64 bits será capaz de guadar o maior valor dele
//se o ponteiro for int qualquer deslocamento da memoria vai salta de 2 em 2 bytes, char de 1 em 1, float de 4 em 4, double 8 bytes, void 0 bytes etc.
// ponteiro tem 4 bytes

main()
{
    char c1,c2, *pc;
    int i1, i2, *pi;
    float f1, f2, *pf;

    printf("Manipulando ponteiros: \n\n");

    // o simbolo unico & significa endereço de memoria
    printf("Endereco da variavel c1 = %x %d\n", &c1, &c1);
    printf("Endereco da variavel c2 = %x %d\n", &c2, &c2);
    //onde a variavel pc esta na memoria = &pc
    printf("Endereco da variavel pc = %x %d\n\n", &pc, &pc);

    printf("Endereco da variavel i1 = %x %d\n", &i1, &i1);
    printf("Endereco da variavel i2 = %x %d\n", &i1, &i2);
    printf("Endereco da variavel pi = %x %d\n\n", &pi, &pi);

    printf("Endereco da variavel f1 = %x %d\n", &f1, &f1);
    printf("Endereco da variavel f2 = %x %d\n", &f2, &f2);
    printf("Endereco da variavel pf = %x %d\n\n", &pf, &pf);

    c1 = 'A';
    //pc recebe o endereço fisico de c1. IMPORTANTE: se nao tiver essa parte o codigo aborta, nao da certo
    pc = &c1;
    //c2 recebe o conteudo de memoria para onde pc aponta
    c2 = *pc;

    printf("Endereco para onde pc aponta = %x %d\n", pc, pc);
    printf("O valor de c1 = %c\n\n", c2);

    i1 = 25;
    pi = &i1;
    i2 = *pi;

    printf("Endereco para onde pi aponta = %x %d\n", pi, pi);
    printf("O valor de i2 = %d\n\n", i2);

    f1 = 8.25;
    pf = &f1;
    f2 = *pf;

    printf("Endereco para onde pf aponta = %x %d\n", pf, pf);
    printf("O valor de f2 = %5.2f\n\n", f2);

    pc++;
    printf("Novo endereco para onde pc aponta = %x %d\n\n", pc, pc);
    pi++;
    printf("Novo endereco para onde pi aponta = %x %d\n\n", pi, pi);
    pf++;
    printf("Novo endereco para onde pf aponta = %x %d\n\n", pf, pf);


}
