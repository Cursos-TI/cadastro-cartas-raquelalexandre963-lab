#include <stdio.h>

int main() {
  int nota;

  printf("Digite a sua nota: \n");
  scanf("%d", &nota);

  // criar um programa que determina a letra da nota de um aluno com base na pontuação numérica
  // A >= 90
  // B >= 80
  // C >= 70
  // D >= 60
  // E >= 50
  // F

  if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else if (nota >= 50) {
    printf("Sua nota é E\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;
}