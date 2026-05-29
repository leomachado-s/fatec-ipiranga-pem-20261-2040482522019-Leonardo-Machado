/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Aritmética de Ponteiros sobre um Vetor                 *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include <stdio.h>

int main(){
int  soma =0, *p, vetor[6] ={1,2,3,4,5,6};
    p= vetor;
    printf("Valores originais:\n\n");
    for(int i=0;i<6;i++){
        printf("\nelemento:%d, Endereco:%p ",*(p+i),p+i);
        *(p +i)*=2;
        soma += *(p + i);
    }
    printf("\nA soma dos elementos eh: %d\n", soma);
    printf("\nDobrando os valores in-place\n");
    for(int i=0;i<6;i++){
        *(p +i)*=2;
        printf("\nelemento:%d, Endereco:%p ",*(p+i),p+i);
    }
    printf("O tamanho de sizeof(int) neste sistema eh: %zu bytes\n", sizeof(int));
    printf("os enderecos acima saltam de %zu em %zu bytes.\n", sizeof(int), sizeof(int));
    return 0;
}