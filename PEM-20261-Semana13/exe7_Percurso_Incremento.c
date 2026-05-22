/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Percurso com Incremento                                *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>

int main(){
    int soma =0, maior_val, menor_val, array[8]={1, 2, 5, 7, 8, 11, 45, 10};
    int *calcu= array;
    float media;
    maior_val = *array;
    menor_val = *array;
    for(int i=0;i<8;i++){
        printf("Array[%d] valor %d e Endereco: %p\n",i+1,*(array+i), *(array+i));
        soma = soma + *(array + i);
        if(maior_val< *(array+i)){
            maior_val = *(array + i);
        }
        if(menor_val > *(array + i)){
            menor_val = *(array + i);
        }
    }
    media = soma / 8.0;

    printf("\nResultados:\n");
    printf("A soma e: %d\n",soma);
    printf("A media e: %.2f\n", media);
    printf("O maior valor e: %d\n",maior_val);
    printf("O menor valor e: %d",menor_val);
    return 0;
}