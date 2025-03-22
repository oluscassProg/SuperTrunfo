#include <stdio.h>

int main() {

    char estado[50];
    int codigo;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Carta 01 \n");

    printf("Digite a letra do estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo: \n");
    scanf("%d", &codigo);

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao \n");
    scanf("%d", &populacao);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("CARTA 01 \n");
    printf("letra do estado: %s \n", estado);
    printf("codigo: %d \n", codigo);
    printf("populacao: %d \n", populacao);
    printf("PIB: %.2f \n", pib);
    printf("pontos turisticos: %d \n", pontos);
    printf("nome da cidade: %s\n", cidade);

    printf("carta 02 \n");

    printf("Digite a letra do estado: \n");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo: \n");
    scanf("%d", &codigo);

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao \n");
    scanf("%d", &populacao);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("CARTA 02 \n");
    printf("letra do estado: %s \n", estado);
    printf("codigo: %d \n", codigo);
    printf("populacao: %d \n", populacao);
    printf("PIB: %.2f \n", pib);
    printf("pontos turisticos: %d \n", pontos);
    printf("nome da cidade: %s\n", cidade);

    return 0;
}
