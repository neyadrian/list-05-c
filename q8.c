/*Crie um programa 10 números, armazene eles em um vetor e diga qual
elemento é o maior, qual é o menor e qual a média dos valores.

Entrada:
Números digitados: 10 4 7 2 9 3 6 8 5 1


Saída esperada:
Maior valor: 10  
Menor valor: 1  
Média: 5.5 */

#include <stdio.h>

int main() {
    
    int i, num[10], maior, menor;
    float media;

    printf("Digite 10 numeros: ");

    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    maior = menor = num[0];

    for (i = 0; i < 10; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if(num[i] < menor) {
            menor = num[i];
        }
    }
    
    media = ((float) maior + menor) / 2.0;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media dos dois numeros: %.1f\n", media);

    return 0;
}