/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Busca Recursiva e Soma por Divisão do Vetor            *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chamadas_busca = 0;
int prof_atual_busca = 0;
int prof_max_busca = 0;
int chamadas_soma = 0;
int prof_atual_soma = 0;
int prof_max_soma = 0;

int buscaRec(int *v, int n, int chave, int pos_atual);
int somaRec(int *v, int ini, int fim);

int main() {
    int vetor[12];
    int chave_procurada, indice_encontrado, soma_total;

    srand(time(NULL));
    printf("Vetor gerado: [ ");
    for (int i = 0; i < 12; i++) {
        vetor[i] = (rand() % 50) + 1;
        printf("%d ", vetor[i]);
    }
    printf("]\n\n");
    soma_total = somaRec(vetor, 0, 11);
    
    printf("--- METRICAS DA SOMA RECURSIVA ---\n");
    printf("Soma total do vetor: %d\n", soma_total);
    printf("Quantidade total de chamadas recursivas: %d\n", chamadas_soma);
    printf("Profundidade maxima de recursao atingida: %d\n\n", prof_max_soma);

    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &chave_procurada);

    indice_encontrado = buscaRec(vetor, 12, chave_procurada, 0);

    printf("\n--- RESULTADO DA BUSCA ---\n");
    if (indice_encontrado != -1) {
        printf("Valor %d encontrado no indice: %d\n", chave_procurada, indice_encontrado);
    } else {
        printf("Valor %d nao existe no vetor.\n", chave_procurada);
    }

    printf("\n--- METRICAS DA BUSCA RECURSIVA ---\n");
    printf("Quantidade total de chamadas recursivas: %d\n", chamadas_busca);
    printf("Profundidade maxima de recursao atingida: %d\n", prof_max_busca);

    return 0;
}


/**
 * Busca linear recursiva em um vetor.
 * para pos_atual Parâmetro auxiliar para rastrear o índice avaliado.
 */
int buscaRec(int *v, int n, int chave, int pos_atual) {
    chamadas_busca++;
    prof_atual_busca++;
    if (prof_atual_busca > prof_max_busca) {
        prof_max_busca = prof_atual_busca;
    }

    // CASOS BASE
    // Caso Base A: O índice estourou o tamanho do vetor (elemento não encontrado)
    if (pos_atual >= n) {
        prof_atual_busca--; 
        return -1;
    }
    // Caso Base B: O elemento na posição atual é a chave que procuramos
    if (*(v + pos_atual) == chave) {
        prof_atual_busca--; 
        return pos_atual;
    }

    // PASSO RECURSIVO
    // Se não encontrou e o vetor não acabou, delega a busca para o próximo índice (pos_atual + 1)
    int resultado = buscaRec(v, n, chave, pos_atual + 1);

    prof_atual_busca--; 
    return resultado;
}

/**
 * Soma os elementos utilizando Divisão e Conquista (divisão sucessiva).
 */
int somaRec(int *v, int ini, int fim) {
    
    chamadas_soma++;
    prof_atual_soma++;
    if (prof_atual_soma > prof_max_soma) {
        prof_max_soma = prof_atual_soma;
    }

    // CASO BASE
    // Quando o intervalo reduz a apenas um elemento (ini == fim), a soma é o próprio elemento.
    if (ini == fim) {
        prof_atual_soma--; // Desempilhando
        return *(v + ini);
    }

    // PASSO RECURSIVO
    // Calcula o ponto médio para dividir o intervalo ao meio
    int meio = (ini + fim) / 2;

    // Divide o vetor em duas partes e soma recursivamente cada metade
    int soma_esquerda = somaRec(v, ini, meio);
    int soma_direita  = somaRec(v, meio + 1, fim);

    prof_atual_soma--; 
    
    return soma_esquerda + soma_direita;
}