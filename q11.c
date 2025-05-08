#include <stdio.h>

int main() {
    int V[8] = {3, 7, 5, 2, 8, 6, 1, 4}, aux;

    for (int i = 7; i >= 4; i--) {
        aux = V[i];
        V[i] = V[8 - i - 1];
        V[8 - i - 1] = aux;
    }
    
    for (int i = 0; i < 8; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}