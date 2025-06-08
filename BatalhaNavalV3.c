#include <stdio.h>
# define linhas  10
# define colunas  10

int main(){


int Tabuleiro[linhas][colunas] = {0};

// Definindo Posições Dos Navios(vai ficar aqui pra sempre ovo mudar pra scanf não)
    
    Tabuleiro[2][5] = 1;
    Tabuleiro[2][6] = 1;        
    Tabuleiro[2][7] = 1;    Tabuleiro[1][7] = 1; Tabuleiro[0][7] = 1;       
    Tabuleiro[2][8] = 1;    Tabuleiro[3][7] = 1; Tabuleiro[4][7] = 1;
    Tabuleiro[2][9] = 1;        

    Tabuleiro[5][1] = 2;        
    Tabuleiro[6][1] = 2;    Tabuleiro[6][0] = 2; Tabuleiro[6][2] = 2;        
    Tabuleiro[7][1] = 2;        

    Tabuleiro[6][5] = 1;
    Tabuleiro[7][4] = 1;
    Tabuleiro[8][3] = 1;
    
    Tabuleiro[7][5] = 1;
    Tabuleiro[7][6] = 1;
    Tabuleiro[8][4] = 1;
    Tabuleiro[8][5] = 1;
    Tabuleiro[8][6] = 1;
    Tabuleiro[8][7] = 1;
    
    
    
    // Printa o tabuleiro
printf("Batalha Naval\n");
printf("  1 2 3 4 5 6 7 8 9 10\n");         // Legenda De cima

for (int i = 0; i < linhas; i++) {
    printf("%c ", 'A' + i);                 // Printa A legenda do lado
    for (int j = 0; j < colunas; j++) {
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