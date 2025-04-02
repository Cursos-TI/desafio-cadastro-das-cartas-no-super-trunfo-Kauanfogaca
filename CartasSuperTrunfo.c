#include <stdio.h>

int main() {
    //Variaveis das cartas.

    char estadoA[3], estadoB[3];
    char codigoA[5], codigoB[5];
    char nomedacidadeA[20], nomedacidadeB[20];
    float pib1, pib2, populacao1, populacao2, area1, area2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    //Cadastro da carta numero 1.
    printf("Insira o codigo da carta 1 (exemplo: C1)");
    scanf("%s", codigoA);
    getchar(); // limpeza de buffer.

    printf("Insira o nome da cidade:");
    scanf("%s", nomedacidadeA);
    getchar();

    printf("Insira a sigla do estado: (exemplo: SP):");
    scanf("%s", estadoA);
    getchar();

    printf("Insira a população: ");
    scanf("%f", &populacao1);
    getchar();

    printf("Insira a área:");
    scanf("%f", &area1);
    getchar();

    printf("Insira o PIB:");
    scanf("%f", &pib1);
    getchar();
    
    printf("Insira o numero de pontos turisticos:");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float)(populacao1 / area1);
    
    pibpercapita1 = (float)(pib1 / populacao1);


    // Cadastro da carta numero 2

    printf("Insira o codigo da carta 2:");
    scanf("%s", codigoB);

    printf("Insira o nome da cidade:");
    scanf("%s", nomedacidadeB);

    printf("Insira o estado:");
    scanf("%s", estadoB);

    printf("Insira o numero da população:");
    scanf("%f", &populacao2);

    printf("Insira a área:");
    scanf("%f", &area2);

    printf("Insira o PIB:");
    scanf("%f", &pib2);

    printf("Insra o numero de pontos turisticos:");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float)(populacao2 / area2);

    pibpercapita2 = (float)(pib2 / populacao2);


    //Exibição das informacoes das cartas.
    // carta 1.
    printf("Codigo da carta 1: %s \n", codigoA);
    printf("Nome da cidade: %s \n", nomedacidadeA);
    printf("Estado: %s \n", estadoA);
    printf("População: %3.f \n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);
    printf("A Densidade populacional é: %.f hab/km² \n", densidadepopulacional1);
    printf("O PIB per capita é: %f bilhão de reais \n", pibpercapita1);


    //carta 2.
    printf("Codigo da carta 1: %s \n", codigoB);
    printf("Nome da cidade: %s \n", nomedacidadeB);
    printf("Estado: %s \n", estadoB);
    printf("População: %3.f \n", populacao2);
    printf("Área: %.f \n", area2);
    printf("PIB: %.f bilhões de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    printf("A Densidade populacional é: %f hab/km² \n", densidadepopulacional2);
    printf("O PIB per capita é: %f  bilhão de reais \n", pibpercapita2);


    return 0;
}
