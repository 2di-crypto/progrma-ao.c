#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char codigo[6];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta) {
    printf("Codigo da cidade (EX: A01,A02,B01,B02): ");
    scanf("%s", carta->codigo);
    
    printf("Nome da cidade: ");
    scanf(" %s", carta->nome);
    
    printf("Populacao (em milhares): ");
    scanf("%lu", &carta->populacao);
    
    printf("Area (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (em milhoes de reais): ");
    scanf("%f", &carta->pib);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
        
    
    // Cálculos das métricas
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / (float)carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1 / carta->densidade_populacional);
}

// Função para comparar dois valores e exibir o resultado
void compararAtributo(float val1, float val2, const char *atributo, int inverso) {
    int resultado = (inverso) ? (val1 < val2) : (val1 > val2);
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado ? 1 : 2, resultado);
}

int main() {
    Carta carta1, carta2;
    
    printf("\nInsira os dados da Carta 1:\n");
    lerCarta(&carta1);
    
    printf("\nInsira os dados da Carta 2:\n");
    lerCarta(&carta2);
    
    // Exibir comparações
    printf("\nComparacao de Cartas:\n");
    compararAtributo(carta1.populacao, carta2.populacao, "Populacao", 0);
    compararAtributo(carta1.area, carta2.area, "Area", 0);
    compararAtributo(carta1.pib, carta2.pib, "PIB", 0);
    compararAtributo(carta1.pontos_turisticos, carta2.pontos_turisticos, "Pontos Turisticos", 0);
    compararAtributo(carta1.densidade_populacional, carta2.densidade_populacional, "Densidade Populacional", 1);
    compararAtributo(carta1.pib_per_capita, carta2.pib_per_capita, "PIB per Capita", 0);
    compararAtributo(carta1.super_poder, carta2.super_poder, "Super Poder", 0);
    
    return 0;
}
