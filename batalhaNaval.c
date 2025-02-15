#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição do tabuleiro 5x5 inicializado com zeros
    int tabuleiro[5][5] = {0};
    
    // Definição dos navios
    // Navio 1 (vertical) - posicionado na coluna 1, ocupando as linhas 1 a 3
    tabuleiro[1][1] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[3][1] = 3;
    
    // Navio 2 (horizontal) - posicionado na linha 3, ocupando as colunas 3 a 5
    tabuleiro[3][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[3][5] = 3;
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Parte do navio posicionado na casa [%d][%d]\n", i, j);
            }
        }
    }
    
    return 0;
}