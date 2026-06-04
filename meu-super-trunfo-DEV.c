#include <stdio.h>

int main() {
   
    // Declarando variaveis da carta 1: São Paulo

    char estado = 'S'; 

    char codigo[] = "A01"; 

    char nome_da_cidade[] = "Sao Paulo"; 

    int populacao = 12325000;

    float area = 1521.11;

    float pib = 699.28; // em bilhões

    int pontos_turisticos = 50;

    // mostrar resultado da carta 1: Sao Paulo

    float densidade_populacional = (float) populacao / area;
    float pib_per_capita = (pib *  56724.32) / populacao;

    // Mostrando os dados da carta 1

    printf("Cadastrada a carta 01\n");

    printf("Carta 1: Estado %c, Codigo: %s\n", estado, codigo);

    printf("Cidade: %s, Populacao: %d\n", nome_da_cidade, populacao);

    printf("Densidade: %.2f hab/km²\n", densidade_populacional);

    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    // Declarando variantes da carta 2: Rio de Janeiro

    char estado = 'S'; 

    char codigo[] = "A01"; 

    char nome_da_cidade[] = "Rio de Janeiro"; 

     int populacao = 6748000;

     float area = 1200.25; 

     float pib = 300.50; // em bilhoes

     int pontosTuristicos2 = 30;

     // mostrar resultado da carta 2: Rio de Janeiro

    float densidade_populacional = (float) populacao / area;
    float pib_per_capita = (pib * 44532.91 ) / populacao;




    return 0;
}