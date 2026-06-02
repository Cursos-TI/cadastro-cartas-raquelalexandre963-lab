#include <stdio.h>

int main(){
/*
incremento (++)
pré-incremento ++a
pós-incremento a++
decremento (--)
pré-decremento --a
pós-decremento a--
*/

int numero1 = 1, resultado;

//numero1 = numero1 + 1;
//numero1 += 1;
printf("antes incremento: %d\n", numero1);
//pos incremento;
//resultado - numero1;
//numero++;
resultado = numero1++;
//printf("apos incremento: %d\n", numero1);
printf("após Pós-incremento -numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("após Pré-incremento -numero 1: %d - resultado: %d\n", numero1, resultado);

//numero1 = numero1 - 1;
//numero1 -= 1;
numero1--;
printf("apos decremento: %d\n", numero1);

resultado = numero1--;
printf("após Pós-decremento -numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("após Pré-decremento -numero 1: %d - resultado: %d\n", numero1, resultado);


}