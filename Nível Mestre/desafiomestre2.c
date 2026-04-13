#include <stdio.h>

int main() {

    char cidade1[] = "Recife";
    char cidade2[] = "Salvador";

    unsigned long int populacao1 = 1600000, populacao2 = 2900000;
    float area1 = 218.8, area2 = 693.8;
    float pib1 = 52.0, pib2 = 62.0;
    int pontos1 = 10, pontos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;

    // ================= MENU =================
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos turísticos\n");
    if (opcao1 != 5) printf("5. Densidade demográfica\n");

    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Erro: não pode repetir atributo!\n");
        return 0;
    }

    // ================= VARIÁVEIS =================
    float v1a1, v2a1, v1a2, v2a2;

    // ================= ATRIBUTO 1 =================
    switch(opcao1) {
        case 1: v1a1 = populacao1; v2a1 = populacao2; break;
        case 2: v1a1 = area1; v2a1 = area2; break;
        case 3: v1a1 = pib1; v2a1 = pib2; break;
        case 4: v1a1 = pontos1; v2a1 = pontos2; break;
        case 5: v1a1 = densidade1; v2a1 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ================= ATRIBUTO 2 =================
    switch(opcao2) {
        case 1: v1a2 = populacao1; v2a2 = populacao2; break;
        case 2: v1a2 = area1; v2a2 = area2; break;
        case 3: v1a2 = pib1; v2a2 = pib2; break;
        case 4: v1a2 = pontos1; v2a2 = pontos2; break;
        case 5: v1a2 = densidade1; v2a2 = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ================= COMPARAÇÃO INDIVIDUAL =================
    printf("\n=== Comparação dos Atributos Escolhidos ===\n");

    int resultado1 = (opcao1 == 5) ? (v1a1 < v2a1) : (v1a1 > v2a1);
    int resultado2 = (opcao2 == 5) ? (v1a2 < v2a2) : (v1a2 > v2a2);

    printf("Atributo 1: Carta 1 venceu (%d)\n", resultado1);
    printf("Atributo 2: Carta 1 venceu (%d)\n", resultado2);

    // ================= SOMA =================
    float soma1 = v1a1 + v1a2;
    float soma2 = v2a1 + v2a2;

    // ================= RESULTADO FINAL =================
    printf("\n=== Resultado Final ===\n");

    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}