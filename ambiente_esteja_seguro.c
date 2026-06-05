#include <stdio.h>

int main() {
    float temperatura;
    float umidade;
    int estoque;
    int alerta = 0;

    printf("Digite a temperatura do armazem: ");
    scanf("%f", &temperatura);

    printf("Digite a umidade do armazem (%%): ");
    scanf("%f", &umidade);

    printf("Digite o nivel de estoque: ");
    scanf("%d", &estoque);

    if (temperatura < 18.0f || temperatura > 26.0f) {
        printf("Alerta: temperatura fora do limite seguro!\n");
        alerta = 1;
    }

    if (umidade < 40.0f || umidade > 60.0f) {
        printf("Alerta: umidade fora do limite seguro!\n");
        alerta = 1;
    }

    if (estoque < 20 || estoque > 100) {
        printf("Alerta: nivel de estoque fora do limite seguro!\n");
        alerta = 1;
    }

    if (!alerta) {
        printf("Todas as condicoes estao dentro do programa de seguranca.\n");
    }

    return 0;
}
