
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
// DADOS CARTA 1
            
        char estado_carta1[6];                // Variável para o estado (1 caractere)
         char codigo_carta1[6];                // Código     da cidade  
      char nome_carta1[50];                 // Nome da cidade
            int populacao_carta1;                 // População da cidade
            float  area_carta1;                    // Área da cidade (em km²)
            float pib_carta1;                     // PIB da cidade (em milhões de reais)
            int numerosdepontosturisticos_carta1; // Número de pontos turísticos
        
            // Variáveis para os cálculos
            float densidade_populacional_carta1;  // Densidade populacional (hab/km²)
            float pib_per_capita_carta1 ;          // PIB per capita (milhões de reais por habitante)
        
            // Entrada de dados
            printf("ESTADO (Exemplo: SP): \n");
            scanf("%s", estado_carta1);
            
            printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
            scanf("%s", codigo_carta1); 
        
            printf("Nome da cidade: \n");
            scanf(" %49[^\n]", nome_carta1);  // Captura a linha inteira, permitindo espaços no nome
        
            printf("Populacao (em habitantes): \n");
            scanf("%d", &populacao_carta1);
        
            printf("Area (em km²): \n");
            scanf("%f", &area_carta1);
        
            printf("PIB (em milhões de reais): \n");
            scanf("%f", &pib_carta1);
        
            printf("Numero de pontos turísticos: \n");
            scanf("%d", &numerosdepontosturisticos_carta1);
        
            // Cálculos para densidade populacional e PIB per capita
            densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1; // Garantir que a divisão seja feita com float
pib_per_capita_carta1 = pib_carta1 / populacao_carta1; // PIB per capita em milhões de reais por habitante
        
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