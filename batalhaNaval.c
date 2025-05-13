#include <stdio.h>

// Desafio Batalha Naval - Nível Novato


int main() {
   
    
    int tabuleiro[10][10] = {0}; // Inicializando a matriz com 0, representando água (sem navios).
    
    // Posicionando o primeiro navio horizontalmente
    int linha1 = 2, coluna1 = 3; // Coordenadas iniciais do navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = 3;  // Marcar posição do navio com 3
    }

    // Posicionando o segundo navio verticalmente
    int linha2 = 5, coluna2 = 6; // Coordenadas iniciais do navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = 3;  // Marcar posição do navio com 3
    }

    // Exibindo o tabuleiro após o posicionamento dos navios
    printf("Tabuleiro - Nível Novato:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Exibe cada célula do tabuleiro
        }
        printf("\n");
    }

    // Posicionando o terceiro navio na diagonal
    int linha3 = 1, coluna3 = 1; // Coordenadas iniciais do navio diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha3 + i][coluna3 + i] = 3;  // Marcar posição do navio com 3 na diagonal
    }

    // Posicionando o quarto navio na diagonal
    int linha4 = 7, coluna4 = 2; // Coordenadas iniciais do navio diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha4 + i][coluna4 + i] = 3;  // Marcar posição do navio com 3 na diagonal
    }

    // Exibindo o tabuleiro após o posicionamento dos navios, incluindo diagonais
    printf("\nTabuleiro - Nível Aventureiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Exibe cada célula do tabuleiro
        }
        printf("\n");
    }

 
    // Habilidade em Cone (Exemplo 5x5)
    int habilidadeCone[5][5] = {0}; // Matriz para habilidade em cone
    habilidadeCone[2][2] = 1; // Posição central do cone
    habilidadeCone[1][2] = 1; habilidadeCone[3][2] = 1; // Linhas ao lado
    habilidadeCone[2][1] = 1; habilidadeCone[2][3] = 1; // Colunas ao lado

    printf("\nHabilidade em Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCone[i][j]);  // Exibe o cone
        }
        printf("\n");
    }

  
    int habilidadeOctaedro[5][5] = {0}; // Matriz para habilidade em octaedro
    habilidadeOctaedro[2][2] = 1; // Posição central do octaedro
    habilidadeOctaedro[1][2] = 1; habilidadeOctaedro[3][2] = 1; // Linhas ao lado
    habilidadeOctaedro[2][1] = 1; habilidadeOctaedro[2][3] = 1; // Colunas ao lado

    printf("\nHabilidade em Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeOctaedro[i][j]);  // Exibe o octaedro
        }
        printf("\n");
    }

    // Habilidade em Cruz (Exemplo 5x5)
    int habilidadeCruz[5][5] = {0}; // Matriz para habilidade em cruz
    habilidadeCruz[2][2] = 1; // Posição central da cruz
    habilidadeCruz[1][2] = 1; habilidadeCruz[3][2] = 1; // Linhas verticais
    habilidadeCruz[2][1] = 1; habilidadeCruz[2][3] = 1; // Linhas horizontais

    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidadeCruz[i][j]);  // Exibe a cruz
        }
        printf("\n");
    }

    return 0;
}
