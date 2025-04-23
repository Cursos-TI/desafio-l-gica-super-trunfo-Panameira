#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;           // PIB em bilhões de reais
    int pontos1, pontos2;

    // Variáveis para cálculos adicionais
    float dens1, dens2;         // Densidade populacional (hab/km²)
    float percapita1, percapita2; // PIB per capita (reais por pessoa)

    // --- Leitura dos dados da Carta 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^]", cidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area em km²: ");
    scanf(" %f", &area1);

    printf("PIB em bilhoes de reais: ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos1);

    // --- Leitura dos dados da Carta 2 ---
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf(" %4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^]", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area em km²: ");
    scanf(" %f", &area2);

    printf("PIB em bilhoes de reais: ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    // --- Cálculos avançados ---
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;

    // Converter PIB de "bilhoes" para reais e calcular per capita
    percapita1 = (pib1 * 1e9f) / populacao1;
    percapita2 = (pib2 * 1e9f) / populacao2;

    // --- Exibição dos resultados ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", percapita2);

    return 0;
}
