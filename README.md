# Desafio Super Trunfo: Lógica e Interatividade em C

Olá\! Bem-vindo ao meu projeto de lógica para o jogo Super Trunfo.

Este repositório contém a minha solução para o **Nível Aventureiro** do desafio. Depois de ter construído a base do cadastro de cartas no nível anterior, o meu foco aqui foi dar vida ao jogo, tornando-o verdadeiramente interativo e aplicando regras de comparação.

## 🎯 O Desafio Proposto

A missão desta vez era evoluir o programa, implementando as seguintes funcionalidades:

  - Criar um **menu interativo** para que eu, como jogador, pudesse escolher qual atributo comparar.
  - Utilizar a estrutura `switch` para gerenciar as opções do menu.
  - Aplicar a lógica de comparação com `if-else if-else` para determinar a carta vencedora.
  - Lidar com uma **regra especial**: para o atributo "Densidade Demográfica", a carta com o *menor* valor deveria ser a vencedora, ao contrário das outras.

## 💡 Minha Abordagem e Como o Código Foi Pensado

Para resolver o desafio, estruturei meu código `logicaSuperTrunfo.c` da seguinte forma:

### 1\. Dados "Chumbados" no Código (Hardcoded)

Para focar 100% na lógica do menu e na comparação, e seguindo a sugestão do desafio, eu decidi não pedir os dados para o usuário desta vez. Em vez disso, "chumbei" (termo que usamos para definir dados fixos) os valores de duas cidades, São Paulo e Rio de Janeiro, diretamente nas variáveis no início do programa. Isso deixou o código mais limpo e direto ao ponto.

### 2\. O Menu Principal com `do-while`

Eu queria que o jogador pudesse fazer várias comparações sem ter que reiniciar o programa a cada rodada. A escolha perfeita para isso foi o laço `do-while`. Ele garante que o menu de opções apareça pelo menos uma vez e continue sendo exibido no final de cada comparação, até que eu decida sair digitando a opção `0`.

### 3\. A Mágica do `switch`

O coração da interatividade do meu programa é a estrutura `switch`. Achei que essa foi a abordagem mais elegante e organizada para lidar com a escolha do jogador. Em vez de criar uma cadeia gigante e confusa de `if`s, o `switch` avalia a opção escolhida e me leva diretamente para o bloco de código correto que faz a comparação daquele atributo.

### 4\. A Lógica de Comparação com `if-else`

Dentro de cada `case` do `switch`, eu implementei a lógica de decisão. Usei uma estrutura `if-else if-else` por ser a mais completa. Ela cobre todas as três possibilidades de resultado:

  - `if`: A carta 1 vence.
  - `else if`: A carta 2 vence.
  - `else`: Houve um empate.

### 5\. A Regra Especial da Densidade

Um ponto de atenção do desafio era a regra invertida para a Densidade Demográfica, onde "menos é mais". Para resolver isso, no `case 5`, eu simplesmente inverti o operador da comparação: em vez de usar `>` (maior que), eu usei `<` (menor que) para definir o vencedor. Foi uma solução simples e eficaz.

### 6\. Pequenos Detalhes de Usabilidade

Pensando na experiência de quem joga, adicionei duas pequenas melhorias:

  - Um `default` no `switch` para avisar o jogador caso ele digite uma opção que não existe no menu.
  - Uma pausa "Pressione Enter para continuar..." para que o resultado da comparação não desapareça da tela instantaneamente, dando tempo para o jogador ler quem venceu.

## 🚀 Como Executar o Programa

Para ver o jogo em ação, basta seguir estes passos no terminal:

1.  **Clone o repositório:**

    ```bash
    git clone https://github.com/Cursos-TI/desafio-l-gica-super-trunfo-GustavGregory.git
    ```

2.  **Entre na pasta do projeto:**

    ```bash
    cd desafio-l-gica-super-trunfo-GustavGregory
    ```

3.  **Compile o arquivo C:**

    ```bash
    gcc logicaSuperTrunfo.c -o meu_jogo_logica
    ```

4.  **Execute e divirta-se:**

    ```bash
    ./meu_jogo_logica
    ```

-----

Resolver este desafio foi um passo muito importante para entender como estruturar um programa interativo em C. Gostei muito de aplicar a lógica de `switch` e `if-else` para criar algo funcional e divertido. Estou pronto para o próximo nível\!