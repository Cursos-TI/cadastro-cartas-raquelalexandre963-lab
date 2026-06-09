#include <stdio.h>

// Como combinar operadores lógicos com operadores relacionais
//  relacionais (>=, <=, >) com operadores lógicos (&&) para criar uma condição mais complexa.
// Por exemplo, se quisermos verificar se uma pessoa está na faixa etária de 18 a 30 anos e tem uma altura superior a 1,70 metros, podemos usar a seguinte expressão:
// idade >= 18 && idade <= 30 && altura > 1.70
// Nesta expressão, estamos verificando se a idade da pessoa é maior ou igual a 18 anos, menor ou igual a 30 anos e se a altura é maior que 1,70 metros. Se todas essas condições forem verdadeiras, a expressão retornará verdadeiro; caso contrário, retornará falso.
// idade >= 18 => verdadeiro
// idade <= 30 => verdadeiro
// altura > 1.70 => verdadeiro
// verdadeiro && verdadeiro && verdadeiro => verdadeiro

int main() {
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}