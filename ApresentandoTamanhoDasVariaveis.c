#include <stdio.h>

main(){
    char   c='B';
    int    i=0;
    float  f=0.0;
    double d=0.0;
    char   s[30]="";
    int    total=0;

    printf("Tamanho de uma variavel char = %d Bytes\n", sizeof(char));
    printf("Tamanho de uma variavel int = %d Bytes\n", sizeof(int));
    printf("Tamanho de uma variavel float = %d Bytes\n", sizeof(float));
    printf("Tamanho de uma variavel double = %d Bytes\n", sizeof(double));
    printf("Tamanho de uma variavel string = %d Bytes\n\n", sizeof(s));

    total = sizeof(c)+sizeof(i)+sizeof(f)+sizeof(d)+sizeof(s);
    printf("Total de Bytes das variaveis em memoria = %d\n\n", total);

    printf("Testando o lixo de memoria...\n\n");
    printf("Valor da variavel c = %c\n", c);

    printf("Entrada de dados para um caractere\n");
    printf("Digite um caractere = ");
    c = getche();
    printf("\nValor da variavel c = %c\n", c);

    printf("\nEntrada de dados para um inteiro\n");
    printf("Digite um numero inteiro = ");
    scanf("%d", &i);
    printf("Valor da variavel i = %d\n", i);

    printf("\nEntrada de dados para um real (racional)\n");
    printf("Digite um numero com casas decimais = ");
    scanf("%f", &f);
    printf("Valor da variavel f = %5.2f\n", f);

    printf("\nEntrada de dados para um real duplo (racional)\n");
    printf("Digite um numero com casas decimais = ");
    scanf("%lf", &d);
    getchar();
    printf("Valor da variavel d = %5.2f\n", d);

    printf("\nEntrada de dados para uma string (cadeia de caracteres\n");
    printf("Digite uma sequencia de caracteres = ");
    //gets(s);
    scanf("%[a-z A-Z 0-9]", &s);
    printf("Valor da variavel s = %s\n\n", s);
}
