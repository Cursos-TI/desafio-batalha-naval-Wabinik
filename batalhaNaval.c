#include <stdio.h>

#define linhas 10
#define colunas 10
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /* Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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
    // 0 0 1 0 0*/

//Variáveis
//Matriz tabuleiro
/*Visualização do tabuleiro
  0    1   2   3   4   5   6   7   8   9
0{1,   2,  3,  4,  5,  6,  7,  8,  9, 10},
1{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
2{21, 22, 23, 24, 25, 26, 27, 28, 29, 30}, 
3{31, 32, 33, 34, 35, 36, 37, 38, 39, 40}, 
4{41, 42, 43, 44, 45, 46, 47, 48, 49, 50}, 
5{51, 52, 53, 54, 55, 56, 57, 58, 59, 60}, 
6{61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
7{71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
8{81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
9{91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
*/

int TABULEIRO [linhas][colunas] =
{
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

//Posição navios
int queenannerevenge[3] = {TABULEIRO[1][1] =+ 3, TABULEIRO[2][1] =+ 3, TABULEIRO[3][1] =+ 3};
int whydah[3] = {TABULEIRO[7][6] =+ 3, TABULEIRO[7][7] =+ 3, TABULEIRO[7][8] =+ 3};
int fancy[3] = {TABULEIRO[7][0] =+ 3, TABULEIRO[8][1] =+ 3, TABULEIRO[9][2] =+ 3};
int kingston[3] = {TABULEIRO[2][4] =+ 3, TABULEIRO[1][5] =+ 3, TABULEIRO[0][6] =+ 3};

//Matrizes de Habilidades **APENAS VISUALIZAÇÃO**
/*int octaedro[3][5] = 
{
{0, 0, 1, 0, 0}, //0,3
{0, 1, 1, 1, 0}, //1,2 - 1,4
{0, 0, 1, 0, 0},  //2,3
};

int cone[3][5] =
{
{0, 0, 1, 0, 0}, //4,7
{0, 1, 1, 1, 0}, //5,6 - 5,8
{1, 1, 1, 1, 1}  //6,5 - 6,9
};

int cruz[3][5] = 
{
{0, 0, 1, 0, 0}, //6,3
{1, 1, 1, 1, 1}, //7,1 - 7,5
{0, 0, 1, 0, 0}  //8,3
};*/




//Tela de boas-vindas
printf("Bem-vindo(a) ao seu jogo de BATALHA NAVAL\n");
printf("Este é o seu tabuleiro:\n\n");

//Como imprimir a matriz com o FOR:
for(int l = 0; l < 10; l++) //Primeiro, definir a variável da linha e quantas vezes se repetiria.
{
    for(int c = 0; c < 10; c++) //Em seguida, fazer o mesmo com a variável da coluna
    {   

        if (l == 0 && c == 3 || l == 1 && c == 2 || l == 1 && c == 3 || l == 1 && c == 4 || l == 2 && c == 3) //Condicional de octaedro
        {
            TABULEIRO[l][c] = 1; 
        } 
        if (l == 6 && c == 3 || l == 7 && c == 1 || l == 7 && c == 2 || l == 7 && c == 3 || l == 7 && c == 4 || l == 7 && c == 5 || l == 8 && c == 3) //Condicional de cruz
        {
            TABULEIRO[l][c] = 1; 
        } 
        if (l == 4 && c == 7 || l == 5 && c == 6 || l == 5 && c == 7 || l == 5 && c == 8 || l == 6 && c == 5 || l == 6 && c == 6 || l == 6 && c == 7 || l == 6 && c == 8 || l == 6 && c == 9) //Condicional de cone
        {
            TABULEIRO[l][c] = 1; 
        } 


        printf("%d\t", TABULEIRO[l][c]); //Função printf para imprimir a matriz, com \t para tabulação de espaço entre as colunas
    }
    printf("\n"); //Função printf com \n para dar espaço entre as linhas
}

//Legenda para saber o que significa cada número
printf("\n\nLEGENDA:\n\n0 = Água\n1 = Habilidades\n3 = Navios\n\n");

    return 0;
}
