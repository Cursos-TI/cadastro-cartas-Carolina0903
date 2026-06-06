#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Fortaleza";
    unsigned long int populacao1 = 2428708;
    float area1 = 312.353;
    double pib1 = 8600000000.00;
    int pontosTuristicos1 = 25;

    // ===== CARTA 2 =====
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Natal";
    unsigned long int populacao2 = 751300;
    float area2 = 167.40;
    double pib2 = 31000000000.0;
    int pontosTuristicos2 = 15;

    // ===== CÁLCULOS =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // inverso da densidade (quanto menor densidade, maior poder)
    float invDensidade1 = 1.0f / densidade1;
    float invDensidade2 = 1.0f / densidade2;

    // ===== SUPER PODER =====
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1
                        + pibPerCapita1 + invDensidade1;

    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2
                        + pibPerCapita2 + invDensidade2;

    // ===== EXIBIÇÃO =====
    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // ===== COMPARAÇÃO =====
    printf("\n===== COMPARACAO =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // densidade (menor vence)
    printf("Densidade: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
