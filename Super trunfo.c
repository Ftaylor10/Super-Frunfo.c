#include <stdio.h>

int main(){


    //Declaração das variaveis da primeira carta

    char estado1;
    char codigo1[4];
    char nomecidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibPercapita1;

    //Declaração das variavies da segunda cartra

    char estado2;
    char codigo2[4];
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibPercapita2;

    // Entrada de dados da primeira carta

    printf("Cadastro da carta 1:\n");

    printf("Digite o estado:");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta:");
    scanf("%s",codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", nomecidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o Pib:\n");
    scanf("%f", &pib1);

    printf("Digite o total de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);

    //Calculo da primeira carta

    densidadepopulacional1 = populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;


    
    // Entrada de dados da segunda carta 

    printf("Cadastro da carta 2:\n");

    printf("Digite o estado:");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta:");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", nomecidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o Pib:\n");
    scanf("%f", &pib2);

    printf("Digite o total de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);

    //Calculo da segunda carta

    densidadepopulacional2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;


    //Saida de dados da carta 1

    printf("\nCarta 1:\n");
    printf("Estado:%c\n",estado1);
    printf("Codigo da carta:%s\n",codigo1);
    printf("Nome da cidade:%s\n", nomecidade1);
    printf("A populacao:%d\n",populacao1);
    printf("Digite a area:%f\n", area1);
    printf("O pib é:%f\n",pib1);
    printf("O numero de pontos turisticos é:%d\n",pontosturisticos1);
    printf("Densidade populacional:%.2f Hab/km\n",densidadepopulacional1);
    printf("PIB per capita:%.2f reais\n",pibPercapita1);

    //Saida de dados da carta 2

    printf("\nCarta 2:\n");
    printf("Estado:%c\n",estado2);
    printf("Codigo da carta:%s\n",codigo2);
    printf("Nome da cidade:%s\n", nomecidade2);
    printf("A populacao:%d\n",populacao2);
    printf("Digite a area:%f\n", area2);
    printf("O pib é:%f\n",pib2);
    printf("O numero de pontos turisticos é:%d\n",pontosturisticos2);
    printf("Densidade populacional:%.2f Hab/km\n",densidadepopulacional2);
    printf("PIB per capita:%.2f reais\n",pibPercapita2);
    

    return 0;


}