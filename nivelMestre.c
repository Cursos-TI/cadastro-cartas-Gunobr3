#include <stdio.h>
    int main(){
        
        // CARTA 01 - VARIÁVEIS
        char estado1;
        char codigodacarta1[4];
        char nomedacidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int turisticos1;
        double densidadePopulacional1;
        double PIBpercapita1;
        float SuperPoder1; 
               

        // CARTA 02 - VARIÁVEIS
        char estado2;
        char codigodacarta2[4];
        char nomedacidade2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int turisticos2;
        float densidadePopulacional2;
        float PIBpercapita2;
        float SuperPoder2;
        float resultado;
        
                

        // DADOS DA CARTA 01
        printf("Digite o Estado, na forma de uma letra de 'A' a 'H' (representando um dos oito estados): \n");
        scanf(" %c", &estado1);

        printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%3s", codigodacarta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade1); 
        
        printf("Digite a População (o número de habitantes da cidade): \n");
        scanf("%d", &populacao1);

        printf("Digite a Área da Cidade (a área da cidade em quilômetros quadrados): \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos da Cidade (a quantidade de pontos turísticos da cidade): \n");
        scanf("%d", &turisticos1);

        densidadePopulacional1 = (float) populacao1 / area1; //adquirido apos a entrada de dados.
        PIBpercapita1 = (float) pib1 / populacao1; //adquirido apos a entrada de dados.
        SuperPoder1 = (float) (populacao1 + area1 + pib1 + turisticos1 + PIBpercapita1 + 1/densidadePopulacional1);



        printf("\n");
        
        printf("Carta 1: \n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigodacarta1);
        printf("Nome da Cidade: %s \n", nomedacidade1);
        printf("População: %u \n", populacao1);
        printf("Área: %.2f \n", area1);
        printf("PIB: %.2f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", turisticos1);
        printf("Densidade Populacionatl: %.2f,\n", densidadePopulacional1);
        printf("PIB per Capital: %.2f,\n", PIBpercapita1);
        printf("Superpoder: %.2f,\n", SuperPoder1);


        // DADOS DA CARTA 02
        printf("Digite o Estado, na forma de uma letra de 'A' a 'H' (representando um dos oito estados): \n");
        scanf(" %c", &estado2);

        printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%3s", codigodacarta2);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade2); 
        
        printf("Digite a População (o número de habitantes da cidade): \n");
        scanf("%d", &populacao2);

        printf("Digite a Área da Cidade (a área da cidade em quilômetros quadrados): \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos da Cidade (a quantidade de pontos turísticos da cidade): \n");
        scanf("%d", &turisticos2);

        densidadePopulacional2 = (float) populacao2 / area2; //adquirido apos a entrada de dados.
        PIBpercapita2 = (float) pib2 / populacao2; //adquirido apos a entrada de dados.
        SuperPoder1 = (float) (populacao2 + area2 + pib2 + turisticos2 + PIBpercapita2 + 1/densidadePopulacional2);


        printf("\n");
        
        printf("Carta 2: \n");
        printf("Estado: %c \n", estado2);
        printf("Código: %s \n", codigodacarta2);
        printf("Nome da Cidade: %s \n", nomedacidade2);
        printf("População: %u \n", populacao2);
        printf("Área: %.2f \n", area2);
        printf("PIB: %.2f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", turisticos2);
        printf("Densidade Populacionatl: %.2f,\n", densidadePopulacional2);
        printf("PIB per Capital: %.2f,\n", PIBpercapita2);
        printf("Superpoder: %.2f,\n", SuperPoder2);

        printf("\n");

        printf("Compara;áo de cartas: \n");
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2);
        printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);


        return 0;


    
    }

