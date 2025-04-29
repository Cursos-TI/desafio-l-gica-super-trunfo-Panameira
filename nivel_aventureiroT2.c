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
    
    printf("\ncarta 1 - %s (%c): Populacao = %lu, Densidade = %.2f, PIB per capita = %.2f\n",
        cidade1, estado1, populacao1, dens1, percapita1);
    printf("carta 2 - %s (%c): Populacao = %lu, Densidade = %.2f, PIB per capita = %.2f\n",
        cidade2, estado2, populacao2, dens2, percapita2);   

    // Comparações
    
    printf("\nComparacao de cartas (Atributos: Populacao)\n");
    printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);

      if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) Venceu!\n",cidade1);
      } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) Venceu!\n",cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }

    return 0;
}

// Nivel Aventureiro Tema 2