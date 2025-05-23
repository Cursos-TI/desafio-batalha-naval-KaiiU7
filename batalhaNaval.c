#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
int Tabuleiro[10][10] = {           // J I0 1 2 3 4 5 6 7 8 9               // Rascunho pra mim não confundir dnv
    {0,0,0,0,0,0,0,0,0,0},          // 0 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 1 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 2 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 3 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 4 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 5 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 6 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 7 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},          // 8 {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}           // 9 {0,0,0,0,0,0,0,0,0,0},
};

// Definindo Posições Dos Navios(Por enquanto Vai ficar aqui mesmo depois eu mudo pra scanf)
    Tabuleiro[2][6] = 1;
    Tabuleiro[2][7] = 1;
    Tabuleiro[2][8] = 1;

    Tabuleiro[5][1] = 2;
    Tabuleiro[6][1] = 2;
    Tabuleiro[7][1] = 2;
    // Printa o tabuleiro
printf("Batalha Naval\n");
printf("  1 2 3 4 5 6 7 8 9 10\n");         // Legenda De cima
for (int i = 0; i < 10; i++) {
    printf("%c ", 'A' + i);                 // Printa A legenda do lado
    for (int j = 0; j < 10; j++) {
        if (Tabuleiro[i][j] == 0) {         // Olha a bomba !, quando tiver
            printf("0 ");
        } else if (Tabuleiro[i][j] == 1) {  // Player 1
            printf("1 ");
        } else if (Tabuleiro[i][j] == 2) {  // Player 2
            printf("2 ");
        }
    }
    printf("\n");
}



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
