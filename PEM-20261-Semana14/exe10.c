/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Jogo da Memória — Análise de Tabuleiro                 *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include <stdio.h>

#define N 4

void exibirTabuleiro(int M[N][N]);
int verificarSimetria(int M[N][N]);
int DiagonalPrincipal(int M[N][N]);
int DiagonalSecundaria(int M[N][N]);

int main() {

    int tabuleiro[N][N] = {
        {1, 2, 3, 4},
        {2, 1, 5, 6},
        {3, 5, 4, 7},
        {6, 7, 8, 8}
    };

    exibirTabuleiro(tabuleiro);

    if(verificarSimetria(tabuleiro))
        printf("\nA matriz e simetrica.\n");
    else
        printf("\nA matriz nao e simetrica.\n");

    printf("Soma da diagonal principal: %d\n",
           DiagonalPrincipal(tabuleiro));

    printf("Soma da diagonal secundaria: %d\n",
           DiagonalSecundaria(tabuleiro));

    return 0;
}

void exibirTabuleiro(int M[N][N]) {

    int i, j;

    printf("Tabuleiro:\n");

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%3d", M[i][j]);
        }
        printf("\n");
    }
}

int verificarSimetria(int M[N][N]) {

    int i, j;

    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {

            if(M[i][j] != M[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

int DiagonalPrincipal(int M[N][N]) {

    int soma = 0;
    int i;

    for(i = 0; i < N; i++) {
        soma += M[i][i];
    }

    return soma;
}

int DiagonalSecundaria(int M[N][N]) {

    int soma = 0;
    int i;

    for(i = 0; i < N; i++) {
        soma += M[i][N - 1 - i];
    }

    return soma;
}