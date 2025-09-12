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

    printf("Comparacao de cartas (Atributo: Pontos Turisticos):\n");

    if(pontosTuristicos1 > pontosTuristicos2){
        printf("\nCarta 1 - %s (RJ): %d\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s (BH): %d\n", nomeCidade2, pontosTuristicos2);
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
    }
    else{
        printf("Carta 1 - %s (RJ): %d\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s (BH): %d\n", nomeCidade2, pontosTuristicos2);
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
    }
    
    


    return 0;
}
