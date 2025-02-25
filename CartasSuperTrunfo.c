#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Requisitos funcionais:
// O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
// O programa deve armazenar os dados lidos em variáveis apropriadas.
// O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

// Requisitos não funcionais:
// Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
// Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
// Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

// Simplificações para o desafio:
// Você só precisa implementar o cadastro e a exibição de duas cartas.
// Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
// Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.

int main()
{
    // Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    // População: O número de habitantes da cidade. Tipo: int
    // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    // PIB: O Produto Interno Bruto da cidade. Tipo: float
    // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    // Dados de amostra:

    // Carta 1:
    // Estado: A
    // Código: A01
    // Nome da Cidade: São Paulo
    // População: 12325000
    // Área: 1521.11 km²
    // PIB: 699.28 bilhões de reais
    // Número de Pontos Turísticos: 50

    // Carta 2:
    // Estado: B
    // Código: B02
    // Nome da Cidade: Rio de Janeiro
    // População: 6748000
    // Área: 1200.25 km²
    // PIB: 300.50 bilhões de reais
    // Número de Pontos Turísticos: 30

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Seguindo as regras, não podemos usar estruturas de repetição ou laços. Portanto, vamos praticamente replicar o código para as 2 entradas,
    // apenas adaptando as correspondências para cada uma delas.

    // Entradas da primeira carta:
    char estado_1, codigo_1[5], nome_1[20];
    float populacao_1, area_1, pib_1;
    int pontos_turisticos_1;
    // Entradas da segunda carta:
    char estado_2, codigo_2[5], nome_2[20];
    float populacao_2, area_2, pib_2;
    int pontos_turisticos_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entradas da primeira carta:

    printf("Entre com o estado da cidade (Carta 1):\n");
    //scanf("%c", &estado_1);
    //getc(stdin);
    fgets(estado_1, sizeof(estado_1), stdin);

    printf("Entre com o código da cidade (Carta 1):\n");
    //scanf("%4s", codigo_1);
    fgets(codigo_1, sizeof(codigo_1), stdin);
    //getc(stdin);

    printf("Entre com o nome da cidade (Carta 1):\n");
    fgets(nome_1, sizeof(nome_1), stdin);
    //getc(stdin);

    printf("Entre com a população da cidade (Carta 1):\n");
    scanf("%f", &populacao_1);

    printf("Entre com a área da cidade (Carta 1):\n");
    scanf("%f", &area_1);

    printf("Entre com o pib da cidade (Carta 1):\n");
    scanf("%f", &pib_1);

    printf("Entre com o número de pontos turísticos da cidade (Carta 1):\n");
    scanf("%d", &pontos_turisticos_1);

    // Entradas da segunda carta:

    printf("Entre com o estado da cidade (Carta 2):\n");
    //scanf("%c", estado_2);
    //getc(stdin);

    printf("Entre com o código da cidade (Carta 2):\n");
    //scanf("%4s", codigo_2);
    fgets(codigo_2, sizeof(codigo_2), stdin);
    //getc(stdin);

    printf("Entre com o nome da cidade (Carta 2):\n");
    fgets(nome_2, sizeof(nome_2), stdin);
    //getc(stdin);

    printf("Entre com a população da cidade (Carta 2):\n");
    scanf("%f", &populacao_2);

    printf("Entre com a área da cidade (Carta 2):\n");
    scanf("%f", &area_2);

    printf("Entre com o pib da cidade (Carta 2):\n");
    scanf("%f", &pib_2);

    printf("Entre com o número de pontos turísticos da cidade (Carta 2):\n");
    scanf("%d", &pontos_turisticos_2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Dados da primeira carta:
    printf("Estado (Carta 1): %c\n", estado_1);
    printf("Codigo (Carta 1): %4s\n", codigo_1);
    printf("Nome (Carta 1): %20s\n", nome_1);
    printf("População (Carta 1): %f\n", populacao_1);
    printf("Área (Carta 1): %f\n", area_1);
    printf("Número de Pontos Turísticos (Carta 1): %d\n", pontos_turisticos_1);

    // Dados da segunda carta:
    printf("Estado (Carta 2): %c\n", estado_2);
    printf("Codigo (Carta 2): %4s\n", codigo_2);
    printf("Nome (Carta 2): %20s\n", nome_2);
    printf("População (Carta 2): %f\n", populacao_2);
    printf("Área (Carta 2): %f\n", area_2);
    printf("Número de Pontos Turísticos (Carta 2): %d\n", pontos_turisticos_2);

    return 0;
}
