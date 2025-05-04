/*Faça um vetor que armazene as notas de 10 estudantes. Em seguida imprima as 5 melhores notas em ordem crescente; 

Entrada:
Notas: 7.5 9.2 8.0 6.3 7.0 5.5 9.5 8.8 6.9 10.0


Saída esperada:
5 melhores notas (ordem crescente): 8.0 8.8 9.2 9.5 10.0*/

#include <stdio.h>

int main() {
    
    int i, j = 0;
    float notas[10], notas_boas[5];

    printf("Digite as notas: ");
    for (i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
    }
    
    for (i = 0; i < 10; i++) {
        if(notas[i] >= 8.0 && j < 5) {
            notas_boas[j] = notas[i];
            j++;
        }
    }
    
    printf("5 melhores notas: ");
    for (i = 0; i < 5; i++) {
        printf("%.1f ", notas_boas[i]);
    }
    
    return 0;
}
