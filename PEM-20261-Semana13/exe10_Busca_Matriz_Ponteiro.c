/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Busca em Matriz com Ponteiro                           *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>

int main(){
    int matriz[4][4]={{21,27,30,10},
                      {74,16,71,80},/*maior é 80 (linha 2,coluna 4)*/ 
                      {19,20,11,75},
                      {14,17,25,68}
                    };

    int *ptr = (int *)matriz; 
    int maior_val = *ptr;
    int indice_maior = 0; 

  
    for (int i = 0; i < 16; i++) {
        int valor_atual = *(ptr + i);
        if (valor_atual > maior_val) {
            maior_val = valor_atual;
            indice_maior = i; 
        }
    }
    int total_colunas = 4;
    int linha = indice_maior / total_colunas;
    int coluna = indice_maior % total_colunas;

    printf("Maior valor : %d\n", maior_val);
    printf("Posicao na matriz: Linha %d, Coluna %d\n", linha +1, coluna +1);

    return 0;
}