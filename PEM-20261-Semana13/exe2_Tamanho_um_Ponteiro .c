/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Tamanho de um Ponteiro                                 *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/

#include<stdio.h>
int main (){
 /* 
    EXPLICAÇÃO :
    O tamanho do ponteiro não varia com o tipo apontado. 
    Por que Todos os ponteiros ocupam exatamente o mesmo espaço na memória.
    Isso acontece porque um ponteiro não guarda o valor do dado em si, mas apenas 
    um endereco de memoria que aponta para onde o dado esta, ou seja, ele vai ser sempre constante
    independentemente de ele apontar para um char (1 byte) ou para um double (8 bytes).
    */
printf("Valor de int:    %zu Bytes\n", sizeof(int*));
printf("Valor de double: %zu Bytes\n", sizeof(double*));
printf("Valor de float:  %zu Bytes\n", sizeof(float*));
printf("Valor de char:   %zu Bytes\n", sizeof(char*));

return 0;
}