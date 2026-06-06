#include <stdio.h>

#define MAX_TEXTO 80

typedef struct {
    char codigo[MAX_TEXTO];
    char estado[MAX_TEXTO];
    char cidade[MAX_TEXTO];
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;
} Carta;

double calcularDensidade(const Carta *carta) {
    if (carta->area <= 0.0) {
        return 0.0;
    }
    return carta->populacao / carta->area;
}

void imprimirCarta(const Carta *carta) {
    printf("Código: %s\n", carta->codigo);
    printf("Estado: %s\n", carta->estado);
    printf("Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área (km²): %.2f\n", carta->area);
    printf("PIB (R$): %.2f\n", carta->pib);
    printf("Pontos turísticos: %d\n", carta->pontosTuristicos);
    printf("Densidade populacional: %.2f\n", calcularDensidade(carta));
}

void imprimirComparacao(const char *atributo, double valor1, double valor2, int menorVence) {
    printf("\nComparação por %s:\n", atributo);
    printf("Carta 1: %.2f\n", valor1);
    printf("Carta 2: %.2f\n", valor2);
    if (valor1 == valor2) {
        printf("Resultado: Empate no %s.\n", atributo);
    } else if (menorVence ? valor1 < valor2 : valor1 > valor2) {
        printf("Resultado: Carta 1 vence no %s.\n", atributo);
    } else {
        printf("Resultado: Carta 2 vence no %s.\n", atributo);
    }
}

int main() {
    Carta carta1 = {"C1", "SP", "Sao Paulo", 12300000, 1521.11, 716000.0, 10};
    Carta carta2 = {"C2", "RJ", "Rio de Janeiro", 6748000, 1200.42, 300000.0, 8};

    printf("=== Super Trunfo - Países ===\n");
    printf("Executando com valores fixos, sem entrada do usuário.\n");

    printf("\n=== Carta 1 ===\n");
    imprimirCarta(&carta1);
    printf("\n=== Carta 2 ===\n");
    imprimirCarta(&carta2);

    imprimirComparacao("população", carta1.populacao, carta2.populacao, 0);
    imprimirComparacao("área", carta1.area, carta2.area, 0);
    imprimirComparacao("PIB", carta1.pib, carta2.pib, 0);
    imprimirComparacao("pontos turísticos", carta1.pontosTuristicos, carta2.pontosTuristicos, 0);
    imprimirComparacao("densidade populacional", calcularDensidade(&carta1), calcularDensidade(&carta2), 1);

    return 0;
}
