/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Troca de Valores via Referência                        *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/

#include<stdio.h>

void trocar (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b= aux;
}

int main (){
 int valor1 = 5, valor2 = 10;

 printf("Antes\n");
 printf("1 valor:  %d, 2 valor: %d\n",valor1, valor2);

 trocar(&valor1,&valor2);

 printf("depois\n");
 printf("1 valor: %d, 2 valor: %d\n",valor1,valor2);

    return 0;
}