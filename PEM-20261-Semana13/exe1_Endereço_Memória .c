/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Endereço na Memória                                    *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/

#include<stdio.h>
int main (){
    int valor = 20, *ptr;
    float numero = 15.20, *p;
    char caractere = 'A', *crt;
    ptr = &valor;
    p = &numero;
    crt = &caractere;
    printf("O valor da variavel: %d, %.2f, %c \n",valor, numero, caractere);
    printf("O endereco de memoria da variavel: %p, %p, %p \n",&ptr, &p, &crt);
    printf("O endereco armazenado no ponteiro: %p, %p, %p \n",ptr, p, crt);
    printf("O valor obtido a partir do ponteiro: %d, %.2f, %c \n",*ptr, *p, *crt);

return 0;
}