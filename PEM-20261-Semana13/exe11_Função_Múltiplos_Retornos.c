/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Função com Múltiplos Retornos                          *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
void estatisticas (int *v,int n, int *soma, float *media, int *maior, int *menor){
    *maior = *v;
    *menor = *v;
    *soma = 0;
    for(int i=0;i<n;i++){
        int valor_atual = *(v + i);
        *soma += valor_atual;
        if(*maior< valor_atual){
            *maior = valor_atual;
        }
        if(*menor > valor_atual){
            *menor = valor_atual;
        }
    }
    *media = (float)*soma / n;
}

int main(){

    int array[5]={4,5,8,2,1};
    int tam = 5, max, min, somar;
    float med;
    estatisticas(array,tam,&somar,&med,&max,&min);

    printf("\nResultados:\n");
    printf("A soma e: %d\n",somar);
    printf("A media e: %.2f\n",med);
    printf("O maior valor e: %d\n",max);
    printf("O menor valor e: %d",min);

    return 0;
}