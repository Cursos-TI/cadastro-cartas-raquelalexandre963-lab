#include <stdio.h>

int main(void) {
    
    // Carta 1
    char nomeCarta1[50] = "Carta 1 - Dragao";
    int poder1 = 8;
    int defesa1 = 6;
    int velocidade1 = 7;

    // Carta 2
    char nomeCarta2[50] = "Carta 2 - Fenix";
    int poder2 = 7;
    int defesa2 = 9;
    int velocidade2 = 6;

    // Exibir as informações das cartas
    printf("=== SUPER TRUFO - DUELO DE CARTAS ===\n");
    printf("%s: Poder=%d, Defesa=%d, Velocidade=%d\n", nomeCarta1, poder1, defesa1, velocidade1);
    printf("%s: Poder=%d, Defesa=%d, Velocidade=%d\n", nomeCarta2, poder2, defesa2, velocidade2);

    // Duelos
    printf("\n=== DUELO DE PODER ===\n");
    if (poder1 > poder2) {
        printf("Vencedor: %s\n", nomeCarta1);
    } else if (poder2 > poder1) {
        printf("Vencedor: %s\n", nomeCarta2);
    } else {
        printf("Empate no duelo de poder!\n");
    }

    // Duelos de defesa e velocidade
    printf("\n=== DUELO DE DEFESA ===\n");
    if (defesa1 > defesa2) {
        printf("Vencedor: %s\n", nomeCarta1);
    } else if (defesa2 > defesa1) {
        printf("Vencedor: %s\n", nomeCarta2);
    } else {
        printf("Empate no duelo de defesa!\n");
    }

    // Duelos de velocidade
    printf("\n=== DUELO DE VELOCIDADE ===\n");
    if (velocidade1 > velocidade2) {
        printf("Vencedor: %s\n", nomeCarta1);
    } else if (velocidade2 > velocidade1) {
        printf("Vencedor: %s\n", nomeCarta2);
    } else {
        printf("Empate no duelo de velocidade!\n");
    }

    return 0;
}
