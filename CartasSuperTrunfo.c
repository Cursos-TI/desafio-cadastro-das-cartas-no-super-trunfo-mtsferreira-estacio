#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração de variáveis
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    char estado1, codEstado1[3], nomeCidade1[50], estado2, codEstado2[3], nomeCidade2[50];

    // Cadastro das Cartas:
    // Entrada de dados Carta 1:
    printf("        Digite os dados da carta 1:\n");
    printf("===========================================\n");
    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código do Estado: ");
    scanf("%2s", &codEstado1);

    printf("Cidade: "); // Cidades com apenas 1 nome
    scanf("%s", &nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("PIB: ");
    scanf("%f", &pib1); // Não há tratamento algum, então é o valor que o usuário digitar.

    printf("Área(km²): ");
    scanf("%f", &area1);

    // Entrada de dados Carta 2:
    printf("        Digite os dados da carta 2:\n");
    printf("===========================================\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código do Estado: ");
    scanf("%2s", &codEstado2);

    printf("Cidade: "); // Cidades com apenas 1 nome
    scanf("%s", &nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("PIB: ");
    scanf("%f", &pib2); // Não há tratamento algum, então é o valor que o usuário digitar.

    printf("Área(km²): ");
    scanf("%f", &area2);

    // Exibição dos Dados das Cartas:
    // Output da Carta 1:
    printf("===========================================\n");
    printf("                Carta 1:                \n");
    printf("Estado: %c\n", estado1);
    printf("Código do Estado: %s\n", codEstado1);
    printf("Código da Carta: %c%s\n", estado1,codEstado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2fR$\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("===========================================\n");

    // Output da Carta 2:
    printf("===========================================\n");
    printf("                Carta 2:                \n");
    printf("Estado: %c\n", estado2);
    printf("Código do Estado: %s\n", codEstado2);
    printf("Código da Carta: %c%s\n", estado2,codEstado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2fR$\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("===========================================\n");

    return 0;
}
