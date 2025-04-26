#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Cálculos
    float dens1, dens2;
    float percapita1, percapita2;
    float super1, super2;

    // --- Leitura dos dados da Carta 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf(" %lu", &populacao1);

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
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area em km²: ");
    scanf(" %f", &area2);

    printf("PIB em bilhoes de reais: ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    // Cálculos
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;

    float pib_reais1 = pib1 * 1e9;
    float pib_reais2 = pib2 * 1e9;

    percapita1 = pib_reais1 / populacao1;
    percapita2 = pib_reais2 / populacao2;

    super1 = (float)populacao1 + area1 + pib_reais1 + pontos1 + percapita1 + (1 / dens1);
    super2 = (float)populacao2 + area2 + pib_reais2 + pontos2 + percapita2 + (1 / dens2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Super Poder: %.2f\n", super2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
