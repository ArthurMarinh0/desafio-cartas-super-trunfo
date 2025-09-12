# Super Trunfo – Cartas de Cidades  

## Descrição do Projeto  
Este projeto é uma evolução em três etapas do jogo **Super Trunfo**, onde cada carta representa uma cidade brasileira.  
O programa foi desenvolvido em **C** e, a cada nível, novos conceitos e funcionalidades foram adicionados:  

- **Nível Novato** → Cadastro e exibição das cartas.  
- **Nível Aventureiro** → Cálculo de densidade populacional e PIB per capita.  
- **Nível Mestre** → Comparação entre cartas e cálculo do “Super Poder”.  


## Etapas do Projeto  

### Nível Novato  
- **O que foi feito**:  
  - Criação das cartas com atributos básicos (estado, código, cidade, população, área, PIB, pontos turísticos).  
  - Armazenamento em variáveis simples.  
  - Exibição organizada com `printf`.  

- **Objetivo**: Aprender sobre variáveis, tipos de dados e saída formatada no C.  

**Exemplo de saída:**  
*** Cartas Super Trunfo ***

Carta 1:
Estado: A
Código: A01
Nome da Cidade: Rio de Janeiro
População: 16055174
Área: 1255 Km2
PIB: 359.64 bilhões de reais
Número de Pontos Turísticos: 60

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Belo Horizonte
População: 21393441
Área: 331 Km2
PIB: 105.8 bilhões de reais
Número de Pontos Turísticos: 35

### Nível Aventureiro  
- **O que foi feito**:  
  - Inclusão do cálculo da **densidade populacional** (população ÷ área).  
  - Inclusão do cálculo do **PIB per capita** (PIB ÷ população).  
  - Exibição dos novos atributos junto com as cartas.  

- **Objetivo**: Introduzir **operações matemáticas** e conversões de tipo no C.  

**Exemplo de saída:**  
*** Cartas Super Trunfo ***

Carta 1:
População: 16055174
Área: 1255 Km2
PIB: 359.64 bilhões de reais
Pontos Turísticos: 60
Densidade Populacional: 12793.5 hab/km2
PIB per Capita: 22400.6 reais

Carta 2:
População: 21393441
Área: 331 Km2
PIB: 105.8 bilhões de reais
Pontos Turísticos: 35
Densidade Populacional: 64660.8 hab/km2
PIB per Capita: 4945.8 reais

### Nível Mestre  
- **O que foi feito**:  
  - Alteração do tipo da população para **`unsigned long int`** (para suportar números maiores).  
  - Cálculo do **Super Poder**, que soma: população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade populacional.  
  - Comparação **atributo por atributo** entre duas cartas (usando apenas operadores relacionais, sem `if/else`).  
  - Exibição dos resultados das comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu).  

- **Objetivo**: Trabalhar **comparações lógicas, operadores relacionais e manipulação de diferentes tipos numéricos** em C.  

**Exemplo de saída:**  
Comparação de Cartas:

População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)

## Tecnologias Utilizadas  
- Linguagem: **C**  
- Ferramenta de desenvolvimento: **VSCode**