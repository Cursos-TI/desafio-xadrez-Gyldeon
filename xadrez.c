#include <stdio.h>

void moverbispo(int casasvertical, int casashorizontal){
    if (casasvertical <= 0) return;
    for (int i = 0; i < casashorizontal; i++){
    printf("Cima, Direita\n");
    }
    moverbispo(casasvertical - 1, casashorizontal);
}

void movertorre(int casas){
    if (casas <= 0) return;
    printf("Direita\n");
    movertorre(casas - 1);
}

void moverrainha(int casas){
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverrainha(casas - 1);
}

void movercavalo(){
    for (int i = 0; i < 2; i++){
        printf("Cima\n");
        
    }
    printf("Direita\n");
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo:\n");
    moverbispo(5, 1);
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre:\n");
    movertorre(5);
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da Rainha:\n");
    moverrainha(8);
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do Cavalo:\n");
    movercavalo();
    printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
