#include <stdio.h>

int main(){
    char estado;
    char codigo[2]; // percebi que um dos requisitos da primeira parte era que o codigo fosse uma string, eu havia colocado tipo numerico mas já arrumei
    char nome[20];
    int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;
    float densidadePopulacional;
    float pibPerCapital;


    char estado2;
    char codigo2[2];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontoTuristico2;
    float densidadePopulacional2;
    float pibPerCapital2;


    printf("Cadastrar carta 1:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo);
    
    printf("\nEscolha o nome da cidade:");
    scanf(" %[^\n]", nome);
    
    printf("\nQual a população da cidade?:");
    scanf("%d", &populacao);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area);

    printf("\nQual o pib da cidade?(em bilhões):");
    scanf("%f", &pib);
    pib *= 1000000000;
    
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico);

    densidadePopulacional = populacao / area;

    pibPerCapital = pib / populacao;

    printf("\n Carta 01 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico, densidadePopulacional, pibPerCapital);

    printf("Cadastrar carta 2:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado2);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo2);
    
    printf("\nEscolha o nome da cidade:");
    scanf(" %[^\n]", nome2);
    
    printf("\nQual a população da cidade?:");
    scanf("%d", &populacao2);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area2);

    printf("\nQual o pib da cidade?(em bilhoes):");
    scanf("%f", &pib2);
    pib2 *= 1000000000;
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico2);

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapital2 = pib2 / populacao2;
    
    printf("\n Carta 02 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2, densidadePopulacional2, pibPerCapital2);


    printf("\n\n\n\nCartas criadas: \n");
    printf("\n Carta 01: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico, densidadePopulacional, pibPerCapital);
    printf("\n Carta 02: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %d \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2, densidadePopulacional2, pibPerCapital2);

}