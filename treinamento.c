
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//estrutura das cartas
            printf("=======JOGO DE CARTA SUPER TRUNFO======: \n");

    char codigo[6];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numerosdepontosturisticos;

    float densidade_populacional;
    float pib_per_capita;


    // Entrada de dados
    printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
    scanf("%s", codigo); 

    printf("Nome da cidade: \n");
    scanf("%s", nome); 

    printf("Populacao (em milhares): \n");
    scanf("%d", &populacao);

    printf("Area (em km²): \n");
    scanf("%f", &area);

    printf("PIB (em milhoes de reais): \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numerosdepontosturisticos);

    // operaçao divisao
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;



    // Saída de dados
    printf("\nCodigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f km² \n", area); // Formatação com 2 casas decimais
    printf("PIB: %.2f milhoes de reais \n", pib); // Formatação com 2 casas decimais
    printf("Numero de pontos turisticos: %d \n", numerosdepontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f milhoes de reais\n", pib_per_capita);


    return 0;
}