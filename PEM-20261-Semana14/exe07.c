/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Estatísticas de um Conjunto de Dados                   *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
int main(){
    float vetor[10], soma, media, menor_valor, maior_valor;
    int i;
    for(i=0;i<10;i++){
        printf("Digite um valor para o %d vetor: ", i+1);
        scanf("%f",&vetor[i]);
        media += vetor[i];
    }
    media = media /10;
    for(i=0;i<10;i++){
        if (i == 0) {
            maior_valor = menor_valor = vetor[i];
        }
        if(vetor[i]> media){
            soma += vetor[i];
        }
        if(menor_valor > vetor[i]){
            menor_valor = vetor[i];
        }
        else if(maior_valor < vetor[i]){
            maior_valor = vetor[i];
        }

    }
    printf("A media dos valores e: %.2f\n", media);
    printf("O menor valor e: %.2f\n", menor_valor);
    printf("O maior valor e: %.2f\n", maior_valor);
    printf("A soma dos valores acima da media e: %.2f", soma);

    return 0;

}