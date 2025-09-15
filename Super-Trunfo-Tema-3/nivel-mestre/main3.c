#include <stdio.h>
#include <string.h> // Necessário para a função strcpy

int main() {
    char nomePais1[50] = "Brasil";
    char nomePais2[50] = "Japao";

    int populacao1 = 215300000;
    int populacao2 = 125700000;

    double area1 = 8516000.0;
    double area2 = 377975.0;

    double pib1 = 1609000000000.0;
    double pib2 = 4937000000000.0;

    int pontosTuristicos1 = 150;
    int pontosTuristicos2 = 250;

    double densidadeDemo1 = populacao1 / area1; // ~25.28
    double densidadeDemo2 = populacao2 / area2; // ~332.55

    // --- Variáveis para a lógica do jogo ---
    int escolha1, escolha2;
    
    // Variáveis para guardar os nomes e valores dos atributos escolhidos
    char nomeAttr1[50], nomeAttr2[50];
    double valorAttr1_Carta1 = 0, valorAttr1_Carta2 = 0;
    double valorAttr2_Carta1 = 0, valorAttr2_Carta2 = 0;
    
    double somaCarta1, somaCarta2;

    //Menu 1: Escolha Do Primeiro Atributo
    printf("***** SUPER TRUNFO - NIVEL MESTRE *****\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area (em km^2)\n");
    printf("3 - PIB (em USD)\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (hab/km^2)\n");
    printf("Digite sua opcao: ");
    scanf("%d", &escolha1);

    //Menu 1: Menu Dinamico Para O Segundo Atributo
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    //'if' para não exibir a opção já escolhida
    if (escolha1 != 1){
        printf("1 - Populacao\n"); 
    }
    if (escolha1 != 2){ 
        printf("2 - Area (em km^2)\n");
    }
    if (escolha1 != 3){ 
        printf("3 - PIB (em USD)\n"); 
    }
    if (escolha1 != 4){ 
        printf("4 - Numero de Pontos Turisticos\n"); 
    }
    if (escolha1 != 5){ 
        printf("5 - Densidade Demografica (hab/km^2)\n"); 
    }
    printf("Digite sua opcao: ");
    scanf("%d", &escolha2);

    //Validação das escolhas
    if (escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
        printf("\nERRO: Uma das opcoes digitadas e invalida! Fim de jogo.\n");
        return 1;
    }
    if (escolha1 == escolha2) {
        printf("\nERRO: Voce nao pode escolher o mesmo atributo duas vezes! Fim de jogo.\n");
        return 1;
    }


    //Obtendo Dados Da Escolha 1 (usando switch)
    // A função strcpy (string copy) copia o texto da direita para a variável da esquerda.
    switch (escolha1) {
        case 1: strcpy(nomeAttr1, "Populacao"); valorAttr1_Carta1 = populacao1; valorAttr1_Carta2 = populacao2; 
            break;
        case 2: strcpy(nomeAttr1, "Area"); valorAttr1_Carta1 = area1; valorAttr1_Carta2 = area2; 
            break;
        case 3: strcpy(nomeAttr1, "PIB"); valorAttr1_Carta1 = pib1; valorAttr1_Carta2 = pib2; 
            break;
        case 4: strcpy(nomeAttr1, "Pontos Turisticos"); valorAttr1_Carta1 = pontosTuristicos1; valorAttr1_Carta2 = pontosTuristicos2; 
            break;
        case 5: strcpy(nomeAttr1, "Densidade Demografica"); valorAttr1_Carta1 = densidadeDemo1; valorAttr1_Carta2 = densidadeDemo2; 
            break;
    }

    //Obtendo Dados Da Escolha 2 (usando switch)
    switch (escolha2) {
        case 1: strcpy(nomeAttr2, "Populacao"); valorAttr2_Carta1 = populacao1; valorAttr2_Carta2 = populacao2; 
            break;
        case 2: strcpy(nomeAttr2, "Area"); valorAttr2_Carta1 = area1; valorAttr2_Carta2 = area2; 
            break;
        case 3: strcpy(nomeAttr2, "PIB"); valorAttr2_Carta1 = pib1; valorAttr2_Carta2 = pib2; 
            break;
        case 4: strcpy(nomeAttr2, "Pontos Turisticos"); valorAttr2_Carta1 = pontosTuristicos1; valorAttr2_Carta2 = pontosTuristicos2; 
            break;
        case 5: strcpy(nomeAttr2, "Densidade Demografica"); valorAttr2_Carta1 = densidadeDemo1; valorAttr2_Carta2 = densidadeDemo2; 
            break;
    }

    //Soma Dos Atributos e Comparação
    // A regra é somar os valores brutos. A regra da densidade (menor é melhor)
    // se aplicaria a uma comparação individual, mas na soma, um valor menor de
    // densidade resultará em uma soma menor, o que é uma característica do jogo.
    somaCarta1 = valorAttr1_Carta1 + valorAttr2_Carta1;
    somaCarta2 = valorAttr1_Carta2 + valorAttr2_Carta2;
    
    // --- EXIBIÇÃO CLARA DO RESULTADO ---
    printf("\n\n======== RESULTADO DA RODADA ========\n");
    printf("Atributos escolhidos: %s e %s\n", nomeAttr1, nomeAttr2);

    // Exibição dos valores da Carta 1
    printf("Carta 1 (%s):\n", nomePais1);
    printf("  > %s: %.2f\n", nomeAttr1, valorAttr1_Carta1);
    printf("  > %s: %.2f\n", nomeAttr2, valorAttr2_Carta1);
    printf("  >> SOMA TOTAL: %.2f\n\n", somaCarta1);

    // Exibição dos valores da Carta 2
    printf("Carta 2 (%s):\n", nomePais2);
    printf("  > %s: %.2f\n", nomeAttr1, valorAttr1_Carta2);
    printf("  > %s: %.2f\n", nomeAttr2, valorAttr2_Carta2);
    printf("  >> SOMA TOTAL: %.2f\n", somaCarta2);
    

    // Logica do vencedor (com operador ternário)
    if (somaCarta1 == somaCarta2) {
        printf("Resultado Final: EMPATE!\n");
    } else {
        // O operador ternário escolhe qual nome de país colocar na variável 'vencedor'
        char* vencedor = (somaCarta1 > somaCarta2) ? nomePais1 : nomePais2;
        printf("Resultado Final: A carta de %s VENCEU!\n", vencedor);
    }

    return 0;
}