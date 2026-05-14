/*--------------------------------------------------------------------*
  -Nome: Leonardo da Silva Machado - RA:2040482522019                 |
  -Fatec Ipiranga - Ads Vespertino                                    |
  -Atividade PEM - semana 9 - Dia 15/05/2026                          |
  -Objetivo: Explorar a Modularização através da criação de           |
  -bibliotecas personalizadas (arquivos.h e .c) e a aplicação de      |
  -Recursividade para a resolução de problemas matemáticos,garantindo |
  -a separação entre lógica de processamento e interface de usuário.  |         
  *------------------------------------------------------------------*/
#include <stdio.h>
#include "recursao.h"

void decToBin(int n){
if(n==0){
    return;
}
decToBin(n/2);
printf("%d", n%2);
}

int potencia(int base, int exp){

    if(exp == 0){
        return 1;
    }
    else{
        return base*potencia (base, exp - 1);
    }
}

int somaDigitos(int n){
if(n==0){
    return 0;
}
return (n%10) + somaDigitos(n/10);
}