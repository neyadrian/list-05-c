/*Gerar/Cria um vetor de 10 posições, randomicamente, depois contar quantos
valores repetidos existem no vetor gerado;

Entrada:
Vetor gerado: 5 3 8 5 2 8 7 3 1 2
Saída esperada:
Total de valores repetidos: 4
(5, 3, 8, 2)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int i, j, aleatorio[10], repetidos[10] = {0}, repet = 0, valores_repetidos[10];

    srand(time(NULL));
    
    for(i = 0; i < 10; i++) {
        aleatorio[i] = (rand() % 20) + 1;
    }

    for(i = 0; i < 10; i++) {
        if (repetidos[i]){
            continue;
        }
        for(j = i + 1; j < 10; j++) {
            if(aleatorio[i] == aleatorio[j]) {
                valores_repetidos[repet] = aleatorio[i];
                repet++;
                repetidos[i] = 1;
                break;
            }
        }
    }

    printf("Vetor gerado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", aleatorio[i]);
    }

    printf("\n");

    printf("Total de valores repetidos: %d\n", repet);

    if(repet > 0) {
        printf("Valores repetidos: ");
        for(i = 0; i < repet; i++) {
            printf("%d ", valores_repetidos[i]);
        }
    }    

    return 0;
}