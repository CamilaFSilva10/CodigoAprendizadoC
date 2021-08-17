#include <stdio.h>


typedef struct
{
int produtor;
int grao;
float quantidade;
} producao;


main()
{
    char produtores[4][10]={"Jose", "Ana", "Maria", "Joaquim"};
    char graos[3][7] = {"arroz", "feijao", "milho"};
    producao safra[12]={0,1,5.0,
    0,0,3.0,
    1,2,10.0,
    1,0,6.0,
    0,2,6.0,
    1,1,4.0,
    3,0,2.0,
    3,1,1.0,
    2,2,7.0,
    2,0,4.0,
    2,1,8.0,
    3,2,5.0};
    int i;
    float totalArroz=0, totalFeijao=0, totalMilho=0;



    printf("Apresentando os dados do vetor...\n");
    printf("=================================\n\n");



    for (i=0; i < 12; i++)
    {
    printf("%-10s produziu %5.2f de %s\n",
    produtores[safra[i].produtor],
    safra[i].quantidade,
    graos[safra[i].grao]);
    }

    printf("Caculando: \n");
    for(i=0;i<12;i++){
        if(safra[i].grao == 0){
            totalArroz = totalArroz + safra[i].quantidade;
        }

    }
    printf("\ntotal: %1.2f", totalArroz);


}
