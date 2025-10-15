#include <stdio.h>
 
     int main(){

        // Variaveis do jogo
        int pontosTuristicos, população, populaçãoB, pontosTuristicosB;
        float PIB, area, areaB, PIBb;
        char estado[2];
        char codigo[20];
        char nome[20];
        float dp, percapita, dpB, percapitaB;
        float superPoder, superPoderB; 
        int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF;

    
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

        dp = população / area;

        percapita = PIB / população;

        // Exibição dos dados 1

        printf("CARTA 1\n");
        printf("Estado: %s \n", estado);
        printf("Código: %s \n", codigo);
        printf("Nome da cidade: %s \n", nome);
        printf("População: %d \n", população);
        printf("Área: %.2fkm² \n", area);
        printf("PIB: %.2f bilhões de reais \n", PIB);
        printf("Pontos turisticos: %d \n", pontosTuristicos);
        printf("Densidade populacional: %.2fhab/Km² \n", dp);
        printf("PIB per Capita: %.2f reais \n ", percapita);

   superPoder = população + area + PIB + pontosTuristicos + ( 1 / dp);
        printf("Super poder: %.2f \n", superPoder);

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
           scanf("%d", &populaçãoB);

           printf("Digite a área da sua cidade: \n");
           scanf("%f", &areaB);

           printf("Digite o PIB da sua cidade: \n");
           scanf("%f", &PIBb);

           printf("Quantos pontos turisticos existem em sua cidade? \n");
           scanf("%d", &pontosTuristicosB);

           printf("Dados:\n");

           dpB = populaçãoB / areaB;

           percapitaB = PIBb / populaçãoB;

        
           // Exibição dos dados 2

              printf("CARTA 2\n");
              printf("Estado: %s \n", estado);
              printf("Código: %s \n", codigo);
              printf("Nome da cidade: %s \n", nome);
              printf("População: %d \n", populaçãoB);
              printf("Área: %.2fkm² \n", areaB);
              printf("PIB: %.2f bilhões de reais \n", PIBb);
              printf("Pontos turisticos: %d\n", pontosTuristicosB);
              printf("Densidade populacional: %.2fhab/Km² \n", dpB);
              printf("PIB per Capita: %.2f reais \n ", percapitaB);

            superPoderB = populaçãoB + areaB + PIBb + pontosTuristicosB + ( 1 / dpB);
        printf("Super poder: %.2f \n", superPoderB);

        resultadoA = população > populaçãoB;
        resultadoB = area > areaB;
        resultadoC = PIB > PIBb;
        resultadoD = pontosTuristicos > pontosTuristicosB;
        resultadoE = dp > dpB;
        resultadoF = superPoder > superPoderB;



        printf("Comparativo: \n");
      printf("População: %d \n", resultadoA);
      printf("Area: %d\n", resultadoB);
      printf("PIB: %d\n", resultadoC);
      printf("Pontos Turisticos: %d\n", resultadoD);
      printf("Densidade Populacional: %d\n", resultadoE);
      printf("Super Poder: %d\n", resultadoF);


  
           // Fim do projeto.
  

           return 0;
            
     }