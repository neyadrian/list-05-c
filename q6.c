/*Gerar/Cria um vetor de 10 posições, randomicamente,
depois contar quantos pares, quantos ímpares e quantos
números primos existem no vetor;

Entrada:
Vetor gerado: 2 3 4 5 6 7 8 9 10 11


Saída esperada:
Pares: 5  
Ímpares: 5  
Primos: 5
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i, j, primo = 0, par = 0, impar = 0, aleatorio[10];

    for(i = 0; i < 10; i++) {
        aleatorio[i] = (rand() % 20) + 1;
    }

    if(aleatorio[i] <= 1) {
        primo = 0;
    } else {
        for(j = 2; j <= aleatorio[i] / 2; j++) {
            if(aleatorio[i] % j == 0) {
                primo++;
                break;
            }
        }
    }

    for(i = 0; i < 10; i++) {
        if(aleatorio[i] % 2 == 0) {
            par++;
        }
    }

    for(i = 0; i < 10; i++) {
        if(aleatorio[i] % 2 != 0) {
            impar++;
        }
    }

    printf("Vetor gerado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", aleatorio[i]);
    }

    printf("\n");
    printf("Pares: %d\n", par);
    printf("Impares: %d\n", impar);
    printf("Primos: %d\n", primo);

    return 0;
}