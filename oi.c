#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Estrutura das cartas
    printf("=======JOGO DE CARTA SUPER TRUNFO======: \n");

    char estado[6];                // Variável para o estado (1 caractere)
    char codigo[6];                // Código da cidade
    char nome[50];                 // Nome da cidade
    int populacao;                 // População da cidade
    float area;                    // Área da cidade (em km²)
    float pib;                     // PIB da cidade (em milhões de reais)
    int numerosdepontosturisticos; // Número de pontos turísticos
   

    // Variáveis para os cálculos
    float densidade_populacional;  // Densidade populacional (hab/km²)
    float pib_per_capita;          // PIB per capita (milhões de reais por habitante)

    // Entrada de dados
    printf(" CARTA1 \n");
    printf("ESTADO (Exemplo: SP): \n");
    scanf("%s", estado);
    
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", codigo); 

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", nome);  // Captura a linha inteira, permitindo espaços no nome

    printf("Populacao (em habitantes): \n");
    scanf("%d", &populacao);

    printf("Area (em km²): \n");
    scanf("%f", &area);

    printf("PIB (em milhões de reais): \n");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos: \n");
    scanf("%d", &numerosdepontosturisticos);

    // Cálculos para densidade populacional e PIB per capita
    densidade_populacional = (float)populacao / area; // Garantir que a divisão seja feita com float
    pib_per_capita = pib / populacao; // PIB per capita em milhões de reais por habitante

    // Saída de dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area); // Formatação com 2 casas decimais
    printf("PIB: %.2f milhões de reais\n", pib); // Formatação com 2 casas decimais
    printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita);

    return 0;
}

int main() {
    // Estrutura das cartas
    printf("=======JOGO DE CARTA SUPER TRUNFO======: \n");

    char estado[6];                // Variável para o estado (1 caractere)
    char codigo[6];                // Código da cidade
    char nome[50];                 // Nome da cidade
    int populacao;                 // População da cidade
    float area;                    // Área da cidade (em km²)
    float pib;                     // PIB da cidade (em milhões de reais)
    int numerosdepontosturisticos; // Número de pontos turísticos
   

    // Variáveis para os cálculos
    float densidade_populacional;  // Densidade populacional (hab/km²)
    float pib_per_capita;          // PIB per capita (milhões de reais por habitante)

    // Entrada de dados
    printf(" CARTA2 \n");
    printf("ESTADO (Exemplo: SP): \n");
    scanf("%s", estado);
    
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", codigo); 

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", nome);  // Captura a linha inteira, permitindo espaços no nome

    printf("Populacao (em habitantes): \n");
    scanf("%d", &populacao);

    printf("Area (em km²): \n");
    scanf("%f", &area);

    printf("PIB (em milhões de reais): \n");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos: \n");
    scanf("%d", &numerosdepontosturisticos);

    // Cálculos para densidade populacional e PIB per capita
    densidade_populacional = (float)populacao / area; // Garantir que a divisão seja feita com float
    pib_per_capita = pib / populacao; // PIB per capita em milhões de reais por habitante

    // Saída de dados
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area); // Formatação com 2 casas decimais
    printf("PIB: %.2f milhões de reais\n", pib); // Formatação com 2 casas decimais
    printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita);

    return 0;
}

