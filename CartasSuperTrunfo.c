#include <stdio.h>

int main() {
    int codigo;
    char cidade[20];
    float populacao;
    float area;
    float pib;
    int pontos;

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Tamanho da população: \n");
    scanf("%f", &populacao);

    printf("Aréa: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Quantidades de Pontos Turisticos: \n");
    scanf("%d", &pontos);


    printf("- Codigo da cidade: %d\n - Nome da cidade: %s\n - Tamanho da População: %f\n" , codigo, cidade, populacao);
    printf("- Areá da Cidade:  %f\n - PIB: %f\n - Quantidades de Pontos Turisticos: %d\n", area, pib, pontos);







 
    return 0;
}
