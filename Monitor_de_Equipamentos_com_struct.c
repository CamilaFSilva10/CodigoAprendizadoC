#include <stdio.h>

struct evento
{
   int   equipamento;    // identificador do equipamento
   char  descricao[30];  // descri��o do evento
};

main()
{
   struct evento ocorrencias[5] = {0, "parado",
                                   0, "funcionando novamente",
                                   1, "em opera��o",
                                   2, "em manuten��o",
                                   0, "desligado"};
   char listaEquipamentos[3][15] = {"misturador", "condensador", "envasador"};
   int i;

   printf("Monitoramento de equipamentos por meio de registro: status de funcionamento\n");

   for (i=0; i < 5; i++){
        printf("\nO equipamento %s esta %s\n",
        listaEquipamentos[ocorrencias[i].equipamento],
        ocorrencias[i].descricao);
        }
}
