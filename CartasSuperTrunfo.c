#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Cristiano

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[15];
    char codigo[4];
    float populacao, area, pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Entre com o nome da cidade:\n");
    scanf("%s", &nome);
    
    printf("Entre com o código da cidade:\n");
    scanf("%s", &codigo);

    printf("Entre com a população da cidade:\n");
    scanf("%f", &populacao);

    printf("Entre com a área da Cidade:\n");
    scanf("%f", &area);

    printf("Entre com o pib da cidade:\n");
    scanf("%f", &pib);

    printf("Entre com o número de pontos turísticos da cidade:\n");
    scanf("%f", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da Cidade: %s\n", nome);
    printf("Codigo da Cidade: %s\n", codigo);
    printf("População da Cidade: %f\n", populacao);
    printf("Área da Cidade: %f\n", area);
    printf("Número de Pontos Turísticos da Cidade: %d\n", pontos_turisticos);

    return 0;
}
