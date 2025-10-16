#include <stdio.h>
 
     int main(){

        // Variaveis do jogo
        int pontosTuristicos, população, populaçãoB, pontosTuristicosB;
        float PIB, area, areaB, PIBb;
        char estado[2];
        char codigo[20];
        char nome[20];
        char nomeB[20];
        float dp, percapita, dpB, percapitaB;
        float superPoder, superPoderB; 
        int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF;
     int escolha;
    
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
           scanf("%s", &nomeB);

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
              printf("Nome da cidade: %s \n", nomeB);
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

         printf("Vamos a comparação, escolha quais atributos você gostaria de comparar:\n");
         printf("1. População\t");
         printf("2. Área\t");
         printf("3. PIB\n");
         printf("4. Pontos turisticos\t");
         printf("5. Densidade populacional\t");
         printf("6. PIB per Capita\n");
         printf("7.Super poder\n");
  
         scanf("%d", &escolha);

         switch(escolha){
         case 1: 

          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
          printf("População: %d\t", população);
          printf("População: %d\n", populaçãoB);
              
             if(população == populaçãoB){
               printf("Empate!");

             } else if(população > populaçãoB){
             printf("População de %s venceu \n", nome); 
             } else if(população < populaçãoB){
               printf("População de %s venceu\n", nomeB);
             }

          
         break;
          case 2:

                    printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
                  printf("Area: %.2f\t", area);
                  printf("Area: %.2f\n", areaB);

               if(area == areaB){
                    printf("Empate!\n");
               } else if(area > areaB){
                    printf("Area de %s venceu \n", area);
                    
               } else if(area < areaB){
                    printf("Area de %s venceu \n", areaB);

               }



          break;
            case 3: 

          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
            printf("PIB: %.2f\t", PIB);
            printf("PIB: %.2f\n", PIBb);

            if(PIB == PIBb){
               printf("Empate!\n");
            } else if(PIB > PIBb){
               printf("PIB de %s venceu\n", nome);
            } else if(PIB < PIBb){
               printf("PIB de %s venceu\n", nomeB);
            }



            break;
               case 4: 

          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
          printf("Pontos turisticos: %d\t", pontosTuristicos);
          printf("Pontos turisticos: %d\n", pontosTuristicosB);

          if (pontosTuristicos == pontosTuristicosB){
               printf("Empate!");

          } else if ( pontosTuristicos > pontosTuristicosB){
               printf("Pontos turisticos de %s venceu", nome);
          }else if(pontosTuristicos < pontosTuristicosB){
               printf("Pontos turisticos de %s venceu", nomeB);
          }


               break;
                  case 5:

          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
          printf("Densidade Pop: %.2f\t", dp);
          printf("Densidade Pop: %.2f\n", dpB);
            
          if(dp == dpB){
               printf("Empate!");
          } else if(dp < dpB){
               printf("Densidade Pop de %s venceu", nome);
          }   else if (dp > dpB){
               printf("Densidade Pop de %s venceu", nomeB);
          }


                  break;

                     case 6: 


          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
          printf("PIB per CAP: %.2f\t", percapita);
          printf("PIB per CAP: %.2f\n", percapitaB);
            
              if (percapita == percapitaB){
               printf("Empate!");
              } else if(percapita > percapitaB){
               printf("Per Capita de %s venceu\n", nome);
              } else if(percapita < percapitaB){
               printf("Per Capita de %s venceu\n", nomeB);
              }
 

                     break;
                       case 7:

                       
          printf("Cidade 1: %s\t", nome);
          printf("Cidade 2: %s\n", nomeB);
          printf("Super poder: %.2f\t", superPoder);
          printf("Super poder: %.2f\n", superPoderB);

          if (superPoder == superPoderB){
               printf("Empate!");

           } else if ( superPoder > superPoderB){
               printf("Super poder de %s venceu", nome);

           } else if (superPoder < superPoderB){
               printf("Super poder de %s venceu", nomeB);
           }
     
                       break;
                         default:
                     printf("Opção invalida, reiniciando...");

                         break;


         }



  
           // Fim do projeto.
  

           return 0;
            
     }