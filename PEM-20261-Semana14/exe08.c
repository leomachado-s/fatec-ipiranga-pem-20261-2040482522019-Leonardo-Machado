/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Análise e Manipulação de Vetores                       *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#define N 8
int main(){
    int inverso[N], vetor[N];
    int i, par=0, impar=0, busca, encontrado=0;
    int maior_valor, menor_valor, indice_ma=0, indice_me =0;

    printf("Digite %d numeros inteiros:\n", N);

    for(i = 0; i < N; i++) {
        printf("v[%d] = ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            par ++;
        }
        else{
            impar ++;
        }
    }

    printf("\nVetor original:\n");

    for(i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    for(i=0;i<N;i++){
        if (i == 0) {
            maior_valor = menor_valor = vetor[i];
        }
        if(menor_valor > vetor[i]){
            menor_valor = vetor[i];
            indice_me = i;
        }
        else if(maior_valor < vetor[i]){
            maior_valor = vetor[i];
            indice_ma = i;
        }

    }

    printf("\n\nMaior valor: %d", maior_valor);
    printf("\nIndice do maior: %d", indice_ma+1);

    printf("\n\nMenor valor: %d", menor_valor);
    printf("\nIndice do menor: %d", indice_me+1);

    printf("\n\nQuantidade de pares: %d", par);
    printf("\nQuantidade de impares: %d", impar);
    printf("\n\nVetor inverso:\n");
    for(i=0;i<N;i++){
        inverso[i]= vetor[N-1-i];
        printf("%d ",inverso[i]);
    }
    printf("\nDigite um valor para buscar no vetor: ");
    scanf("%d",&busca);
    i=0;
    do{

        if(busca == vetor[i]){
            //usando i+1 para que o usuario tenha um melhor entendimento, [i]-> 0 = indice [1] 
            printf("\nO valor foi encontrado no indice %d", i+1);
            encontrado ++;
        }  
    i++;
    }while(i < 10 && encontrado == 0);

    if(encontrado == 0){
        printf("\nNao foi encontrado esse valor no vetor");
    }

return 0;
}