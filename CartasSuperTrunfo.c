#include <stdio.h>

int main(){
    // variaveis da primeira carta
    char estado;
    int codigo;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;

    // variaveis da segunda carta
    char estado2;
    int codigo2;
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontoTuristico2;

    // pega os dados da carta 1 e registra nas variaveis
    printf("Cadastrar carta 1:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%d", &codigo);
    
    printf("\nEscolha o nome da cidade:");
    scanf("%s", nome);
    
    printf("\nQual a população da cidade?:");
    scanf("%d", &populacao);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib);
    
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico);

    // mostra os dados registrados pra carta 1
    printf("\n Carta 01 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%d \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico);

    // pega os dados da carta 2 e registra nas variaveis
    printf("Cadastrar carta 2:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado2);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%d", &codigo2);
    
    printf("\nEscolha o nome da cidade:");
    scanf("%s", nome2);
    
    printf("\nQual a população da cidade?:");
    scanf("%d", &populacao2);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area2);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib2);
    
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico2);
    
    // mostra os dados da carta 2
    printf("\n Carta 02 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%d \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2);

    // mostra as cartas criadas
    printf("\n\n\n\nCartas criadas: \n");
    printf("\n Carta 01: \n");
    printf(" estado: %c \n codigo: %c%d \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico);
    printf("\n Carta 02: \n");
    printf(" estado: %c \n codigo: %c%d \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2);

}