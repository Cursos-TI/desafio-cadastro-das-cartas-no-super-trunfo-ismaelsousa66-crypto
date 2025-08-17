#include <stdio.h>
 
     int main(){

        // Variaveis do jogo
        int população, pontosTuristicos;
        float PIB, area;
        char estado[2];
        char codigo[20];
        char nome[20];
    
        // Inicio do código 
        // Carta n1 
        printf("Primeira carta \n");

        printf("\n");

        printf("Selecione uma letra de A a H: \n");
        scanf("%s", &estado);

        printf("Digite o código do seu estado: \n");
        scanf("%s", &codigo);

        printf("Digite o nome da sua cidade: \n");
        scanf("%s", &nome);

        printf("Qual a população da sua cidade? \n");
        scanf("%d", &população);

        printf("Digite a área da sua cidade: \n");
        scanf("%f", &area);

        printf("Digite o PIB de sua cidade: \n");
        scanf("%f", &PIB);

        printf("Quantos pontos turisticos existem em sua cidade? \n");
        scanf("%d", &pontosTuristicos);

        printf("Dados:\n");

        // Exibição dos dados 1

        printf("CARTA 1\n");
        printf("Estado: %s \n", estado);
        printf("Código: %s \n", codigo);
        printf("Nome da cidade: %s \n", nome);
        printf("População: %d \n", população);
        printf("Área: %.2fkm² \n", area);
        printf("PIB: %.2f bilhões de reais \n", PIB);
        printf("Pontos turisticos: %d \n", pontosTuristicos);

        printf("\n");


        // Carta n2
        
           printf("Segunda carta \n");
         
           printf("Selecione uma letra de A a H: \n");
           scanf("%s", &estado);

           printf("Digite o codigo do seu estado: \n");
           scanf("%s", &codigo);

           printf("Digite o nome da sua cidade: \n");
           scanf("%s", &nome);

           printf("Qual a população da sua cidade: \n");
           scanf("%d", &população);

           printf("Digite a área da sua cidade: \n");
           scanf("%f", &area);

           printf("Digite o PIB da sua cidade: \n");
           scanf("%f", &PIB);

           printf("Quantos pontos turisticos existem em sua cidade? \n");
           scanf("%d", &pontosTuristicos);

           printf("Dados:\n");

        
           // Exibição dos dados 2

              printf("CARTA 2\n");
              printf("Estado: %s \n", estado);
              printf("Código: %s \n", codigo);
              printf("Nome da cidade: %s \n", nome);
              printf("População: %d \n", população);
              printf("Área: %.2fkm² \n", area);
              printf("PIB: %.2f bilhões de reais \n", PIB);
              printf("Pontos turisticos: %d", pontosTuristicos);


           // Fim do projeto.


           return 0;

     }