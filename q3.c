/*Leia 10 números inteiros informados pelo usuário e armazene em um vetor. Em seguida determine e imprima o menor elemento no vetor.

Entrada:
Digite 10 números: 7 3 9 2 8 4 6 5 1 10


Saída esperada:
Menor número: 1 */

#include <stdio.h>

int main() {
    
    int num[10], menor, i;

    printf("Digite 10 números: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    menor = num[0];

    for(i = 1; i < 10; i++) {
        if(num[i] < menor) {
            menor = num[i];
        }
    }

    printf("Menor número: %d\n", menor);
    
    return 0;
}