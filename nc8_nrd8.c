#include <stdio.h>

//Assim, a expressão a<10 && 5*b<c é avaliada como (a<10) && ((5*b)<c).
//Operadores lógicos AND (&&) e OR (||)
// Os operadores lógicos AND (&&) e OR (||) são usados para combinar express

// a > 0 => verdadeiro
// b < 0 => verdadeiro
// verdaeiro && verdadeiro && verdadeiro => verdadeiro
// verdaeiro || c == 0 
// verdaeiro || falso => verdadeiro


int main() {
  int a = 5;
  int b = -10;
  int c = -1;

   if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }

  return 0;
}
 