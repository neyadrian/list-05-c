/*Preencher um vetor com os números pares do número 2 a 20 e imprima o vetor na tela.
Saída esperada:
2 4 6 8 10 12 14 16 18 20 */

#include <stdio.h>

int main () {
    int i, pares[20];

    for(i = 0; i < 20; i++) {
        pares[i] = i + 1;
        if(pares[i] % 2 == 0) {
            printf("%d ", pares[i]);
        }
    }
}