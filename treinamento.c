#include <stdio.h>
#include <stdlib.h> 
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
            printf("=======JOGO DE CARTA SUPER TRUNFO====== \n");

    
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
        
            printf("\n");


            //dados carta2
        char estado_carta2[6];                // Variável para o estado (1 caractere)
        char codigo_carta2[6];                // Código     da cidade  
     char nome_carta2[50];                 // Nome da cidade
           int populacao_carta2;                 // População da cidade
           float  area_carta2;                    // Área da cidade (em km²)
           float pib_carta2;                     // PIB da cidade (em milhões de reais)
           int numerosdepontosturisticos_carta2; // Número de pontos turísticos
       
           // Variáveis para os cálculos
           float densidade_populacional_carta2; // Densidade populacional (hab/km²)
           float pib_per_capita_carta2 ;          // PIB per capita (milhões de reais por habitante)

            // Entrada de dados carta1
            printf("=====CARTA 1===== \n");

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
        
            printf("\n");

             // Entrada de dados carta2
             printf("=====CARTA 2===== \n");

             printf("ESTADO (Exemplo: SP): \n");
             scanf("%s", estado_carta2);
             
             printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
             scanf("%s", codigo_carta2); 
         
             printf("Nome da cidade: \n");
             scanf(" %49[^\n]", nome_carta2);  // Captura a linha inteira, permitindo espaços no nome
         
             printf("Populacao (em habitantes): \n");
             scanf("%d", &populacao_carta2);
         
             printf("Area (em km²): \n");
             scanf("%f", &area_carta2);
         
             printf("PIB (em milhões de reais): \n");
             scanf("%f", &pib_carta2);
         
             printf("Numero de pontos turísticos: \n");
             scanf("%d", &numerosdepontosturisticos_carta2);
         
             // Cálculos para densidade populacional e PIB per capita
             densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2; // Garantir que a divisão seja feita com float
             pib_per_capita_carta2 = pib_carta2 / populacao_carta2; // PIB per capita em milhões de reais por habitante

            // Saída de dados carta1
            printf("\n===== DADOS DA CARTA 1 =====\n");
            printf("Estado: %s\n", estado_carta1);
            printf("Codigo da cidade: %s\n", codigo_carta1);
            printf("Nome da cidade: %s\n", nome_carta1);
            printf("Populacao: %d habitantes\n", populacao_carta1);
            printf("Area: %.2f km²\n", area_carta1); // Formatação com 2 casas decimais
            printf("PIB: %.2f milhões de reais\n", pib_carta1); // Formatação com 2 casas decimais
            printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos_carta1);
            printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_carta1);
            printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita_carta1);
            
            // Saída de dados carta2
            printf("\n===== DADOS DA CARTA 2 =====\n");
            printf("Estado: %s\n", estado_carta2);
            printf("Codigo da cidade: %s\n", codigo_carta2);
            printf("Nome da cidade: %s\n", nome_carta2);
            printf("Populacao: %d habitantes\n", populacao_carta2);
            printf("Area: %.2f km²\n", area_carta2); // Formatação com 2 casas decimais
            printf("PIB: %.2f milhões de reais\n", pib_carta2); // Formatação com 2 casas decimais
            printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos_carta2);
            printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_carta2);
            printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita_carta2);

            printf("\n");

            // COMPARAÇÃO ENTRE AS CARTAS PARA DEFINIR O GANHADOR 
    if (populacao_carta1 > populacao_carta2) {
        printf("CARTA 1 TEM A MAIOR POPULAÇÃO! \n");
        printf("A CIDADE VENCEDORA É: %s\n", nome_carta1);
    } else if (populacao_carta2 > populacao_carta1) {
        printf("CARTA 2 TEM A MAIOR POPULAÇÃO! \n");
        printf("A CIDADE VENCEDORA É: %s\n", nome_carta2);
    } else {
        printf("EMPATE! AMBAS AS CIDADES TÊM A MESMA POPULAÇÃO.\n");
    }

    return 0;
}