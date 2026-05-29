/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Torre de Hanói — Solução Recursiva Comentada           *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include <stdio.h>
#include <math.h> 
int total_movimentos = 0;
void hanoi(int n, char origem, char destino, char auxiliar);

int main() {
    int n;

    do {
        printf("Digite o numero de discos (1 a 10): ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Quantidade invalida! Por favor, tente novamente.\n");
        }
    } while (n < 1 || n > 10);

    printf("\n--- Executando a Torre de Hanoi para %d discos ---\n", n);
    
    
    hanoi(n, 'A', 'C', 'B');

   
    printf("\n--- Analise Final ---\n");
    printf("Total de movimentos realizados: %d\n", total_movimentos);
    
   
    int calculado_teorico = (int)pow(2, n) - 1;
    printf("Valor teorico esperado (2^%d - 1): %d\n", n, calculado_teorico);

    if (total_movimentos == calculado_teorico) {
        printf("Sucesso: O numero de movimentos CONCIDE com a formula teorica!\n");
    } else {
        printf("Erro: Houve uma divergencia no calculo.\n");
    }

    return 0;
}


void hanoi(int n, char origem, char destino, char auxiliar) {
    // 1. CASO BASE
    // Se houver apenas 1 disco, basta movê-lo diretamente da origem para o destino.
    if (n == 1) {
        printf("Mova disco 1 de %c para %c\n", origem, destino);
        total_movimentos++;
        return;
    }

    /* PASSO RECURSIVO
       Passo A: Move os n-1 discos de cima da 'origem' para a 'auxiliar', 
       usando o pino de 'destino' como espaço temporário.
    */
    hanoi(n - 1, origem, auxiliar, destino);

    // Passo B: Move o maior disco restante (o disco n) diretamente da 'origem' para o 'destino'.
    printf("Mova disco %d de %c para %c\n", n, origem, destino);
    total_movimentos++;

    // Passo C: Move os n-1 discos que estavam na 'auxiliar' para o 'destino',
    // usando o pino de 'origem' como espaço temporário.
    hanoi(n - 1, auxiliar, destino, origem);
}