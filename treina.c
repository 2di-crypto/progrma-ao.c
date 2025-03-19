#include <stdio.h>

typedef struct {
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
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", carta1.codigo); 

    printf("Nome da cidade: \n");
    scanf("%s", carta1.nome); 

    printf("Populacao (em milhares): \n");
    scanf("%lu", &carta1.populacao);

    printf("Area (em km²): \n");
    scanf("%f", &carta1.area);

    printf("PIB (em milhoes de reais): \n");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta1.numerosdepontosturisticos);

    // Entrada de dados carta 2
    printf("CARTA 2: \n");
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", carta2.codigo); 

    printf("Nome da cidade: \n");
    scanf("%s", carta2.nome); 

    printf("Populacao (em milhares): \n");
    scanf("%lu", &carta2.populacao);

    printf("Area (em km²): \n");
    scanf("%f", &carta2.area);

    printf("PIB (em milhoes de reais): \n");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &carta2.numerosdepontosturisticos);

    // Cálculos para carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.numerosdepontosturisticos + carta1.pib_per_capita + (1 / carta1.densidade_populacional);

    // Cálculos para carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.numerosdepontosturisticos + carta2.pib_per_capita + (1 / carta2.densidade_populacional);

    // Comparação dos atributos
    printf("\nComparação dos Atributos:\n");

    // Comparar População
    printf("População: ");
    printf("%d\n", carta1.populacao > carta2.populacao); // 1 se carta1 vence, 0 se carta2 vence

    // Comparar Área
    printf("Área: ");
    printf("%d\n", carta1.area > carta2.area);

    // Comparar PIB
    printf("PIB: ");
    printf("%d\n", carta1.pib > carta2.pib);

    // Comparar Número de Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    printf("%d\n", carta1.numerosdepontosturisticos > carta2.numerosdepontosturisticos);

    // Comparar Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    printf("%d\n", carta1.densidade_populacional < carta2.densidade_populacional);

    // Comparar PIB per Capita
    printf("PIB per Capita: ");
    printf("%d\n", carta1.pib_per_capita > carta2.pib_per_capita);

    // Comparar Super Poder
    printf("Super Poder: ");
    printf("%d\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
