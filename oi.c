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

    // Cálculos para carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Saída de dados carta 1
    printf("\nCARTA 1:\n");
    printf("Codigo da cidade: %s \n", carta1.codigo);
    printf("Nome da cidade: %s \n", carta1.nome);
    printf("Populacao: %lu mil habitantes \n", carta1.populacao);
    printf("Area: %.2f km² \n", carta1.area);
    printf("PIB: %.2f milhoes de reais \n", carta1.pib);
    printf("Numero de pontos turisticos: %d \n", carta1.numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f milhoes de reais\n", carta1.pib_per_capita);

    // Saída de dados carta 2
    printf("\nCARTA 2:\n");
    printf("Codigo da cidade: %s \n", carta2.codigo);
    printf("Nome da cidade: %s \n", carta2.nome);
    printf("Populacao: %lu mil habitantes \n", carta2.populacao);
    printf("Area: %.2f km² \n", carta2.area);
    printf("PIB: %.2f milhoes de reais \n", carta2.pib);
    printf("Numero de pontos turisticos: %d \n", carta2.numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f milhoes de reais\n", carta2.pib_per_capita);

    return 0;
}
