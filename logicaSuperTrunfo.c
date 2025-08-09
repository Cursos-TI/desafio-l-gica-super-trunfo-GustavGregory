#include <stdio.h>
#include <stdlib.h> // Usaremos para limpar o terminal (opcional)

// Desafio Super Trunfo - Comparação das Cartas
// Nível: Aventureiro
// Objetivo: Criar um menu interativo com 'switch' e comparar atributos com 'if-else'.

int main() {
    // --- Dados das Cartas (Hardcoded) ---
    // Conforme o desafio, não precisamos pedir os dados novamente.
    // Vamos definir os valores diretamente no código para focar na lógica.

    // Carta 1: São Paulo
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 12396372;
    float area1 = 1521.11;
    float pib1 = 763.8; // Em bilhões de reais
    int pontosTuristicos1 = 15;

    // Carta 2: Rio de Janeiro
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6775561;
    float area2 = 1200.32;
    float pib2 = 356.9; // Em bilhões de reais
    int pontosTuristicos2 = 25;

    // --- Cálculo dos Atributos Derivados ---
    // A Densidade Demográfica é um atributo que calculamos a partir de outros.
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    int escolha; // Variável para guardar a opção do usuário no menu

    // --- Loop Principal do Jogo ---
    // Usamos um laço do-while para que o menu sempre apareça pelo menos uma vez
    // e continue aparecendo até que o usuário escolha sair (opção 0).
    do {
        // --- Menu Interativo ---
        // system("clear"); // Use no Linux/macOS para limpar o terminal
        // system("cls");   // Use no Windows para limpar o terminal
        printf("\n=========================================\n");
        printf("  SUPER TRUNFO - Escolha a Comparação\n");
        printf("=========================================\n");
        printf("  [1] Comparar População\n");
        printf("  [2] Comparar Área (km²)\n");
        printf("  [3] Comparar PIB (em bilhões)\n");
        printf("  [4] Comparar Pontos Turísticos\n");
        printf("  [5] Comparar Densidade Demográfica (hab/km²)\n");
        printf("  [0] Sair do Jogo\n");
        printf("-----------------------------------------\n");
        printf("Escolha sua jogada: ");
        scanf("%d", &escolha);

        // --- Estrutura de Decisão (switch) ---
        // O switch avalia a variável 'escolha' e executa o bloco de código
        // correspondente ao 'case' escolhido pelo usuário.
        switch (escolha) {
            case 1: // População
                printf("\n--- COMPARANDO: População ---\n");
                printf("  %s: %d habitantes\n", nomeCidade1, populacao1);
                printf("  %s: %d habitantes\n", nomeCidade2, populacao2);
                printf("  Resultado: ");
                if (populacao1 > populacao2) {
                    printf("%s vence!\n", nomeCidade1);
                } else if (populacao2 > populacao1) {
                    printf("%s vence!\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break; // 'break' impede que o código continue para o próximo case.

            case 2: // Área
                printf("\n--- COMPARANDO: Área ---\n");
                printf("  %s: %.2f km²\n", nomeCidade1, area1);
                printf("  %s: %.2f km²\n", nomeCidade2, area2);
                printf("  Resultado: ");
                if (area1 > area2) {
                    printf("%s vence!\n", nomeCidade1);
                } else if (area2 > area1) {
                    printf("%s vence!\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 3: // PIB
                printf("\n--- COMPARANDO: PIB ---\n");
                printf("  %s: R$ %.2f bilhões\n", nomeCidade1, pib1);
                printf("  %s: R$ %.2f bilhões\n", nomeCidade2, pib2);
                printf("  Resultado: ");
                if (pib1 > pib2) {
                    printf("%s vence!\n", nomeCidade1);
                } else if (pib2 > pib1) {
                    printf("%s vence!\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 4: // Pontos Turísticos
                printf("\n--- COMPARANDO: Pontos Turísticos ---\n");
                printf("  %s: %d pontos\n", nomeCidade1, pontosTuristicos1);
                printf("  %s: %d pontos\n", nomeCidade2, pontosTuristicos2);
                printf("  Resultado: ");
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("%s vence!\n", nomeCidade1);
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("%s vence!\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 5: // Densidade Demográfica (REGRA INVERTIDA)
                printf("\n--- COMPARANDO: Densidade Demográfica (MENOR vence) ---\n");
                printf("  %s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("  %s: %.2f hab/km²\n", nomeCidade2, densidade2);
                printf("  Resultado: ");
                if (densidade1 < densidade2) { // Atenção: A lógica é invertida (menor é melhor)
                    printf("%s vence!\n", nomeCidade1);
                } else if (densidade2 < densidade1) {
                    printf("%s vence!\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 0: // Sair
                printf("\nObrigado por jogar! Até a próxima.\n");
                break;

            default: // Caso o usuário digite uma opção que não existe
                printf("\nOpção inválida! Por favor, escolha um número do menu.\n");
                break;
        }

        if (escolha != 0) {
            printf("\nPressione Enter para continuar...");
            // Essas duas chamadas de getchar() limpam o buffer do teclado
            // para que a pausa funcione corretamente.
            while (getchar() != '\n');
            getchar();
        }

    } while (escolha != 0); // O loop continua enquanto a escolha for diferente de 0

    return 0;
}