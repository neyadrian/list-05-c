/*Preencher um vetor com 5 números inteiros. Solicitar um número do teclado.
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor.
Se não existir, imprimir mensagem informando que não existe.

Entrada:
Digite 5 números: 12 8 23 9 15  
Digite um número para pesquisar: 23


Saída esperada:
Número 23 encontrado na posição 2. */

#include <stdio.h>

int main() {
    
    int i, num[5], procurado;

    printf("Digite 5 números: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("Digite um numero para pesquisar: ");
    scanf("%d", &procurado);

    for(i = 0; i < 5; i++) {
        if ( num[i] == procurado) {
            printf("Numero %d encontrado na posição %d.", procurado, i);
        }
    }

    return 0;
}
