/* Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espetáculo.
A casa possui 30 mesas de 5 lugares cada. O programa deverá permitir que o usuário escolha o
código de uma mesa (100 a 129) e forneça a quantidade de lugares desejados. O programa deverá
informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o programa
deverá emitir uma mensagem. O programa deve terminar quando o usuário digitar o código 0 (zero)
para uma mesa ou quando todas as mesas estiverem ocupadas.


Entrada 1:
Mesa: 103  
Lugares desejados: 3  
Saída esperada:
Reserva feita com sucesso. Mesa 103 tem agora 3 lugares reservados.


Entrada 2:
Mesa: 103  
Saída esperada: 
Mesa 103 já está reservada. Escolha outra mesa.


Entrada 3:
Mesa: 0  
Saída esperada:
Encerrando sistema de reservas.
*/

#include <stdio.h>

int main() {
    
    int mesas[30] = {0}, lugares_mesas, mesa_escolhida, mesas_ocupadas = 0, indice;

    while (1) {
        printf("Mesa: ");
        scanf("%d", &mesa_escolhida);

        if (mesa_escolhida == 0) {
            printf("Encerrando sistema de reservas.\n");
            break;
        }

        if (mesa_escolhida < 100 || mesa_escolhida > 129) {
            printf("Código de mesa inválido, tente novamente.\n");
            continue;
        }
        
        indice = mesa_escolhida - 100;

        if (mesas[indice] > 0) {
            printf("Mesa %d já está reservada. Escolha outra mesa.\n", mesa_escolhida);
            continue;
        }

        printf("Lugares desejados: ");
        scanf("%d", &lugares_mesas);

        mesas[indice] = lugares_mesas;
        mesas_ocupadas++;
        printf("Reserva feita com sucesso. Mesa %d tem agora %d lugares reservados.\n", mesa_escolhida, lugares_mesas);

        if (mesas_ocupadas == 29) {
            printf("Todas as mesas estão reservadas. Encerrando sistema.\n");
            break;
        }
    }
    return 0;
}