#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char estado[6];
    char codigo[6];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numerosdepontosturisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;

// Função para capturar os dados da cidade
void capturarDados(Cidade *c, int numCarta) {
    printf("\n======= CARTA %d =======\n", numCarta);
    printf("ESTADO (Exemplo: SP): ");
    scanf("%s", c->estado);

    printf("Codigo da cidade (EX: A01, A02, B01, B02): ");
    scanf("%s", c->codigo);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", c->nome);  // Captura a linha inteira, permitindo espaços no nome

    printf("População (em habitantes): ");
    scanf("%d", &c->populacao);

    printf("Área (em km²): ");
    scanf("%f", &c->area);

    printf("PIB (em milhões de reais): ");
    scanf("%f", &c->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &c->numerosdepontosturisticos);

    // Cálculos
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

// Função para exibir os dados da cidade
void exibirDados(Cidade c) {
    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Estado: %s\n", c.estado);
    printf("Código da cidade: %s\n", c.codigo);
    printf("Nome da cidade: %s\n", c.nome);
    printf("População: %d habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f milhões de reais\n", c.pib);
    printf("Número de pontos turísticos: %d\n", c.numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", c.densidade_populacional);
    printf("PIB per capita: %.6f milhões de reais\n", c.pib_per_capita);
}

int main() {
    printf("======= JOGO DE CARTA SUPER TRUNFO =======\n");

    Cidade carta1, carta2;

    capturarDados(&carta1, 1);
    capturarDados(&carta2, 2);

    exibirDados(carta1);
    exibirDados(carta2);

    return 0;
}
