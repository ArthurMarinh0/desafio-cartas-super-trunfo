# Super Trunfo – Batalha de Países

## Descrição do Projeto
Este projeto é a implementação do jogo **Super Trunfo** em etapas, desta vez com cartas representando **países**. O objetivo é aprofundar os conhecimentos em lógica de programação e interatividade com o usuário em C.

O programa foi desenvolvido em **C** e, a cada nível, novos conceitos e funcionalidades são adicionados:

-   **Nível Novato** → Cadastro estático e comparação fixa de cartas.
-   **Nível Aventureiro** → Menu interativo e lógica de comparação com um atributo.
-   **Nível Mestre** → Comparação avançada com múltiplos atributos e menus dinâmicos.

## Etapas do Projeto

### Nível Novato
-   **O que foi feito**:
    -   Criação de duas cartas (países) com atributos definidos diretamente no código.
    -   Implementação de uma comparação **fixa** (*hardcoded*) baseada em um único atributo.
    -   Exibição do resultado da comparação no terminal usando uma estrutura `if-else` simples.

-   **Objetivo**: Praticar a declaração de variáveis, cálculos matemáticos e o uso da estrutura condicional `if-else`.

**Exemplo de saída:**
Comparacao de cartas:

Carta 1 - Rio de janeiro (RJ): 60
Carta 2 - Belo Horizonte (BH): 35
Resultado: Carta 1 (Rio de janeiro) venceu!


### Nível Aventureiro
-   **O que foi feito**:
    -   Criação de um **menu interativo** para que o jogador escolha qual atributo usar na comparação.
    -   Uso da estrutura `switch` para direcionar a lógica do programa.
    -   Implementação de uma lógica de comparação **aninhada** (`if-else if-else`) para tratar vitória, derrota e empate.
    -   Aplicação de uma **regra de comparação especial** (inversa) para o atributo "Densidade Demográfica".

-   **Objetivo**: Aprender a capturar a entrada do usuário (`scanf`), utilizar a estrutura de controle `switch` e construir lógicas de decisão mais complexas.

**Exemplo de saída (se o jogador escolher a opção 1):**
***** SUPER TRUNFO *****
Escolha o atributo para comparar as cartas:
1 - Populacao
2 - Area (em km^2)
3 - PIB (em USD)
4 - Numero de Pontos Turisticos
5 - Densidade Demografica (hab/km^2)
Digite sua opcao: 1

--- Atributo escolhido: Populacao ---
Carta 1 (Brasil): 215300000 habitantes
Carta 2 (Argentina): 45810000 habitantes

Resultado: A carta 1 (Brasil) venceu!


### Nível Mestre
-   **O que foi feito**:
    -   Permitido que o jogador escolha **dois atributos distintos** para a comparação.
    -   Criação de **menus dinâmicos**, onde o segundo menu omite a opção escolhida no primeiro.
    -   Implementação da lógica de vitória baseada na **soma dos valores** dos dois atributos.
    -   Validação de entrada para impedir a escolha de atributos inválidos ou repetidos.
    -   Uso do **operador ternário** (`? :`) para determinar o vencedor de forma concisa.
    -   Exibição de um resultado final detalhado, mostrando os valores individuais e a soma total para cada carta.

-   **Objetivo**: Integrar múltiplos conceitos (menus dinâmicos, `switch`, `if-else`, validação de dados) para criar uma lógica de jogo complexa e robusta, e utilizar operadores avançados como o ternário.

**Exemplo de saída (se o jogador escolher PIB e Pontos Turísticos):**
======== RESULTADO DA RODADA ======== 
Atributos escolhidos: PIB e Pontos Turisticos
Carta 1 (Brasil):

PIB: 1609000000000.00
Pontos Turisticos: 150.00

SOMA TOTAL: 1609000000150.00

Carta 2 (Japao):

PIB: 4937000000000.00
Pontos Turisticos: 250.00

SOMA TOTAL: 4937000000250.00

Resultado Final: A carta de Japao VENCEU!

## Tecnologias Utilizadas
-   Linguagem: **C**
-   Ferramenta de desenvolvimento: **VSCode** (ou qualquer compilador C, como o GCC)