/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* gerenciar o peso de carga de 10 pacotes                *
* Data - 23/04/2026                                      * 
* Autor: Leonardo machado;2040482522019                  *
*--------------------------------------------------------*/
#include<stdio.h>

void processarCarga(float *peso, int tam);

int main() {
    float carga[10]= {10, 10, 10, 10, 13, 10, 10, 19, 10, 10};
        printf("Antes:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", carga[i]);
    }
    processarCarga(carga, 10);

    printf("\nDepois:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", carga[i]);
    }
    return 0;
}

void processarCarga(float *peso, int tam){
    float soma=0,media;
    for(int i=0;i<tam;i++){
        // soma os valores do vetor
        soma += *(peso + i);
    }
    // faz a media, e a aplica os 10% encima do valor
    media = (soma /tam)* 1.1;
    for(int i=0;i<tam;i++){
       if(*(peso + i) > media){
            *(peso + i) *=0.95;
       }
    }
}
