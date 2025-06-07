#include <stdio.h>
int main(){

int Tabuleiro[10][10] = {0};

// Definindo Posições Dos Navios(Por enquanto Vai ficar aqui mesmo depois eu mudo pra scanf)
    Tabuleiro[2][6] = 1;        Tabuleiro[8][3] = 1;
    Tabuleiro[2][7] = 1;        Tabuleiro[7][4] = 1;
    Tabuleiro[2][8] = 1;        Tabuleiro[6][5] = 1;

    Tabuleiro[5][1] = 2;        Tabuleiro[1][1] = 2;
    Tabuleiro[6][1] = 2;        Tabuleiro[2][2] = 2;
    Tabuleiro[7][1] = 2;        Tabuleiro[3][3] = 2;
    
    // Printa o tabuleiro
printf("Batalha Naval\n");
printf("  1 2 3 4 5 6 7 8 9 10\n");         // Legenda De cima

for (int i = 0; i < 10; i++) {
    printf("%c ", 'A' + i);                 // Printa A legenda do lado
    for (int j = 0; j < 10; j++) {
        if (Tabuleiro[i][j] == 0) {         // printa o mar representado por ~~
            printf("~ ");
        } else if (Tabuleiro[i][j] == 1) {  // Player 1
            printf("1 ");
        } else if (Tabuleiro[i][j] == 2) {  // Player 2
            printf("2 ");
        }
    }
    printf("\n");
}


        return 0;
}