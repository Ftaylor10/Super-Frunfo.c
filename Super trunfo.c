#include <stdio.h>

int main(){


    //Declaração das variaveis da primeira carta

    char estado1,estado2;
    char codigo1[4],codigo2[4];
    char nomecidade1[20],nomecidade2[20];
    int populacao1,populacao2;
    float area1,area2,pib1,pib2;
    int pontosturisticos1,pontosturisticos2;
    

    // Entrada de dados da primeira carta

    printf("Cadastro da carta 1:\n");

    printf("Digite o estado da primeira cidade (A-H):");
    scanf("%c", &estado1);

    printf("Digite o código da primeira carta:");
    scanf("%s",codigo1);

    printf("Digite o nome da primeira cidade:");
    scanf("%s", nomecidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosturisticos1);


    // Entrada de dados da segunda carta 

    printf("Cadastro da carta 2:\n");

    printf("Digite o estado da segunda cidade (A-H): ");
    scanf("%c", &estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosturisticos2);

    //Calculo Da Densidade Populacional e PIB per capita

    float Densidade1 = populacao1 / area1;
    float Densidade2 = populacao2 / area2;
    float Pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    //Calculo do super poder 

    float Superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + Pib_per_capita1 + (1 / Densidade1);
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pib_per_capita2 + (1 / Densidade2);


    // Exibição dos resultados

    printf("\nComparacao de Cartas:\n");
    printf("População:Carta %d Venceu\n", populacao1 > populacao2 ? 1:2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", Densidade1 < Densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", Pib_per_capita1 > pib_per_capita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", Superpoder1 > superpoder2 ? 1 : 2);


    return 0;


}