#include <stdio.h>

int main() {
    char estado01 [50], estado02 [50], codigo01 [3], codigo02 [3], nome_cidade01 [50], nome_cidade02 [50];
    int populacao01, populacao02, turistico01, turistico02;
    float area01, area02, pib01, pib02;
    float densidadepop01, densidadepop02, pibpc01, pibpc02;

    // Solicitação das informações para a Carta 1

    printf ("Carta 01 \n");

    printf ("Digite uma letra de A à H que representará o estado: \n");
    scanf ("%s", &estado01);

    printf ("Digite agora o código da sua carta, a letra que você escolheu e logo após um número de 01 à 04: \n");
    scanf ("%s", &codigo01);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade01);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", &populacao01);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", &area01);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib01);

    printf ("Digite o número de pontos turísticos presentes na cidade: \n");
    scanf ("%d", &turistico01);

    densidadepop01 = populacao01 / area01;
    pibpc01 = pib01 / populacao01;

    // Solicitação das informações para a Carta 2

    printf ("Carta 02 \n");

    printf ("Digite uma letra de A à H que representará o estado: \n");
    scanf ("%s", &estado02);

    printf ("Digite agora o código da sua carta, a letra que você escolheu e logo após um número de 01 à 04: \n");
    scanf ("%s", &codigo02);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade02);

    printf ("Digite a população da cidade: \n");
    scanf ("%d", &populacao02);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", &area02);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib02);

    printf ("Digite o número de pontos turísticos presentes na cidade: \n");
    scanf ("%d", &turistico02);
    
    densidadepop02 = populacao02 / area02;
    pibpc02 = pib02 / populacao02;

    // Exibição das informações de cada carta

    printf ("\nCarta 1 \nEstado: %s\nCodigo: %3s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado01, codigo01, nome_cidade01, populacao01, area01, pib01, turistico01, densidadepop01,pibpc01);
    printf ("\nCarta 2 \nEstado: %s\nCodigo: %3s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado02, codigo02, nome_cidade02, populacao02, area02, pib02, turistico02, densidadepop02,pibpc02);

    return 0;

}
