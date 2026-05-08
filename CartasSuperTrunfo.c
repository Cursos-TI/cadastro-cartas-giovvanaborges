#include <stdio.h>

int main (){

/*variaveis carta 1*/

    char Estado;
    char Codigo[4];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int pontos_turisticos;

    /*variaveis carta 2*/

    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int pontos_turisticos2;

        /*leitura carta 1*/
    printf ("Cadastro da Carta 1 \n");
    printf ("Digite o estado (A-H): \n");
    scanf (" %c", &Estado);

    printf ("Digite o codigo da carta (ex: A01):\n");
    scanf (" %3s", &Codigo);

    printf ("Nome da Cidade:\n");
    scanf ("%s", &Cidade);

    printf ("Populacao:\n");
    scanf ("%d", &Populacao);

    printf ("Digite a Area em KM2:\n");
    scanf ("%f", &Area);

    printf ("Digite PIB:\n");
    scanf ("%f", &PIB);

    printf ("Numero de Pontos Turisticos:\n");
    scanf ("%d", &pontos_turisticos);


        /*leitura carta 2*/

    printf ("Cadastro da Carta 2 \n");
    printf ("Digite o estado (A-H): \n");
    scanf (" %c", &Estado2);

    printf ("Digite o codigo da carta (ex: A02):\n");
    scanf (" %3s", &Codigo2);

    printf ("Nome da Cidade:\n");
    scanf ("%s", &Cidade2);

    printf ("Populacao:\n");
    scanf ("%d", &Populacao2);

    printf ("Digite a Area em KM2:\n");
    scanf ("%f", &Area2);

    printf ("Digite PIB:\n");
    scanf ("%f", &PIB2);

    printf ("Numero de Pontos Turisticos:\n");
    scanf ("%d", &pontos_turisticos2);

    /*exibicao das cartas*/


    printf ("Carta: 1\n");
    printf ("Estado: %c \n", Estado);
    printf ("Codigo: %s \n", Codigo);
    printf ("Nome da Cidade: %s \n", Cidade);
    printf ("Populacao: %d \n", Populacao);
    printf ("Area: %f \n", Area);
    printf ("PIB: %f \n", PIB);
    printf ("Pontos Turisticos: %d \n", pontos_turisticos);

    printf ("Carta: 2\n");
    printf ("Estado: %c \n", Estado2);
    printf ("Codigo: %s \n", Codigo2);
    printf ("Nome da Cidade: %s \n", Cidade2);
    printf ("Populacao: %d \n", Populacao2);
    printf ("Area: %f \n", Area2);
    printf ("PIB: %f \n", PIB2);
    printf ("Pontos Turisticos: %d \n", pontos_turisticos2);
    

    return 0;
}