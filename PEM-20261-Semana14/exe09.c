/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Multiplicação de Matrizes                              *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#define N 3
int main(){
    int i, j, k, Matriz_a[N][N], Matriz_b[N][N], Matriz_c[N][N];
    printf("Preencha as duas Matrizes:\n");
    printf("\nPrimeira matriz:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nDigite o valor do indice [%d][%d]: ",i+1,j+1);
            scanf("%d",&Matriz_a[i][j]);
        }
    }
    printf("\nSegunda matriz:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nDigite o valor do indice [%d][%d]: ",i+1,j+1);
            scanf("%d",&Matriz_b[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            Matriz_c[i][j] = 0;
        }
    }
     /*
       Multiplicação matricial

       Para cada posição C[i][j]:

       C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j]

       i -> linha de A e C
       j -> coluna de B e C
       k -> percorre a linha de A e a coluna de B
    */
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
                for(k=0;k<N;k++){
                    Matriz_c[i][j] += Matriz_a[i][k] * Matriz_b[k][j];
                }
        }
    }

    printf("\nMatriz A:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%4d", Matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%4d", Matriz_b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C = A x B:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%4d", Matriz_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}