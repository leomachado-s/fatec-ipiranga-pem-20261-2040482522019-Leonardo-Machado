/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Biblioteca de Operações com Strings                    *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include <string.h>
#include "exe13.h"

static char paraMinusculo(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c;
}

int contaVogais(char *s) {
    int contador = 0;
    
    while (*s != '\0') {
        char atual = paraMinusculo(*s);
        if (atual == 'a' || atual == 'e' || atual == 'i' || atual == 'o' || atual == 'u') {
            contador++;
        }
        s++;
    }
    return contador;
}

void inverteCString(char *s) {
    int tam = strlen(s);
    if (tam <= 1) return;

    char *inicio = s;         
    char *fim = s + (tam - 1); 

 
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++; 
        fim--;    
    }
}

int ePalindromo(char *s) {
    int tam = strlen(s);
    if (tam <= 1) return 1; 
    char *inicio = s;
    char *fim = s + (tam - 1);

    while (inicio < fim) {
       
        if (paraMinusculo(*inicio) != paraMinusculo(*fim)) {
            return 0; 
        }
        inicio++;
        fim--;
    }
    return 1; 