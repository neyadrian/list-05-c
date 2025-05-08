/*Gerar/Cria um vetor de 10 posições, randomicamente, depois ler um valor e
verificar se esse valor está ou não no vetor gerado;

Entrada:
Valor digitado: 15  
Saída esperada:
O número 15 está presente no vetor.
Vetor gerado: 2 5 7 15 20 3 6 9 18 1 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int aleatorio[10], num, i, encontrado = 0;

    srand(time(NULL)); 

    for(i = 0; i < 10; i++) {
        aleatorio[i] = (rand() % 20) + 1;
    }

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if (num == aleatorio[i]) {
            encontrado = 1;
            break;
        } 
    }

    if (encontrado) {
        printf("Numero %d está presente no vetor.\n", num);
    } else {
        printf("Numero %d está fora do vetor.\n", num);
    }

    printf("Vetor gerado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", aleatorio[i]);
    }
    
    return 0;
}
