#include <stdio.h>

/*
    Programa: Cadastro de Cartas do Super Trunfo de Países
    Nível: Novato
    Autor: [Edigar Pierott Torres]
    Descrição: Lê e exibe os dados de duas cartas do Super Trunfo.
*/

int main()
{
    // Variáveis para a Carta 1
    char estado1; // Letra do estado (A-H)
    char codigo1[5]; // Código da carta (ex: A01)
    char nomeCidade1[50]; // Nome da cidade
    int populacao1; // População da cidade
    float area1; // Área da cidade em km²
    float pib1; // PIB da cidade em bilhões de reais
    int pontosTuristicos1; // Número de pontos turísticos da cidade

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n"); // Início do cadastro da primeira carta

    printf("Digite a letra do Estado 1(A-H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê a letra do estado

    printf("Digite o código da carta 1(ex: A01): "); // Solicita o código da carta ao usuário
    scanf("%s", codigo1); // Lê o código da carta (string)

    printf("Digite o nome da cidade 1: "); // Solicita o nome da cidade ao usuário
    scanf(" %[^\n]", nomeCidade1); // Lê o nome da cidade (string com espaços)

    printf("Digite a população da cidade 1: "); // Solicita a população da cidade
    scanf("%d", &populacao1); // Lê a população (inteiro)

    printf("Digite a área da cidade 1(em km²): "); // Solicita a área da cidade
    scanf("%f", &area1); // Lê a área (float)

    printf("Digite o PIB da cidade 1(em bilhões de reais): "); // Solicita o PIB da cidade
    scanf("%f", &pib1); // Lê o PIB (float)

    printf("Digite o número de pontos turísticos da cidade 1: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // Variáveis para a Carta 2
    char estado2; // Letra do estado (A-H)
    char codigo2[5]; // Código da carta (ex: A02)
    char nomeCidade2[50]; // Nome da cidade
    int populacao2; // População da cidade
    float area2; // Área da cidade em km²
    float pib2; // PIB da cidade em bilhões de reais
    int pontosTuristicos2; // Número de pontos turísticos da cidade

    // Instruções para o usuário
    printf("Cadastro da Carta 2:\n"); // Início do cadastro da segunda carta
    printf("Digite a letra do Estado 2(A-H): "); // Solicita a letra do estado
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Digite o código da carta 2(ex: A02): "); // Solicita o código da carta ao usuário
    scanf("%s", codigo2); // Lê o código da carta (string)

    printf("Digite o nome da cidade 2: "); // Solicita o nome da cidade ao usuário
    scanf(" %[^\n]", nomeCidade2); // Lê o nome da cidade (string com espaços)

    printf("Digite a população da cidade 2: "); // Solicita a população da cidade
    scanf("%d", &populacao2); // Lê a população (inteiro)

    printf("Digite a área da cidade 2(em km²): "); // Solicita a área da cidade
    scanf("%f", &area2); // Lê a área (float)

    printf("Digite o PIB da cidade 2(em bilhões de reais): "); // Solicita o PIB da cidade
    scanf("%f", &pib2); // Lê o PIB (float)

    printf("Digite o número de pontos turísticos da cidade 2: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos (inteiro)


    // Cálculo dos atributos derivados
    float densidade1 = (float)populacao1 / area1; // Calcula a quantidade de habitantes por km², dividindo a população pela área da cidade
    float densidade2 = (float)populacao2 / area2; // Calcula a quantidade de habitantes por km², dividindo a população pela área da cidade
    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais por pessoa
    float pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em reais por pessoa

    // Cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1); // inverso da densidade populacional, pois quanto menor a densidade, maior o poder
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2); // inverso da densidade populacional, pois quanto menor a densidade, maior o poder
 
     // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n"); // Início da exibição dos dados da primeira carta
    printf("Estado: %c\n", estado1); // Exibe a letra do estado
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população da cidade
    printf("Área: %.2f km²\n", area1); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n"); // Início da exibição dos dados da segunda carta
    printf("Estado: %c\n", estado2); // Exibe a letra do estado
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade
    printf("População: %d\n", populacao2); // Exibe a população da cidade
    printf("Área: %.2f km²\n", area2); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos

    // Comparação dos atributos
    // Para cada atributo (população, área, PIB, pontos turísticos, PIB per capita e Super Poder), vence a carta com o maior valor
    // Para densidade populacional, vence a carta com o menor valor (por isso o operador <)
    // O resultado mostra qual carta venceu (1 para Carta 1, 2 para Carta 2) e imprime (1) se Carta 1 venceu ou (0) se Carta 2 venceu 
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}