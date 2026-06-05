#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura do armazem: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade do armazem: \n");
    scanf("%f", &umidade);
    printf("Digite o nivel de estoque: \n");
    scanf("%u", &estoque);
    
    if (temperatura > 30.0f) {
        printf("temperatura esta alta! \n");
    }
    else {
        printf("temperatura esta dentro dos parametros! \n"); 
    }

    if (umidade > 50.0f) {
        printf("umidade esta elevada! \n");
    }
    else {
        printf("umidade esta dentro dos parametros! \n");
    }

    if (estoque < estoqueMinimo) {
        printf("estoque esta abaixo do minimo! \n");
    }
    else {
        printf("estoque esta normal! \n");
    }

    return 0;
}