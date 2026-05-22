/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Ordenação por Seleção com Ponteiros                    *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
void selectionSort(int *arr, int n){

    for(int i=0;i<n-1;i++){
        int *menor = arr+i;
        for(int j=i+1;j<n;j++){
             int verif = *(arr+j);
            if(*menor > *(arr +j)){
                menor = arr + j; 
            }
        }
    if(menor != (arr + i)){
        trocar(arr + i, menor);
        printf("Durante (troca): ");
        for(int i=0;i<n;i++){
            printf("%d ",*(arr+i));
        }
        printf("\n");
    }
    }
}





int main(){

    int array[8]={5,8,4,12,111,20,1,74};
    int tam = 8;
    printf("Array Antes:\n");
    for(int i=0;i<tam;i++){
        printf("%d ",*(array+i));
    }
    printf("\n");
    selectionSort(array,tam);

    printf("Array depois da ordenacao:\n");
    for(int i=0;i<tam;i++){
        printf("%d ",*(array+i));
    }   
    return 0;
}
