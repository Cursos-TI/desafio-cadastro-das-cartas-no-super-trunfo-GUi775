#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo[5];
    char cidade[20];
    int população;
    float área;
    float PIB;
    int ponto;

    printf("digite o estado:  \n");
    scanf("%s", &estado);

    printf("digite o codigo: \n");
    scanf("%s", &codigo);

    printf("digite a polulação:  \n");
    scanf("%d,"&população);

    printf("digite a area:  \n");
    scanf("%f"; &área);

    printf("digite o PIB:  \n");
    scanf("%f", &PIB);

    printf("digite o ponto:  \n");
    scanf("%d", &ponto);

    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("população: %d\n", população);
    printf("area: %f\n", área);
    printf("PIB: %f\n",PIB);
    printf("PONTO: %d\n", ponto);

    return 0;
}
