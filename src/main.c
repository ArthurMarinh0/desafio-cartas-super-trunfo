#include <stdio.h>

int main(){

    //variaveis
    char estado1 = 'A';
    char estado2 = 'B';
    
    int codigoCarta1 = 1;
    int codigoCarta2 = 2;

    char nomeCidade1[50] = "Rio de janeiro";
    char nomeCidade2[50] = "Belo Horizonte";

    float populacao1 = 16055174;
    float populacao2 = 21393441;

    float area1 = 1.255;
    float area2 = 331;

    float pib1 = 359.64;
    float pib2 = 105.8;

    int pontosTuristicos1= 60;
    int pontosTuristicos2= 35;


    printf("***Cartas Super Trunfo***\n");

    //Cartas do jogo

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c0%d\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %.0lf\n", populacao1);
    printf("Area: %.3f Km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%d\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.0lf\n", populacao2);
    printf("Area: %.3f Km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    


    return 0;
}