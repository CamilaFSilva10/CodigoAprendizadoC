#include <stdio.h>
#include <string.h>

main(){
    char frase[50]="",
    palavra1[10]="",
    palavra2[10]="",
    palavra3[10]="",
    palavra4[10]="",
    palavra5[10]="";
    int  i, k, contadorPalavras;

    printf("Digite um frase com ate 5 palavras e 49 caracteres no total...\n ");
    printf("-> ");
    gets(frase);
    printf("\nFrase digitada = %s\n", frase);
    printf("\nSeparando as palavras da frase...\n");
    printf("\nIdentificando a primeira palavra...\n");
    k = 0;

    for (i=0; i < strlen(frase); i++)
        {
            if (frase[i] != ' ')
            {
                palavra1[k] = toupper(frase[i]);
    k++;
    }
    else
        break;
    }
    palavra1[k] ='\0';
    printf("\nPrimeira palavra = %s\n", palavra1);
    printf("\nIdentificando a segunda palavra...\n");
    k = 0;
    for (i=i+1; i < strlen(frase); i++)
        {
            if (frase[i] != ' ')
            {
                palavra2[k] = toupper(frase[i]);
    k++;
    }
    else
        break;
    }
    palavra2[k] ='\0';
    printf("\nSegunda palavra = %s\n", palavra2);
    printf("\nIdentificando a terceira palavra...\n");
    k = 0;
    for (i=i+1; i < strlen(frase); i++)
        {
            if (frase[i] != ' ')
            {
                 palavra3[k] = toupper(frase[i]);
    k++;
    }
    else
        break;
    }
    palavra3[k] ='\0';
     printf("\nTerceira palavra = %s\n", palavra3);
     printf("\nIdentificando a quarta palavra...\n");
     k = 0;
     for (i=i+1; i < strlen(frase); i++)
        {
            if (frase[i] != ' ')
            {
                palavra4[k] = toupper(frase[i]);
     k++;
     }
     else
        break;
     }
     palavra4[k] ='\0';
     printf("\nQuarta palavra = %s\n", palavra4);
     printf("\nIdentificando a quinta palavra...\n");
     k = 0;
     for (i=i+1; i < strlen(frase); i++)
        {
            if (frase[i] != ' ')
            {
                palavra5[k] = toupper(frase[i]);
     k++;
     }
     else
        break;
     }
      palavra5[k] ='\0';
      printf("\nQuinta palavra = %s\n", palavra5);
      printf("\nComparando as palavras...\n\n");
      contadorPalavras = 0;
      if (strcmp(palavra1, "ODEIO") == 0)
        contadorPalavras++;
      if (strcmp(palavra2, "ODEIO") == 0)
        contadorPalavras++;
      if (strcmp(palavra3, "ODEIO") == 0)
        contadorPalavras++;
      if (strcmp(palavra4, "ODEIO") == 0)
        contadorPalavras++;
      if (strcmp(palavra5, "ODEIO") == 0)
        contadorPalavras++;
      if (contadorPalavras == 0)
        printf("\nA frase nao possui palavras odiosas...\n\n");
      else
        printf("\nA frase possui %d palavra(s) odiosa(s)...\n\n",
               contadorPalavras);
}
