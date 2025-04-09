#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada da carta 1
    printf("Cadastro da carta 1:\n");
    printf("Digite o estado da cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhoes R$): ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada da carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Digite o estado da cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhoes R$): ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Menu de atributos
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char nome_atributo1[30], nome_atributo2[30];

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (com menu dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    switch (atributo1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per capita\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per capita\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per capita\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Demografica\n6 - PIB per capita\n");
            break;
        case 5:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per capita\n");
            break;
        case 6:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }
    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: Os atributos devem ser diferentes.\n");
        return 1;
    }

    // Atribuindo os valores do primeiro atributo
    switch (atributo1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            sprintf(nome_atributo1, "Populacao");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(nome_atributo1, "Area");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(nome_atributo1, "PIB");
            break;
        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            sprintf(nome_atributo1, "Pontos Turisticos");
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            sprintf(nome_atributo1, "Densidade Demografica");
            break;
        case 6:
            valor1_carta1 = pib_per_capita1;
            valor1_carta2 = pib_per_capita2;
            sprintf(nome_atributo1, "PIB per capita");
            break;
        default:
            printf("Erro no primeiro atributo.\n");
            return 1;
    }

    // Atribuindo os valores do segundo atributo
    switch (atributo2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            sprintf(nome_atributo2, "Populacao");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(nome_atributo2, "Area");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(nome_atributo2, "PIB");
            break;
        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            sprintf(nome_atributo2, "Pontos Turisticos");
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            sprintf(nome_atributo2, "Densidade Demografica");
            break;
        case 6:
            valor2_carta1 = pib_per_capita1;
            valor2_carta2 = pib_per_capita2;
            sprintf(nome_atributo2, "PIB per capita");
            break;
        default:
            printf("Erro no segundo atributo.\n");
            return 1;
    }

    // Comparações
    int resultado1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : 2) : (valor1_carta1 > valor1_carta2 ? 1 : 2);
    int resultado2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : 2) : (valor2_carta1 > valor2_carta2 ? 1 : 2);

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Resultado final
    printf("\n--- Resultado da Comparacao ---\n");
    printf("Carta 1: %s\n", nomecidade1);
    printf("Carta 2: %s\n\n", nomecidade2);

    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) => Carta %d venceu\n", nome_atributo1, valor1_carta1, valor1_carta2, resultado1);
    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) => Carta %d venceu\n", nome_atributo2, valor2_carta1, valor2_carta2, resultado2);

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 == soma2) {
        printf("Resultado final: Empate!\n");
    } else {
        int vencedor_final = soma1 > soma2 ? 1 : 2;
        printf("Resultado final: Carta %d venceu!\n", vencedor_final);
    }

    return 0;
}
