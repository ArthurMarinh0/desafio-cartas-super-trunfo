# Super Trunfo

## Descrição do Projeto
Este projeto é a implementação do jogo **Super Trunfo** em etapas, desta vez com cartas representando **cidades**. O objetivo é aprofundar os conhecimentos em lógica de programação e interatividade com o usuário.

O programa foi desenvolvido em **C** e, a cada nível, novos conceitos e funcionalidades são adicionados:

-   **Nível Novato** → Cadastro estático e comparação fixa de cartas.
-   **Nível Aventureiro** → Menu interativo e lógica de comparação dinâmica.
-   **Nível Mestre** → [A ser definido no próximo desafio].

## Etapas do Projeto

### Nível Novato
-   **O que foi feito**:
    -   Criação de duas cartas (cidades) com atributos definidos diretamente no código (nome, população, área, PIB, etc.).
    -   Cálculo de um atributo derivado (densidade demográfica).
    -   Implementação de uma comparação **fixa** (*hardcoded*) baseada em um único atributo (pontos turísticos).
    -   Exibição do resultado da comparação no terminal usando uma estrutura `if-else` simples.

-   **Objetivo**: Praticar a declaração de variáveis de diferentes tipos, realizar cálculos matemáticos e usar a estrutura condicional `if-else` para uma tomada de decisão simples.

**Exemplo de saída:**
Comparacao de cartas:

Carta 1 - Rio de janeiro (RJ): 60
Carta 2 - Belo Horizonte (BH): 35
Resultado: Carta 1 (Rio de janeiro) venceu!


### Nível Aventureiro
-   **O que foi feito**:
    -   Criação de um **menu interativo** para que o jogador escolha qual atributo usar na comparação.
    -   Uso da estrutura `switch` para direcionar a lógica do programa com base na escolha do jogador.
    -   Implementação de uma lógica de comparação **aninhada** (`if-else if-else`) para cada atributo, tratando os casos de vitória, derrota e empate.
    -   Aplicação de uma **regra de comparação especial** (inversa) para o atributo "Densidade Demográfica", onde o menor valor vence.
    -   Exibição detalhada do resultado, mostrando os valores comparados e a carta vencedora.

-   **Objetivo**: Aprender a capturar a entrada do usuário (`scanf`), utilizar a estrutura de controle `switch` para criar menus e construir lógicas de decisão mais complexas e flexíveis.

**Exemplo de saída (se o jogador escolher a opção 1):**
***** SUPER TRUNFO ***** Escolha o atributo para comparar as cartas:
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


## Tecnologias Utilizadas
-   Linguagem: **C**
-   Ferramenta de desenvolvimento: **VSCode** (ou qualquer compilador C, como o GCC)
