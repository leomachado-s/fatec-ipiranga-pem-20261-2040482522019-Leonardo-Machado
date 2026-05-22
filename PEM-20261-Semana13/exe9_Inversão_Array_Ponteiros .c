/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Inversão de Array com Ponteiros                        *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
void inverter(int *arr, int n){
    int *inicio = arr;
    int *fim = arr + (n-1);
    int aux;

    while(inicio != fim){
        aux = *inicio;
        *inicio = *fim;
        *fim =  aux;
        inicio ++;
        fim--;
    }
    printf("\nArray invertido:\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));

    }
}
int main(){
    int vetor[7]={1,2,3,4,5,6,7};
    int tam = 7;

    printf("Array Antes:\n");
    for(int i=0;i<tam;i++){
        printf("%d ",*(vetor+i));
    }

    inverter(vetor,tam);

    return 0;
}