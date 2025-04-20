#include <io.h>
/*aqui eu descobri que para executar uma operação um pouco mais complexa como divisão
teria que adicionar uma biblioteca no programa, no caso era a "<iostream>" mas 
nesse editor ela aparece como io.h*/
#include <stdio.h>
int main()
{
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    Nome da Cidade: O nome da cidade.
    População: O número de habitantes da cidade.
    Área (em km²): A área da cidade em quilômetros quadrados.
    PIB: O Produto Interno Bruto da cidade.
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.*/

    char estado[3], estado2[3], codigo2[4], codigo[4], nome_cidade[50], nome_cidade2[50];

    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;

    float area, area2, PIB, PIB2;

    printf("Carta 1: (essa é a carta 1 a partir daqui você tera que colocar os dados a mão)\n");
    printf("estado:\n");
    scanf("%s", &estado);
    printf("codigo:\n");
    scanf("%s", &codigo);
    printf("nome_cidade:(coloque '-' para simular os espaços) :\n");
    scanf("%s", &nome_cidade);
    printf("populacao:\n");
    scanf("%d", &populacao);
    printf("area (Km²):\n");
    scanf("%f", &area);
    printf("PIB:\n");
    scanf("%f", &PIB);
    printf("pontos_turisticos:\n");
    scanf("%i", &pontos_turisticos);

    printf("****************************************************************\n");

    printf("Carta 2: (essa é a carta 2 a partir daqui você tera que colocar os dados a mão):\n");
    printf("estado2:\n");
    scanf("%s", &estado2);
    printf("codigo2:\n");
    scanf("%s", &codigo2);
    printf("nome_cidade2(coloque '-' para simular os espaços) :\n");
    scanf("%s", &nome_cidade2);
    printf("populacao2:\n");
    scanf("%d", &populacao2);
    printf("area2(Km²):\n");
    scanf("%f", &area2);
    printf("PIB2:\n");
    scanf("%f", &PIB2);
    printf("pontos_turisticos2:\n");
    scanf("%i", &pontos_turisticos2);

    /*eu deixei para declarar o resto das variaveis aqui no final, o motivo foi para não correr o risco
    de ocorrer nenhum erro na execução das operações pelo programa, eu deixei um if-else para cada 
    uma das variaveis que eu queria fazer a comparação.*/   

    float densidadepopulacional = populacao / area, densidadepopulacional2 = populacao2/ area2;

    float PIBpercapita = PIB / populacao, PIBpercapita2 = PIB2 / area2;

    /* Escolhi a população como variavel a ser comparada as outras comparações
    estão comentadas caso queira fazer os testes delas é só apagar os (/*) */
    if (populacao < populacao2)
    {
        printf("populacao é maior que populacao2,valor: %i, carta2 vencê.\n", &populacao);
    }
    else
    {
        printf("populacao2 é maior que populacao,valor: %i,carta1 vencê.\n", &populacao2);
    }
     
    /*
    if (pontos_turisticos2 > pontos_turisticos)
    {
        printf("pontos_turisticos2 é maior que pontos_turisticos, valor: %i ,carta2 vencê .\n", &pontos_turisticos2);
    }
    else
    {
        printf("pontos_turisticos é maior que pontos_turisticos2, valor: %i , carta1 vencê.\n", &pontos_turisticos2);
    }

    if (area2 > area)
    {
        printf("area2 é maior que area, valor: %f, carta2 vencê.\n", area2);
    }
    else
    {
        printf("area é maior que area2, valor: %f, carta1 vencê.\n", area);
    }

    if (PIB2 < PIB)
    {
        printf("PIB é maior que PIB2, valor: %f,  carta1 vencê.\n", PIB2);
    }
    else
    {
        printf("PIB2 é maior que PIB, valor: %f,  carta 2 vencê.\n", PIB);
    }

    if (PIBpercapita > PIBpercapita2)
    {
        printf("PIBpercapita é maior que PIBpercapita2, valor: %f, carta1 vencê\n", PIBpercapita);
    }
    else
    {
        printf("PIBpercapita2 é maior que PIBpercapita, valor: %f, carta1 vencê\n", PIBpercapita2);
    }

    if (densidadepopulacional < densidadepopulacional)
    {
        printf("densidadepopulacional é menor que densidadepopulacional2, valor: %f, carta1 vencê\n", densidadepopulacional);
    }
    else
    {
        printf("densidadepopulacional2 é menor que densidadepopulacional, valor: %f, carta1 vencê\n", densidadepopulacional2);
    } */

    return 0;
}
