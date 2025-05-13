#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração de variáveis
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, denspop1, pibpc1, area2, pib2, denspop2, pibpc2;
    char estado1, codCarta1[3], nomeCidade1[50], estado2, codCarta2[3], nomeCidade2[50];

    // Cadastro das Cartas:
    // Entrada de dados Carta 1:
    printf("        Digite os dados da carta 1:\n");
    printf("===========================================\n");
    
    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código: ");
    scanf(" %s", codCarta1);

    getchar();
    printf("Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Deixa um \n no final

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("PIB(em bi): ");
    scanf("%f", &pib1); // Não há tratamento algum, então é o valor que o usuário digitar. (Explicitei que o valor desejado é em BI)

    printf("Área(km²): ");
    scanf("%f", &area1);

    // Cálculos Densidade Populacional e Pib per capta da carta 01

    denspop1 = populacao1 / area1;
    pibpc1 = pib1 * 1000000000 / populacao1;

    // Entrada de dados Carta 2:
    printf("        Digite os dados da carta 2:\n");
    printf("===========================================\n");
    getchar();
    printf("Estado: ");
    scanf("%c", &estado2);

    printf("Código: ");
    scanf(" %s", codCarta2);
    
    getchar();
    printf("Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // Deixa um \n no final

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("PIB(em bi): ");
    scanf("%f", &pib2); // Não há tratamento algum, então é o valor que o usuário digitar.

    printf("Área(km²): ");
    scanf("%f", &area2);

    // Cálculos Densidade Populacional e Pib per capta da carta 01

    denspop2 = populacao2 / area2;
    pibpc2 =  pib2 * 1000000000 / populacao2;

    // Exibição dos Dados das Cartas:
    // Output da Carta 1:
    printf("===========================================\n");
    printf("                Carta 1:                \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n",estado1, codCarta1);
    printf("Cidade: %s", nomeCidade1);
    printf("População: %d habitantes.\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per capita: %.2f reais\n", pibpc1);
    printf("===========================================\n");

    // Output da Carta 2:
    printf("===========================================\n");
    printf("                Carta 2:                \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, codCarta2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %d habitantes.\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per capita: %.2f reais\n", pibpc2);
    printf("===========================================\n");

    return 0;
}
