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
#ifndef exe13_H
#define exe13_H

// Conta o número de vogais (maiúsculas e minúsculas) em uma string
int contaVogais(char *s);

// Inverte a string in-place (direto na memória original)
void inverteCString(char *s);

// Retorna 1 se a string for um palíndromo, 0 caso contrário
int ePalindromo(char *s);

#endif