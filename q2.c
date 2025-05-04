/*Preencher um primeiro vetor com o quadrado dos números pares do intervalo 2 a 20.
Preencher um segundo vetor com os números de 10 a 19. Mostrar a soma dos dois vetores.

Vetor 1: 4 16 36 64 100 144 196 256 324 400  
Vetor 2: 10 11 12 13 14 15 16 17 18 19  
Soma dos vetores: 14 27 48 77 114 159 212 273 342 419 */

#include <stdio.h>

int main() {
    
    int i, quad[20], num[10], soma[10];

    for(i = 0; i < 10; i++) {
        quad[i] = (2 * (i + 1)) * (2 * (i + 1));
        printf("%d ", quad[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++) {
        num[i] = 10 + i;
        printf("%d ", num[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++) {
        soma[i] = quad[i] + num[i];
        printf("%d ", soma[i]);
    }

    return 0;
}