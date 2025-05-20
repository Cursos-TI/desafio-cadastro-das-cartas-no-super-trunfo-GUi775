#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;
    char estad02;
    char codigo1[4];
    char codigo2[4];//para "A01"+caracteristica numerica´0`
    char cidade1[50];
    char cidade2[50];//espaço para o nome da cidade
    int Populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos1;
    int pontos2;
    


    printf("Carta1: \n");


    printf("digite o estado1 (A-H): \n ");
    scanf( " %c", &estado1 );

    printf("digite o codigo1 (A01): \n ");
    scanf(" %s", codigo1);

    printf("didgite nome da cidade1: \n ");
    scanf(" %s", cidade1 );

    printf("digite o numero de Populacao1: \n " );
    scanf(" %d", &Populacao1 );

    printf("digite a area1: \n ");
    scanf(" %f", &area1 );

    printf("digite pib1: \n ");
    scanf(" %f", &pib1);

    printf("digite numeroturisticos1: \n ");
    scanf(" %d", &pontos1);



    printf("Carta2: \n");
  
    printf("digite o estado2 (A-H): \n ");
    scanf( " %c", &estad02 );

    printf("digite o codigo2 (A01): \n ");
    scanf(" %s", codigo2);

    printf("didgite nome da cidade2: \n ");
    scanf(" %s",&cidade2 );

    printf("digite o numero de Populacao2: \n " );
    scanf(" %d",&populacao2);

    printf("digite a area2: \n ");
    scanf(" %f", &area2);

    printf("digite pib2: \n ");
    scanf(" %f", &pib2);

    printf("digite numeroturisticos2: \n ");
    scanf(" %d", &pontos2);

    
    printf("Carta1: \n");
    printf("estado: %c \n", estado1);
    printf("codigo:%s \n", codigo1);
    printf("cidade:%s \n", cidade1);
    printf("polulacao:%d \n", Populacao1);
    printf("area: %f \n", area1);
    printf("pib:%f \n", pib1);
    printf("pontos: %d\n", pontos1);
    
    printf("\n");
    printf("Carta2: \n");
    printf("estado: %c \n", estad02);
    printf("codigo:%s \n", codigo2);
    printf("cidade:%s \n", cidade2);
    printf("polulacao:%d \n", populacao2);
    printf("area: %f \n", area2);
    printf("pib:%f \n", pib2);
    printf("pontos: %d\n", pontos2);
   

    return 0;
}
