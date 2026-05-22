/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Modificação Indireta                                   *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/

#include<stdio.h>

int main(){
    int vetor[5]={1,2,3,4,5};
    int *p ;
    printf("Antes:\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(vetor + i));
    }
    printf("\nDepois:\n");

    for(int i=0;i<5;i++){
        printf("%d ",*(vetor + i)*2);
    }


    return 0;
}