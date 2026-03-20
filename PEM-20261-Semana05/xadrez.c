/**-------------------------------------------
* -Nome: Leonardo da Silva Machado - RA:2040482522019
  -Fatec Ipiranga - Ads Vespertino 
  -Atividade PEM - semana 5 - Dia 19/03/2026
  -Objetivo: O objetivo desta atividade prática de modularização 
   de uma solução software,Demonstramos uma jogada muito famosa,
   no mundo dos enxadristas, qual seja, o "Xeque Pastor".
   Esta jogada consiste em finalizar o jogo, por "Xeque Mate"em 3 lances*           
  *-------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 8
#define MAX 4

//declaração dos modulos
void inicializarTabuleiro(char tab[TAM][TAM][MAX]);
void imprimirTabuleiro(char tab[TAM][TAM][MAX]);
int moverPeca(char tab[TAM][TAM][MAX], int lInicial, int cInicial, int lFinal, int cFinal);

int validarCavalo(int lInicial, int cInicial, int lFinal, int cFinal);
int validarBispo(int lInicial, int cInicial, int lFinal, int cFinal);
int validarRainha(int lInicial, int cInicial, int lFinal, int cFinal);


int main() {

    char tab[TAM][TAM][MAX];

    inicializarTabuleiro(tab);

    // JOGADA 1
    printf("\n------------Jogada #1------------");

    printf("\nBrancas: Peao e2 -> e4\n\n");
    moverPeca(tab, 6, 4, 4, 4);
    imprimirTabuleiro(tab);

    printf("\nPretas: Peao e7 -> e5\n\n");
    moverPeca(tab, 1, 4, 3, 4);
    imprimirTabuleiro(tab);


    // JOGADA 2 
    printf("\n------------Jogada #2------------");

    printf("\nBrancas: Bispo f1 -> c4\n\n");
    moverPeca(tab, 7, 5, 4, 2);
    imprimirTabuleiro(tab);

    printf("\nPretas: Cavalo b8 -> c6\n\n");
    moverPeca(tab, 0, 1, 2, 2);
    imprimirTabuleiro(tab);

    // JOGADA 3 
    printf("\n------------Jogada #3------------");

    printf("\nBrancas: Dama d1 -> h5\n\n");
    moverPeca(tab, 7, 3, 3, 7);
    imprimirTabuleiro(tab);

    printf("\nPretas: Cavalo g8 -> f6\n\n");
    moverPeca(tab, 0, 6, 2, 5);
    imprimirTabuleiro(tab);

    // JOGADA 4 
    printf("\n------------Jogada #4------------");

    printf("\nBrancas: Dama h5 captura em f7 (Xeque Mate)\n\n");
    moverPeca(tab, 3, 7, 1, 5);
    imprimirTabuleiro(tab);

    printf("\nXEQUE-MATE!\n");

    return 0;
}

void inicializarTabuleiro(char tab[TAM][TAM][MAX]) {

    // deixar em branco o tabuleiro
    for (int linha = 0; linha < TAM; linha++) {
        for (int coluna = 0; coluna < TAM; coluna++) {
            strcpy(tab[linha][coluna], "   ");
        }
    }

    // adciona a o tabuleiro os Peoes tanto de branco quanto de preto
    for (int coluna = 0; coluna < TAM; coluna++) {
        sprintf(tab[6][coluna], "PB%d", coluna+1);
        sprintf(tab[1][coluna], "PP%d", coluna+1);
    }

    // adciona a o tabuleiro as outras peças Pretas
    char pecasPretas[] = {'t','c','b','q','k','b','c','t'};
    for (int coluna = 0; coluna < TAM; coluna++) {
        sprintf(tab[0][coluna], "%cP%d", pecasPretas[coluna], coluna+1);
    }

    // adciona a o tabuleiro as outras peças Brancas
    char pecasBrancas[] = {'T','C','B','Q','K','B','C','T'};
    for (int coluna = 0; coluna < TAM; coluna++) {
        sprintf(tab[7][coluna], "%cB%d", pecasBrancas[coluna], coluna+1);
    }
}

void imprimirTabuleiro(char tab[TAM][TAM][MAX]) {

    for (int linha = 0; linha < TAM; linha++) {

        printf("%d   ", TAM - linha);

        for (int coluna = 0; coluna < TAM; coluna++) {
            printf("%-4s", tab[linha][coluna]);
        }

        printf("\n");
    }

    printf("    ");
    for (int coluna = 0; coluna < TAM; coluna++) {
        printf("%-4c", 'a' + coluna);
    }
    printf("\n");
}

int moverPeca(char tab[TAM][TAM][MAX], int lInicial, int cInicial, int lFinal, int cFinal) {

    char peca[MAX];
    strcpy(peca, tab[lInicial][cInicial]);

    if (strcmp(peca, "...") == 0) {
        printf("Posicao vazia!\n");
        return 0;
    }

    int valido = 0;

    switch (toupper(peca[0])) {

        case 'C':
            valido = validarCavalo(lInicial, cInicial, lFinal, cFinal);
            break;

        case 'B':
            valido = validarBispo(lInicial, cInicial, lFinal, cFinal);
            break;

        case 'Q':
            valido = validarRainha(lInicial, cInicial, lFinal, cFinal);
            break;

        default:
            valido = 1;
    }

    if (valido) {
        char origem[4], destino[4];

        sprintf(origem, "%c%d", 'a'+cInicial, 8-lInicial);
        sprintf(destino, "%c%d", 'a'+cFinal, 8-lFinal);

        strcpy(tab[lFinal][cFinal], peca);
        strcpy(tab[lInicial][cInicial], "...");

        return 1;
    }

    printf("Movimento invalido!\n");
    return 0;
}


int validarCavalo(int lInicial, int cInicial, int lFinal, int cFinal) {
    int dl = abs(lFinal - lInicial);
    int dc = abs(cFinal - cInicial);
    return (dl == 2 && dc == 1) || (dl == 1 && dc == 2);
}

int validarBispo(int lInicial, int cInicial, int lFinal, int cFinal) {
    return abs(lFinal - lInicial) == abs(cFinal - cInicial);
}

int validarRainha(int lInicial, int cInicial, int lFinal, int cFinal) {
    return (lInicial == lFinal || cInicial == cFinal || abs(lFinal - lInicial) == abs(cFinal - cInicial));
}