#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50] = "Recife", cidade2[50] = "Salvador";

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    int pontos1, pontos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    
    // Cadastro das Cartas:
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos1);

    //

    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Cálculo da densidade populacional (habitantes por km²) === 
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // === Cálculo do PIB per capita (riqueza média por habitante) ===
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

        // Exemplo:
    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("Carta 1: %.2f km2\n", area1);
    printf("Carta 2: %.2f km2\n", area2);

    if (area1 > area2) {
    printf("Resultado: Carta 1 (%s) venceu a Carta 2 (%s).\n", cidade1, cidade2);
    } else {
    printf("Resultado: Carta 2 (%s) venceu a Carta 1 (%s).\n", cidade2, cidade1);
}
    return 0;
}
