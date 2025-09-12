#include <stdio.h>

int main(){

    // --- Variáveis das Carta 1 e Carta 2 ---
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


    // Super Poder = soma de todos os atributos + inverso da densidade (quanto menor a densidade, maior o poder)
    float superPoder1 = (float)populacao1 + (float)area1 + pib1 + (float)pontosTuristicos1 + (float)pibPerCapta1 + (float)(1.0 / densidadePopu1);
    float superPoder2 = (float)populacao2 + (float)area2 + pib2 + (float)pontosTuristicos2 + (float)pibPerCapta2 + (float)(1.0 / densidadePopu2);





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
    printf("Super Poder: %.0f\n", superPoder1);

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
    printf("Super Poder: %.0f\n", superPoder2);


    // Comparação das cartas

    // Expressões relacionais → resultado será 1 (verdadeiro) ou 0 (falso)

    // População (maior vence)
    int carta1VencePopulacao = (populacao1 > populacao2);
    // Área (maior vence)
    int carta1VenceArea = (area1 > area2);
    // PIB (maior vence)
    int carta1VencePIB = (pib1 > pib2);
    // Pontos Turísticos (maior vence)
    int carta1VencePontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    // Densidade Populacional (menor vence)
    int carta1VenceDensidadePopu = (densidadePopu1 < densidadePopu2);
    // PIB per Capita (maior vence)
    int carta1VencePIBPerCapta = (pibPerCapta1 > pibPerCapta2);
    // Super Poder (maior vence)
    int carta1VenceSuperPoder = (superPoder1 > superPoder2);

    printf("\nComparacao de Cartas:\n");

    
    // Em cada printf:
    // Primeiro %d = número da carta vencedora (1 ou 2)
    // Segundo %d = resultado lógico da comparação (1 se Carta 1 venceu, 0 se Carta 2 venceu)

    // População
    printf("\nPopulacao: Carta 1 = %lu, Carta 2 = %lu", populacao1, populacao2);
    printf("\nCarta %d venceu (%d)\n", carta1VencePopulacao * 1 + (!carta1VencePopulacao) * 2, carta1VencePopulacao);

    // Área
    printf("\nArea: Carta 1 = %.0f, Carta 2 = %.0f", area1, area2);
    printf("\nCarta %d venceu (%d)\n", carta1VenceArea * 1 + (!carta1VenceArea) * 2, carta1VenceArea);

    // PIB
    printf("\nPIB: Carta 1 = %2.f, Carta 2 = %2.f", pib1, pib2);
    printf("\nCarta %d venceu (%d)\n", carta1VencePIB * 1 + (!carta1VencePIB) * 2, carta1VencePIB);

    // Pontos Turísticos
    printf("\nPontos Turisticos: Carta 1 = %d, Carta 2 = %d", pontosTuristicos1, pontosTuristicos2);
    printf("\nCarta %d venceu (%d)\n", carta1VencePontosTuristicos * 1 + (!carta1VencePontosTuristicos) * 2, carta1VencePontosTuristicos);

    // Densidade Populacional
    printf("\nDensidade Populacional: Carta 1 = %.2lf, Carta 2 = %.2lf", densidadePopu1, densidadePopu2);
    printf("\nCarta %d venceu (%d)\n", carta1VenceDensidadePopu * 1 + (!carta1VenceDensidadePopu) * 2, carta1VenceDensidadePopu);

    // PIB per Capita
    printf("\nPIB per Capita: Carta 1 = %.0f, Carta 2 = %.0f", pibPerCapta1, pibPerCapta2);
    printf("\nCarta %d venceu (%d)\n", carta1VencePIBPerCapta * 1 + (!carta1VencePIBPerCapta) * 2, carta1VencePIBPerCapta);

    // Super Poder
    printf("\nSuper Poder: Carta 1 = %2.f, Carta 2 = %2.f", superPoder1, superPoder2);
    printf("\nCarta %d venceu (%d)\n", carta1VenceSuperPoder * 1 + (!carta1VenceSuperPoder) * 2, carta1VenceSuperPoder);


    return 0;
}