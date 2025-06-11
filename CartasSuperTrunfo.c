#include <stdio.h>

// Função para calcular Super Poder
float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontosTuristicos, float densidade, float pibPerCapita) {
    float inversoDensidade = 1.0 / densidade;
    return (float)populacao + area + pib + pontosTuristicos + pibPerCapita + inversoDensidade;
}

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);

    // Entrada de dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\n", pontosTuristicos1, densidade1, pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\n", pontosTuristicos2, densidade2, pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");

    int resultado;

    // População
    resultado = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Área
    resultado = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB
    resultado = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Pontos Turísticos
    resultado = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Densidade Populacional (menor vence!)
    resultado = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB per Capita
    resultado = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Super Poder
    resultado = (superPoder1 > superPoder2) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
