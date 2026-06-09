#include <stdio.h>

    //Operador NOT lógico (!)
    // O operador NOT lógico é usado para negar uma expressão lógica. Ele inverte o valor lógico de uma expressão, ou seja, se a expressão for verdadeira, o operador NOT a torna falsa, e vice-versa.

int main() {
  int a = 10;

  if (!(a > 0)) {
    printf("A não é um número positivo\n");
    //printf("A não em um número positivo\n"); 
  } else {
    printf("A variavel A é diferente de zero.\n");
  }

  return 0;
}