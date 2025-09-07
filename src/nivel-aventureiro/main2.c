#include <stdio.h>

int main(){

    // --- Variáveis da Carta 1 e Carta 2 ---
    char estado1 = 'R';
    char estado2 = 'B';
    
    int codigoCarta1 = 1;
    int codigoCarta2 = 2;

    char nomeCidade1[50] = "Rio de janeiro";
    char nomeCidade2[50] = "Belo Horizonte";

    double populacao1 = 6211223;
    double populacao2 = 2315560;

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
    printf("Populacao: %.0f\n", populacao1);         // Mostra a população sem casas decimais
    printf("Area: %.3lf Km2\n", area1);               // Mostra a área com 3 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1 / 1e9);    // Mostra o PIB com 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopu1);
    printf("PIB per Capita: R$%.2lf reais\n", pibPerCapta1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%d\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.0lf\n", populacao2);
    printf("Area: %.0lf Km2\n", area2);           // Mostra a area sem 0's a direita
    printf("PIB: %.2f bilhoes de reais\n", pib2 / 1e9); 
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopu2);
    printf("PIB per Capita: R$%.2lf reais", pibPerCapta2);

    return 0;
}