#include <stdio.h>

int main(){
    char estado;
    char codigo[4];
    char nome[20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;
    float densidadePopulacional;
    float pibPerCapital;
    float superPoder;


    char estado2;
    char codigo2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroPontoTuristico2;
    float densidadePopulacional2;
    float pibPerCapital2;
    float superPoder2;


    printf("Cadastrar carta 1:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo);
    
    printf("\nEscolha o nome da cidade:");
    scanf(" %[^\n]", nome);
    
    printf("\nQual a população da cidade?:");
    scanf("%u", &populacao);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib);
    
    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico);

    densidadePopulacional = populacao / area;

    pibPerCapital = pib / populacao;

    superPoder = (float)populacao + area + pib + numeroPontoTuristico + pibPerCapital + densidadePopulacional;

    printf("\n Carta 01 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico, densidadePopulacional, pibPerCapital, superPoder);

    printf("Cadastrar carta 2:\n");
    printf("Escolha uma letra para representar o estado(de A a H): ");
    scanf(" %c", &estado2);

    printf("\nEscolha um numero de 01 a 04: ");
    scanf("%s", codigo2);
    
    printf("\nEscolha o nome da cidade:");
    scanf(" %[^\n]", nome2);
    
    printf("\nQual a população da cidade?:");
    scanf("%u", &populacao2);
    
    printf("\nQual a area da cidade?:");
    scanf("%f", &area2);

    printf("\nQual o pib da cidade?:");
    scanf("%f", &pib2);

    printf("\nQuantos pontos turisticos ela tem?:");
    scanf("%d", &numeroPontoTuristico2);

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapital2 = pib2 / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontoTuristico2 + pibPerCapital2 + densidadePopulacional2;
    
    printf("\n Carta 02 tem os seguintes dados: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2, densidadePopulacional2, pibPerCapital2, superPoder2);


    printf("\n\n\n\nCartas criadas: \n");
    printf("\n Carta 01: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado, estado, codigo, nome, populacao, area, pib, numeroPontoTuristico, densidadePopulacional, pibPerCapital, superPoder);
    printf("\n Carta 02: \n");
    printf(" estado: %c \n codigo: %c%s \n nome: %s \n populaçao: %u \n area: %f \n pib: %f \n quantidade de pontos turisticos: %d \n Densidade Populacional: %f hab/km² \n PIB per Capita: %f reais \n Super Poder: %.2f \n", estado2, estado2, codigo2, nome2, populacao2, area2, pib2, numeroPontoTuristico2, densidadePopulacional2, pibPerCapital2, superPoder2);


    printf("\n\n\nResultados: \n\n\n");
    printf("Comparação das Cartas %c%s || %c%s \n", estado, codigo, estado2, codigo2);
    printf("População: Carta %c%s venceu: (%d) \n", estado, codigo, (populacao > populacao2));
    printf("Area: Carta %c%s venceu: (%d) \n", estado, codigo, (area > area2));
    printf("PIB: Carta %c%s venceu: (%d) \n", estado, codigo, (pib > pib2));
    printf("Pontos turisticos: Carta %c%s venceu: (%d) \n", estado, codigo, (numeroPontoTuristico > numeroPontoTuristico2));
    printf("Densidade Populacional: Carta %c%s venceu: (%d) \n", estado2, codigo2, (densidadePopulacional2 < densidadePopulacional));
    printf("PIB per capital: Carta %c%s venceu: (%d) \n", estado, codigo, (pibPerCapital > pibPerCapital2));
    printf("Super Poder: Carta %c%s venceu: (%d) \n", estado, codigo, (superPoder > superPoder2));
}