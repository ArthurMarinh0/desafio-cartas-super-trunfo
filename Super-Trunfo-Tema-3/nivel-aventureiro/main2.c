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

        // --- Variável para escolha do jogador ---
    int escolha;

    // --- Menu Interativo ---
    // Exibimos as opções para o jogador.
    printf("***** SUPER TRUNFO *****\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area (em km^2)\n");
    printf("3 - PIB (em USD)\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (hab/km^2)\n");
    printf("Digite sua opcao: ");
    // Le a escolha do usuário e guarda na variável 'escolha'.
    scanf("%d", &escolha);

    // Lógica de Comparação com switch
    // A estrutura switch direciona o programa para o bloco de código
    // correspondente à escolha do jogador.
    switch (escolha) {
        case 1: // Comparação por População
            printf("\n--- Atributo escolhido: Populacao ---\n");
            printf("Carta 1 (%s): %d habitantes\n", nomeCidade1, populacao1);
            printf("Carta 2 (%s): %d habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: A carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: A carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: // Comparação por Área
            printf("\n--- Atributo escolhido: Area ---\n");
            //"%.2f" formata o número com 2 casas decimais.
            printf("Carta 1 (%s): %.2f km^2\n", nomeCidade1, area1);
            printf("Carta 2 (%s): %.2f km^2\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("\nResultado: A carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("\nResultado: A carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3: // Comparação por PIB
            printf("\n--- Atributo escolhido: PIB ---\n");
            printf("Carta 1 (%s): $%.2f\n", nomeCidade1, pib1);
            printf("Carta 2 (%s): $%.2f\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: A carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: A carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            printf("\n--- Atributo escolhido: Pontos Turisticos ---\n");
            printf("Carta 1 (%s): %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 (%s): %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: A carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: A carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5: // Comparação por Densidade Demográfica
            printf("\n--- Atributo escolhido: Densidade Demografica ---\n");
            printf("Neste atributo, o MENOR valor vence!\n");
            printf("Carta 1 (%s): %.2f hab/km^2\n", nomeCidade1, densidadePopu1);
            printf("Carta 2 (%s): %.2f hab/km^2\n", nomeCidade2, densidadePopu2);

            // Regra invertida: vence quem tem o MENOR valor.
            if (densidadePopu1 < densidadePopu2) {
                printf("\nResultado: A carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidadePopu2 < densidadePopu1) {
                printf("\nResultado: A carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default: // Caso o usuário digite uma opção inválida
            printf("\nOpcao invalida! Por favor, execute o programa novamente e escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}