#include <stdio.h>

typedef struct {
    char estado;
    char codigo[6];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int numerosdepontosturisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Cidade;

int main() {
    Cidade carta1, carta2;

    // Entrada de dados carta 1
    printf("CARTA 1: \n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", carta1.codigo); 

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", carta1.nome); // Lê a cidade com espaços

    printf("Populacao (em habitantes): \n");
    scanf("%lu", &carta1.populacao);

    printf("Area (em km²): \n");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta1.numerosdepontosturisticos);

    // Entrada de dados carta 2
    printf("CARTA 2: \n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", carta2.codigo); 

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", carta2.nome); // Lê a cidade com espaços

    printf("Populacao (em habitantes): \n");
    scanf("%lu", &carta2.populacao);

    printf("Area (em km²): \n");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta2.numerosdepontosturisticos);

    // Cálculos para carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib * 1000000000 / carta1.populacao; // PIB per capita em reais
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib * 1000000000 + carta1.numerosdepontosturisticos + carta1.pib_per_capita + (1 / carta1.densidade_populacional);

    // Cálculos para carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib * 1000000000 / carta2.populacao; // PIB per capita em reais
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib * 1000000000 + carta2.numerosdepontosturisticos + carta2.pib_per_capita + (1 / carta2.densidade_populacional);

    // Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numerosdepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numerosdepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparar População
    printf("População: ");
    if (carta1.populacao > carta2.populacao)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar Área
    printf("Área: ");
    if (carta1.area > carta2.area)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar PIB
    printf("PIB: ");
    if (carta1.pib > carta2.pib)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar Número de Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (carta1.numerosdepontosturisticos > carta2.numerosdepontosturisticos)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (carta1.densidade_populacional < carta2.densidade_populacional)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar PIB per Capita
    printf("PIB per Capita: ");
    if (carta1.pib_per_capita > carta2.pib_per_capita)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Comparar Super Poder
    printf("Super Poder: ");
    if (carta1.super_poder > carta2.super_poder)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    return 0;
}

