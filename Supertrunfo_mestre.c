#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int populacao1, ponto_turisticos1;
   char nome_cidade1[20], nome_estado1[20], codigo1[10];
   float area1, PIB1;
   
    

   printf("----CADASTRO DE CARTAS SUPERTRUNFO----\n");
   printf("Carta 1\n");

   printf("Digite uma letra para representar o estado (de A a H): \n");
   scanf("%s", nome_estado1);

   printf("Digite um numero, para representar o codigo da carta: (de 01 a 04)\n");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", nome_cidade1);

   printf("Digite a quantidade de habitantes da cidade: \n");
   scanf("%d", &populacao1);

   printf("Digite a area da cidade em quilometros quadrados:\n");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade:\n");
   scanf("%f", &PIB1);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%i", &ponto_turisticos1);

   PIB1 = PIB1 * 1000000000;

   float densidadepopulacional1 = populacao1  /  area1 ;
   float percapita1 = PIB1  / populacao1 ;

   float superpoder1 = populacao1 + area1 + PIB1 + ponto_turisticos1 + percapita1 + ( 1/ densidadepopulacional1);

   printf("Carta1, Cadastrada com sucesso:\n");

   printf("Carta1:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s \n", nome_estado1, codigo1, nome_cidade1 );
   printf("Populacao: %i\n Area: %e\n PIB: %f\n Numero de Pontos Turisticos: %i\n",populacao1, area1, PIB1, ponto_turisticos1);
   printf("A densidade Populacional da Carta 1 e de: %.2f\n", densidadepopulacional1 );
   printf("E o PIBpercapita da Cidade  e: %.2f ", percapita1 );
   printf("o super poder da carta 1 é : %f", superpoder1);

 



   printf("----CADASTRO DE CARTAS SUPERTRUNFO----\n");
   printf("Carta 2\n");

   int populacao2, ponto_turisticos2;
   char nome_cidade2[20], nome_estado2[20], codigo2[10];
   float area2, PIB2;

   printf("Digite uma letra para representar o estado (de A a H): \n");
   scanf("%s", &nome_estado2);

   printf("Digite um numero, para representar o codigo da carta: (de 01 a 04)\n");
   scanf("%s", &codigo2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome_cidade2);

   printf("Digite a quantidade de habitantes da cidade: \n");
   scanf("%d", &populacao2);

   printf("Digite a area da cidade em quilometros quadrados:\n");
   scanf("%f", &area2);

   printf("Digite o PIB da cidade:\n");
   scanf("%f", &PIB2);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%i", &ponto_turisticos2);

   float densidadepopulacional2 = populacao2  /  area2 ;
   float percapita2 = PIB2  / populacao2 ;
   float superpoder2 = populacao2 + area2 + PIB2 + ponto_turisticos2 + percapita2 + ( 1/ densidadepopulacional2);

   printf("Carta2, Cadastrada com sucesso:\n");

   printf("Carta2:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s \n", nome_estado2, codigo2, nome_cidade2 );
   printf("Populacao: %i\n Area: %e\n PIB: %f\n Numero de Pontos Turisticos: %i\n",populacao2, area2, PIB2, ponto_turisticos2);
   printf("A densidade Populaciona2 da Carta 2 é de: %.2f\n", densidadepopulacional2 );
   printf("E o PIBpercapita da Cidade  e: %.2f ", percapita2 );
   printf("o super poder da carta 2 é : %f", superpoder2);

   int resultado_densidadepopulacional = densidadepopulacional1 <= densidadepopulacional2;
   int resultado_populacao = populacao1 > ponto_turisticos2;
   int resultado_PIB = PIB1 > PIB2;
   int resultado_area = area1 > area2;
   int resultado_percapita = percapita1 > percapita2;
   int resultado_PontosTuristicos = ponto_turisticos1 > ponto_turisticos2;
   int resultado_superpoder = superpoder1 > superpoder2;

   printf("\nResultados das comparações:\n");
    printf("Densidade Populacional: Carta 1 tem densidade %.2f e Carta 2 tem densidade %.2f -> ", densidadepopulacional1, densidadepopulacional2);
    if (resultado_densidadepopulacional) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("População: Carta 1 tem população %d e Carta 2 tem população %d -> ", populacao1, populacao2);
    if (resultado_populacao) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("PIB: Carta 1 tem PIB %f e Carta 2 tem PIB %f -> ", PIB1, PIB2);
    if (resultado_PIB) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("Área: Carta 1 tem área %f e Carta 2 tem área %f -> ", area1, area2);
    if (resultado_area) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("PIB per capita: Carta 1 tem PIB per capita %.2f e Carta 2 tem PIB per capita %.2f -> ", percapita1, percapita2);
    if (resultado_percapita) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("Pontos Turísticos: Carta 1 tem %d pontos turísticos e Carta 2 tem %d pontos turísticos -> ", ponto_turisticos1, ponto_turisticos2);
    if (resultado_PontosTuristicos) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    printf("Superpoder: Carta 1 tem superpoder %f e Carta 2 tem superpoder %f -> ", superpoder1, superpoder2);
    if (resultado_superpoder) {
        printf("Carta 1 vence!\n");
    } else {
        printf("Carta 2 vence!\n");
    }

    int escolha;
    printf("\n\n---- MENU DE COMPARAÇÃO ----\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua opção (1 a 6): ");
    scanf("%d", &escolha);

    printf("\nComparando as cartas %s e %s:\n", nome_cidade1, nome_cidade2);

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome_cidade1, populacao1);
            printf("%s: %d habitantes\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("-> %s venceu!\n", nome_cidade1);
            else if (populacao2 > populacao1)
                printf("-> %s venceu!\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome_cidade1, area1);
            printf("%s: %.2f km²\n", nome_cidade2, area2);
            if (area1 > area2)
                printf("-> %s venceu!\n", nome_cidade1);
            else if (area2 > area1)
                printf("-> %s venceu!\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nome_cidade1, PIB1);
            printf("%s: %.2f\n", nome_cidade2, PIB2);
            if (PIB1 > PIB2)
                printf("-> %s venceu!\n", nome_cidade1);
            else if (PIB2 > PIB1)
                printf("-> %s venceu!\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome_cidade1, ponto_turisticos1);
            printf("%s: %d pontos\n", nome_cidade2, ponto_turisticos2);
            if (ponto_turisticos1 > ponto_turisticos2)
                printf("-> %s venceu!\n", nome_cidade1);
            else if (ponto_turisticos2 > ponto_turisticos1)
                printf("-> %s venceu!\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome_cidade1, densidadepopulacional1);
            printf("%s: %.2f hab/km²\n", nome_cidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("-> %s venceu! (menor densidade)\n", nome_cidade1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("-> %s venceu! (menor densidade)\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per capita\n");
            printf("%s: %.2f\n", nome_cidade1, percapita1);
            printf("%s: %.2f\n", nome_cidade2, percapita2);
            if (percapita1 > percapita2)
                printf("-> %s venceu!\n", nome_cidade1);
            else if (percapita2 > percapita1)
                printf("-> %s venceu!\n", nome_cidade2);
            else
                printf("-> Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, reinicie o programa e escolha um número entre 1 e 6.\n");
            break;
    }


   return 0;
}