#include <stdio.h>

int main(){

    //variáveis carta 1:

    char estado1;
    char codigo1[3];
    char cidade1[50];
    int pop1;
    float area1;
    float PIB1;
    int pontos_turisticos1;


    //variáveis carta 2:

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int pop2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    //Entrada de dados carta 1:
    printf("Preencha as informações da carta 1 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &pop1);
    printf("Digite o Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //impressão carta 1:

    printf("\nCARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código %s: \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Área em km²: %.2f \n", area1);
    printf("PIB em bilhões de reais: %.2f \n", PIB1);
    printf("Números de pontos turísticos: %d \n", pontos_turisticos1);


    printf("\nPreencha as informações da carta 2 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &pop2);
    printf("Digite o Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\nCARTA 2: ");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Área em km²: %.2f \n", area2);
    printf("PIB em bilhões de reai: %.2f \n", PIB2);
    printf("PIB em bilhões de reais: %.2f \n", PIB2);
    printf("Números de pontos turísticos: %d \n", pontos_turisticos2);
    return 0;
}
