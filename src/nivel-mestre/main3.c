#include <stdio.h>

int main(){

    // --- Variáveis da Carta 1 e Carta 2 ---
    char estado1 = 'R';
    char estado2 = 'B';
    
    int codigoCarta1 = 1;
    int codigoCarta2 = 2;

    char nomeCidade1[50] = "Rio de janeiro";
    char nomeCidade2[50] = "Belo Horizonte";

    unsigned long int populacao1 = 6211223;
    unsigned long int populacao2 = 2315560;

    double area1 = 1255;
    double area2 = 331;

    float pib1 = 359640000000;
    float pib2 = 105800000000;

    int pontosTuristicos1 = 60;
    int pontosTuristicos2 = 35;

    // --- Cálculos ---

    double densidadePopu1 = populacao1 / area1;
    double densidadePopu2 = populacao2 / area2;

    double pibPerCapta1 = pib1 / populacao1;
    double pibPerCapta2 = pib2 / populacao2;
    


    printf("***Cartas Super Trunfo***\n");

    // --- Exibição da Cartas 1 e 2 ---

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);         // Mostra a inicial do estado
    printf("Codigo: %c0%d\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %.0u\n", populacao1);         // Mostra a população sem casas decimais
    printf("Area: %.3f Km2\n", area1);               // Mostra a área com 3 casas decimais
    printf("PIB: %.2lf bilhoes de reais\n", pib1 / 1e9);    // Mostra o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidadePopu1);
    printf("PIB per Capita: R$%.2lf reais\n", pibPerCapta1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%d\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.0u\n", populacao2);
    printf("Area: %.0f Km2\n", area2);           // Mostra a area sem 0's a direita
    printf("PIB: %.2lf bilhoes de reais\n", pib2 / 1e9); 
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidadePopu2);
    printf("PIB per Capita: R$%.2lf reais\n", pibPerCapta2);

    //Comparação das cartas

    // Comparações
    const char* vencedorPopulacao = (populacao1 > populacao2) ? "Carta 1" : (populacao2 > populacao1) ? "Carta 2" : "Empate";
    const char* vencedorArea = (area1 > area2) ? "Carta 1" : (area2 > area1) ? "Carta 2" : "Empate";
    const char* vencedorPIB = (pib1 > pib2) ? "Carta 1" : (pib2 > pib1) ? "Carta 2" : "Empate";
    const char* vencedorPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : (pontosTuristicos2 > pontosTuristicos1) ? "Carta 2" : "Empate";
    const char* vencedorDensidadePopu = (densidadePopu1 > densidadePopu2) ? "Carta 1" : (densidadePopu2 > densidadePopu1) ? "Carta 2" : "Empate";
    const char* vencedorPIBPerCapta = (pibPerCapta1 > pibPerCapta2) ? "Carta 1" : (pibPerCapta2 > pibPerCapta1) ? "Carta 2" : "Empate";

    printf("\nComparacao de Cartas:\n");
    // População
    printf("\nPopulacao: Carta 1 = %lu, Carta 2 = %lu. \n", populacao1, populacao2);
    printf("Vencedor: %s\n", vencedorPopulacao);

    // Área
    printf("\nArea: Carta 1 = %.3f, Carta 2 = %.3f. \n", area1, area2);
    printf("Vencedor: %s\n", vencedorArea);

    // PIB
    printf("\nPIB: Carta 1 = %.2f, Carta 2 = %.2f. \n", pib1, pib2);
    printf("Vencedor: %s\n", vencedorPIB);

    // Pontos Turísticos
    printf("\nPontos Turisticos: Carta 1 = %d, Carta 2 = %d. \n", pontosTuristicos1, pontosTuristicos2);
    printf("Vencedor: %s\n", vencedorPontosTuristicos);

    // Densidade Populacional
    printf("\nDensidade Populacional: Carta 1 = %.2lf, Carta 2 = %.2lf. \n", densidadePopu1, densidadePopu2);
    printf("Vencedor: %s\n", vencedorDensidadePopu);

    // PIB per Capita
    printf("\nPIB per Capita: Carta 1 = %.2lf, Carta 2 = %.2lf. \n", pibPerCapta1, pibPerCapta2);
    printf("Vencedor: %s\n", vencedorPIBPerCapta);





    return 0;
}