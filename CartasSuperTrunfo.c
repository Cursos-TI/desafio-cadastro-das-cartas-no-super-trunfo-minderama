#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1, codigo1[4], nomecidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    // Variáveis da carta 2
    char estado2, codigo2[4], nomecidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Cadastro da carta 1
    printf("Digite as informações da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
   
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%49s", nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);

    // Cadastro da carta 2
    printf("Digite as informações da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
   
    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49s", nomecidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" r%d", &pontosturisticos2);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}