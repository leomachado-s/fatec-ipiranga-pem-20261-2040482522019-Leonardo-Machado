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
#include <stdio.h>
#include "exe13.h"

int main() {

    printf("contaVogais\n");
    char str_vogais1[] = "Ola Mundo!";
    char str_vogais2[] = "um teste ae";
    
    printf("String 1: \"%s\" -> Vogais: %d \n", str_vogais1, contaVogais(str_vogais1));
    printf("String 2: \"%s\" -> Vogais: %d \n\n", str_vogais2, contaVogais(str_vogais2));


    printf("inverteCString\n");
    char str_inverte1[] = "Abcde";
    char str_inverte2[] = "Arara"; // Palíndromo, o resultado visual deve ser o mesmo
    
    printf("Antes 1: \"%s\"\n", str_inverte1);
    inverteCString(str_inverte1);
    printf("Depois 1: \"%s\" \n", str_inverte1);
    
    printf("Antes 2: \"%s\"\n", str_inverte2);
    inverteCString(str_inverte2);
    printf("Depois 2: \"%s\" \n\n", str_inverte2);


    printf("ePalindromo\n");
    char str_palindromo1[] = "RadAr";
    char str_palindromo2[] = "Ponteiro"; 
    
    printf("String 1: \"%s\" -> Eh palindromo?: %d \n", str_palindromo1, ePalindromo(str_palindromo1));
    printf("String 2: \"%s\" -> Eh palindromo?: %d \n", str_palindromo2, ePalindromo(str_palindromo2));

    return 0;
}