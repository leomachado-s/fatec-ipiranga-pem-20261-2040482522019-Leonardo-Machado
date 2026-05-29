/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Funções com Passagem por Ponteiro                      *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#define N 4
void troca(int *a, int *b);
void minMax(int *v, int n, int *min, int *max);
void normalizaVetor(float *v, int n);

int main(){
    int minimo=0, maximo=0, varA = 5, varB =10, vetor[N]={1,2,3,4};
    printf("\nValores antes das funcoes:\n");
    printf("Variavel A : %d , Varialvel B: %d\n", varA, varB);

    printf("\nValores do Vetor: \n");
    for(int i=0;i<N;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nMinimo %d, Maximo %d", minimo, maximo);

    float vetor_float[5] = {2.0, 5.0, 10.0, 1.0, 8.0};

    printf("\nAntes da normalizacao: ");
    for(int i = 0; i < 5; i++) {
        printf("%.1f\n", vetor_float[i]);
    }

    troca(&varA,&varB);
    minMax(vetor, N, &minimo, &maximo);
    normalizaVetor(vetor_float,5);

    printf("\n\nValores Depois das funcoes:\n");
    printf("Variavel A : %d , Varialvel B: %d\n", varA, varB);
    printf("Minimo %d, Maximo %d", minimo, maximo);
    printf("\nDepois da normalizacao: \n");
    for(int i = 0; i < 5; i++){
        printf("%.1f \n", vetor_float[i]);
    }

    return 0;

}


void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void minMax(int *v, int n, int *min, int *max){
    *min = *v; 
    *max = *v;
    for(int i =0;i<n;i++){
        if(*min > *(v+i)){
            *min = *(v+i);
        }
        else if(*max < *(v+i)){
            *max = *(v+i);
        }
    }
}
void normalizaVetor(float *v, int n){
if (n <= 0) return;

    float maior = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) > maior) {
            maior = *(v + i);
        }
    }


    if (maior != 0.0) {
        for (int i = 0; i < n; i++) {
            *(v + i) /= maior; 
        }
    }
}
