#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Fortaleza";
    int populacao1 = 2428708;
    float area1 = 312.353;
    double pib1 = 8600000000.00;
    int pontosTuristicos1 = 25;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[] = "Natal";
    int populacao2 = 751300;
    float area2 = 167.40;
    double pib2 = 31000000000.0;
    int pontosTuristicos2 = 15;
  // Área para entrada de dados
    

  // Área para exibição dos dados da cidade
    // Exibição da Carta 1
    printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2lf reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2lf reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
return 0;
} 
