#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Leitura dos dados para a Carta 1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da carta (exemplo A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade1);  
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos1);

    // Leitura dos dados para a Carta 2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da carta (exemplo B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos2);

    // Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // Convertendo PIB para reais
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // Convertendo PIB para reais

    int opcao1, opcao2;
    
    // Menu interativo para escolha de atributos
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao1);

    // Menu interativo para escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao2);

    // Garantir que o segundo atributo não seja o mesmo que o primeiro
    while (opcao1 == opcao2) {
        printf("\nErro! Você não pode escolher o mesmo atributo para comparação.\n");
        printf("Escolha novamente o segundo atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao2);
    }

    // Comparação dos atributos escolhidos
    float soma1 = 0, soma2 = 0;
    float valor1, valor2;
    int vencedor = 0;  // 0 para empate, 1 para carta 1 vence, 2 para carta 2 vence

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("\nComparação de Cartas (Atributo: População):\n");
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            printf("\nComparação de Cartas (Atributo: Área):\n");
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            break;
        case 4: // Pontos turísticos
            valor1 = pontos1;
            valor2 = pontos2;
            printf("\nComparação de Cartas (Atributo: Pontos turísticos):\n");
            break;
        case 5: // Densidade demográfica
            valor1 = densidade1;
            valor2 = densidade2;
            printf("\nComparação de Cartas (Atributo: Densidade demográfica):\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, valor2);

    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu neste atributo!\n", cidade1);
        soma1 += valor1;
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu neste atributo!\n", cidade2);
        soma2 += valor2;
    } else {
        printf("Resultado: Empate neste atributo!\n");
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("\nComparação de Cartas (Atributo: População):\n");
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            printf("\nComparação de Cartas (Atributo: Área):\n");
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            break;
        case 4: // Pontos turísticos
            valor1 = pontos1;
            valor2 = pontos2;
            printf("\nComparação de Cartas (Atributo: Pontos turísticos):\n");
            break;
        case 5: // Densidade demográfica
            valor1 = densidade1;
            valor2 = densidade2;
            printf("\nComparação de Cartas (Atributo: Densidade demográfica):\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, valor2);

    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu neste atributo!\n", cidade1);
        soma1 += valor1;
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu neste atributo!\n", cidade2);
        soma2 += valor2;
    } else {
        printf("Resultado: Empate neste atributo!\n");
    }

    // Soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, soma1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado final: Empate!\n");
    }

    return 0;
}
