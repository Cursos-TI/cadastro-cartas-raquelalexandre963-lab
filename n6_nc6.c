#include <stdio.h>

int main() {

    // Declarando variáveis para o produto A e B
    char camisaA[30] = "camisa A";
    char calcaA[30] = "calca A";

    // Declarando variáveis para o estoque, valor unitário e estoque mínimo dos produtos
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Declarando variáveis para o valor total dos produtos
    float valorA = 10.50;
    float valorB = 20.40;

    // Declarando variáveis para o estoque mínimo dos produtos
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Declarando variáveis para o valor total dos produtos
    double valorTotalA;
    double valorTotalB;

    // Calculando o valor total dos produtos
    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("camisa %s tem estoque %u e o valor unitario é %.2f\n", camisaA, estoqueA, valorA);
    printf("calca %s tem estoque %u e o valor unitario é %.2f\n", calcaA, estoqueB, valorB);
    printf("valor total da camisa A no estoque = R$ %.2f\n", valorTotalA);
    printf("valor total da calca A no estoque = R$ %.2f\n", valorTotalB);

    // Verificando se o estoque da camisa A está abaixo do mínimo
    if (estoqueA < estoqueMinimoA) {
        printf("O estoque da camisa A está abaixo do mínimo. Estoque atual: %u\n", estoqueA);
    } else {
        printf("O estoque da camisa A está acima do mínimo. Estoque atual: %u\n", estoqueA);
    }

    // Comparando estoqueA e estoqueB
    if (estoqueA <= estoqueB) {
        printf("estoqueA (%u) é menor ou igual a estoqueB (%u)\n", estoqueA, estoqueB);
    } else {
        printf("estoqueA (%u) é maior que estoqueB (%u)\n", estoqueA, estoqueB);
    }

    return 0;

}